/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/TPSTelephonyControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOrderedSet, TPSTelephonyController, VMVoicemailManager, NSString;

@interface PHSettingsRootListController : PSListController <TPSTelephonyControllerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSOrderedSet* _subscriptions;
	TPSTelephonyController* _telephonyController;
	VMVoicemailManager* _voicemailManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSOrderedSet * subscriptions;                                  //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,readonly) TPSTelephonyController * telephonyController;              //@synthesize telephonyController=_telephonyController - In the implementation block
@property (nonatomic,readonly) VMVoicemailManager * voicemailManager;                     //@synthesize voicemailManager=_voicemailManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSubscriptions:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)subscriptions;
-(id)specifiers;
-(id)init;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)telephonyController:(id)arg1 didChangeSubscriptions:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(TPSTelephonyController *)telephonyController;
-(VMVoicemailManager *)voicemailManager;
-(BOOL)shouldShowSpecifier:(id)arg1 ;
-(void)changeVoicemailPassword:(id)arg1 ;
-(BOOL)showVoicemailPassword;
@end

