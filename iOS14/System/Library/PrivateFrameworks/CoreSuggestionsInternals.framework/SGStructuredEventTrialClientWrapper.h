/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGTrialClientWrapper.h>

@class _PASLock;

@interface SGStructuredEventTrialClientWrapper : SGTrialClientWrapper {

	_PASLock* _lock;

}
+(id)sharedInstance;
-(id)init;
-(id)supportedProviders;
-(id)engineConfig;
-(void)updateFactors;
-(id)baseModelName;
-(id)structuredEventInputMapping;
-(id)structuredEventOutputMapping;
-(BOOL)foundInMailNotifications;
-(id)notificationsAllowListOverride;
@end

