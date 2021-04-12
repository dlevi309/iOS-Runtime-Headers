/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>
#import <libobjc.A.dylib/TSCellularPlanManagerCacheDelegate.h>

@protocol TSSetupFlowItem;
@class NSError, NSMutableArray, NSString, UIViewController, UIBarButtonItem;

@interface TSSIMSetupPublicApiInstallFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate> {

	BOOL _requireSetup;
	BOOL _skipGeneralInstallConsent;
	NSError* _planInstallError;
	NSMutableArray* _danglingPlanItems;
	NSString* _carrierName;
	NSString* _installName;
	UIViewController*<TSSetupFlowItem> _currentViewController;
	unsigned long long _userConsentType;
	UIBarButtonItem* _cancelButton;
	BOOL _confirmationCodeRequired;
	long long _signupConsentResponse;
	BOOL _isPreinstallingViewControllerActive;

}

@property (assign) BOOL isPreinstallingViewControllerActive;              //@synthesize isPreinstallingViewControllerActive=_isPreinstallingViewControllerActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg1 ;
-(long long)signupUserConsentResponse;
-(id)initWithAppName:(id)arg1 requireSetup:(BOOL)arg2 skipGeneralInstallConsent:(BOOL)arg3 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(void)planItemsUpdated:(id)arg1 planListError:(id)arg2 ;
-(BOOL)isPreinstallingViewControllerActive;
-(void)setIsPreinstallingViewControllerActive:(BOOL)arg1 ;
-(void)_maybeShowPreinstallConsentOnViewController:(id)arg1 ;
@end

