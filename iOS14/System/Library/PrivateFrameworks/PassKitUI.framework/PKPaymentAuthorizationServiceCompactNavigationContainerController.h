/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKCompactNavigationContainerController.h>

@class LAUIHorizontalArrowView, LAUIPhysicalButtonView;

@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController {

	unsigned char _rotationCount;
	BOOL _attemptedSecondaryViewCreation;
	BOOL _cameraOrientationSupported;
	LAUIHorizontalArrowView* _cameraArrowView;
	LAUIPhysicalButtonView* _physicalButtonView;
	BOOL _showPhysicalButtonIndicator;
	BOOL _showCameraIndicator;

}

@property (nonatomic,readonly) LAUIPhysicalButtonView * physicalButtonView; 
@property (assign,nonatomic) BOOL showPhysicalButtonIndicator;                           //@synthesize showPhysicalButtonIndicator=_showPhysicalButtonIndicator - In the implementation block
@property (assign,nonatomic) BOOL showCameraIndicator;                                   //@synthesize showCameraIndicator=_showCameraIndicator - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)_createSecondaryViewsIfNecessary;
-(BOOL)_effectiveShowPhysicalButtonIndicator;
-(BOOL)_effectiveShowCameraIndicator;
-(LAUIPhysicalButtonView *)physicalButtonView;
-(BOOL)showCameraIndicator;
-(void)setShowPhysicalButtonIndicator:(BOOL)arg1 ;
-(void)setShowCameraIndicator:(BOOL)arg1 ;
-(BOOL)showPhysicalButtonIndicator;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
@end

