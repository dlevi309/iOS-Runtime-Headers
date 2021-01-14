/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGTrialClientWrapper.h>

@class _PASLock;

@interface SGReminderTrialClientWrapper : SGTrialClientWrapper {

	_PASLock* _lock;

}
+(id)sharedInstance;
-(id)init;
-(id)reminderOverrides;
-(void)updateFactors;
-(id)baseModelName;
-(BOOL)confirmationOptional;
-(BOOL)triggerOptional;
-(BOOL)actionVerbOptional;
-(id)messagesBannerLimit;
-(id)reminderEnrichments;
-(id)reminderInputMapping;
-(id)reminderOutputMapping;
@end

