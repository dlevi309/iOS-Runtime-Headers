/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>
#import <libobjc.A.dylib/FAFamilySetupPrompterDelegate.h>

@class FAFamilySetupPrompter, UIViewController, ACAccount, NSString;

@interface FAFamilySettings : FAFamilyCircleRequest <FAFamilySetupPrompterDelegate> {

	FAFamilySetupPrompter* _prompter;
	FAFamilySettings* _retainedSelf;
	BOOL _isFirstRun;
	UIViewController* _presentingViewController;
	ACAccount* _iTunesAccount;

}

@property (assign) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (retain) ACAccount * iTunesAccount;                                //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (assign) BOOL isFirstRun;                                          //@synthesize isFirstRun=_isFirstRun - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACAccount *)iTunesAccount;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setITunesAccount:(ACAccount *)arg1 ;
-(BOOL)isFirstRun;
-(void)launchiCloudFamilySettingsWithOptions:(id)arg1 ;
-(void)_launchPrefsUsingDaemonWithOptions:(id)arg1 ;
-(void)familySetupPrompterDidFinish:(id)arg1 ;
-(void)launchiCloudFamilySettings;
-(void)setIsFirstRun:(BOOL)arg1 ;
@end

