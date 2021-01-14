/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDServiceBroker;

@interface ASDTestFlightFeedback : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)getFeedbackMetadataForBundleID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getLaunchInfoForBundleID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setLaunchInfo:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setFeedbackEnabled:(BOOL)arg1 forVersion:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setLaunchScreenEnabled:(BOOL)arg1 forVersion:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)submitFeedback:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateTestNotes:(id)arg1 forVersion:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)getDisplayNamesForBundleID:(id)arg1 ;
-(id)getEmailAddressForBundleID:(id)arg1 ;
-(id)getLaunchInfoForBundleID:(id)arg1 ;
-(id)getLaunchInfoForVersion:(id)arg1 ;
-(BOOL)isFeedbackEnabledForBundleID:(id)arg1 ;
-(BOOL)isLaunchScreenEnabledForBundleID:(id)arg1 ;
@end

