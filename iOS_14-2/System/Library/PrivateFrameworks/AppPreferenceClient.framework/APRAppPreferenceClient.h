/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPreferenceClient.framework/AppPreferenceClient
*/

#import <libobjc.A.dylib/APRAppPreferenceInterface.h>

@interface APRAppPreferenceClient : NSObject <APRAppPreferenceInterface>
+(id)sharedInstance;
-(void)prewarmWithReply:(/*^block*/id)arg1 ;
-(void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)sendFeedbackForIntent:(id)arg1 aprResponse:(id)arg2 ;
-(void)getAppPredictionsForIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

