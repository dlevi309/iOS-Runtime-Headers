/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)firstViewController;
-(void)dealloc;
-(void)viewControllerDidComplete:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg1 ;
-(long long)signupUserConsentResponse;
-(id)initWithAppName:(id)arg1 requireSetup:(BOOL)arg2 skipGeneralInstallConsent:(BOOL)arg3 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(void)planItemsUpdated:(id)arg1 planListError:(id)arg2 ;
-(void)_maybeShowPreinstallConsentOnViewController:(id)arg1 ;
-(BOOL)isPreinstallingViewControllerActive;
-(void)setIsPreinstallingViewControllerActive:(BOOL)arg1 ;
@end

