/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)updateSynchronizeTimeNoSaveForAccount:(id)arg1 ;
+(void)updateSynchronizeTimeForAccount:(id)arg1 inStore:(id)arg2 ;
-(void)setController:(AKAppleIDAuthenticationController *)arg1 ;
-(AKAppleIDAuthenticationController *)controller;
-(id)_authController;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(BOOL)shouldSynchronizeForAccount:(id)arg1 ;
-(id<AKFollowUpProvider>)followupProvider;
-(BOOL)synchronizeFollowUpsForAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(void)setFollowupProvider:(id<AKFollowUpProvider>)arg1 ;
@end

