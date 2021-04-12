/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>
#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>
#import <libobjc.A.dylib/PXCloudPhotoWelcomeNavigationControllerDismissDelegate.h>

@class NSArray, PSCloudStorageOffersManager, AAUIGenericTermsRemoteUI, NSString;

@interface PXCloudPhotoWelcomeViewController : OBWelcomeController <PSCloudStorageOffersManagerDelegate, AAUIGenericTermsRemoteUIDelegate, PXCloudPhotoWelcomeNavigationControllerDismissDelegate> {

	BOOL __requireStorageUpgrade;
	BOOL __enableOnAppear;
	NSArray* __buttons;
	PSCloudStorageOffersManager* __offersManager;
	AAUIGenericTermsRemoteUI* __termsManager;

}

@property (setter=_setButtons:,nonatomic,retain) NSArray * _buttons;                                              //@synthesize _buttons=__buttons - In the implementation block
@property (setter=_setOffersManager:,nonatomic,retain) PSCloudStorageOffersManager * _offersManager;              //@synthesize _offersManager=__offersManager - In the implementation block
@property (setter=_setTermsManager:,nonatomic,retain) AAUIGenericTermsRemoteUI * _termsManager;                   //@synthesize _termsManager=__termsManager - In the implementation block
@property (assign,setter=_setRequireStorageUpgrade:,nonatomic) BOOL _requireStorageUpgrade;                       //@synthesize _requireStorageUpgrade=__requireStorageUpgrade - In the implementation block
@property (assign,setter=_setEnableOnAppear:,nonatomic) BOOL _enableOnAppear;                                     //@synthesize _enableOnAppear=__enableOnAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(NSArray *)_buttons;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)managerDidCancel:(id)arg1 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)navigationControllerDidDismissViewController:(id)arg1 ;
-(void)_updateCurrentActivity;
-(void)_continueWithoutStoragePurchase:(id)arg1 ;
-(PSCloudStorageOffersManager *)_offersManager;
-(void)_cloudPhotoWelcomeViewGoButtonTapped:(id)arg1 ;
-(void)_cloudPhotoWelcomeViewNotNowButtonTapped:(id)arg1 ;
-(void)_cloudPhotoWelcomeViewLearnMoreTapped:(id)arg1 ;
-(void)_enableCloudPhotoLibrary;
-(void)_enableCloudPhotoLibraryWithoutCheck;
-(void)_handleEnableError:(id)arg1 ;
-(void)_setButtons:(id)arg1 ;
-(void)_setButtonsEnabled:(BOOL)arg1 ;
-(void)_setOffersManager:(id)arg1 ;
-(AAUIGenericTermsRemoteUI *)_termsManager;
-(void)_setTermsManager:(id)arg1 ;
-(BOOL)_requireStorageUpgrade;
-(void)_setRequireStorageUpgrade:(BOOL)arg1 ;
-(BOOL)_enableOnAppear;
-(void)_setEnableOnAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(id)initWithDefaultTitle;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
@end

