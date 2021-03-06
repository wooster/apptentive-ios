//
//  ATWebClient+SurveyAdditions.h
//  ApptentiveSurveys
//
//  Created by Andrew Wooster on 11/4/11.
//  Copyright (c) 2011 Apptentive. All rights reserved.
//

#import "ATWebClient.h"

@class ATAPIRequest;
@class ATLegacySurveyResponse;
@class ATSurveyResponse;

@interface ATWebClient (SurveyAdditions)
- (ATAPIRequest *)requestForGettingSurveys;
- (ATAPIRequest *)requestForPostingLegacySurveyResponse:(ATLegacySurveyResponse *)surveyResponse;
- (ATAPIRequest *)requestForPostingSurveyResponse:(ATSurveyResponse *)surveyResponse;
@end

void ATWebClient_SurveyAdditions_Bootstrap();
