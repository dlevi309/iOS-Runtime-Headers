/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>
#import <libobjc.A.dylib/FAFamilySetupPrompterDelegate.h>

@class FAFamilySetupPrompter, UIViewController, SSAccount, NSString;

@interface FAFamilySettings : FAFamilyCircleRequest <FAFamilySetupPrompterDelegate> {

	FAFamilySetupPrompter* _prompter;
	FAFamilySettings* _retainedSelf;
	BOOL _isFirstRun;
	UIViewController* _presentingViewController;
	SSAccount* _iTunesAccount;

}

@property (assign) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (retain) SSAccount * iTunesAccount;                                //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (assign) BOOL isFirstRun;                                          //@synthesize isFirstRun=_isFirstRun - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(SSAccount *)iTunesAccount;
-(void)setITunesAccount:(SSAccount *)arg1 ;
-(void)launchiCloudFamilySettings;
-(void)familySetupPrompterDidFinish:(id)arg1 ;
-(void)_launchPrefsUsingDaemon;
-(BOOL)isFirstRun;
-(void)setIsFirstRun:(BOOL)arg1 ;
@end

