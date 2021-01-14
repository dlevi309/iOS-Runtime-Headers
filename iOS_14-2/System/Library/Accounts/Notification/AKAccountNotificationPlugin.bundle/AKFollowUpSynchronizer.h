/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/AKAccountNotificationPlugin.bundle/AKAccountNotificationPlugin
*/

#import <AKAccountNotificationPlugin/AKAppleIDAuthenticationDelegate.h>

@protocol AKFollowUpProvider;
@class AKAppleIDAuthenticationController, NSString;

@interface AKFollowUpSynchronizer : NSObject <AKAppleIDAuthenticationDelegate> {

	id<AKFollowUpProvider> _followupProvider;
	AKAppleIDAuthenticationController* _controller;

}

@property (nonatomic,retain) id<AKFollowUpProvider> followupProvider;                     //@synthesize followupProvider=_followupProvider - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)updateSynchronizeTimeForAccount:(id)arg1 inStore:(id)arg2 ;
+(void)updateSynchronizeTimeNoSaveForAccount:(id)arg1 ;
-(id)_authController;
-(void)setController:(AKAppleIDAuthenticationController *)arg1 ;
-(id<AKFollowUpProvider>)followupProvider;
-(BOOL)shouldSynchronizeForAccount:(id)arg1 ;
-(BOOL)synchronizeFollowUpsForAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(void)setFollowupProvider:(id<AKFollowUpProvider>)arg1 ;
-(AKAppleIDAuthenticationController *)controller;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
@end

