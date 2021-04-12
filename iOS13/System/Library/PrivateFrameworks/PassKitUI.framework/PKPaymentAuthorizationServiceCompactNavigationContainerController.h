/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKCompactNavigationContainerController.h>

@class LAUIPhysicalButtonView, LAUIHorizontalArrowView;

@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController {

	unsigned char _rotationCount;
	BOOL _cameraOrientationSupported;
	BOOL _attemptedFaceIDViewCreation;
	LAUIPhysicalButtonView* _physicalButtonView;
	LAUIHorizontalArrowView* _cameraArrowView;
	BOOL _showPhysicalButtonIndicator;
	BOOL _showCameraIndicator;

}

@property (nonatomic,readonly) LAUIPhysicalButtonView * physicalButtonView; 
@property (assign,nonatomic) BOOL showPhysicalButtonIndicator;                           //@synthesize showPhysicalButtonIndicator=_showPhysicalButtonIndicator - In the implementation block
@property (assign,nonatomic) BOOL showCameraIndicator;                                   //@synthesize showCameraIndicator=_showCameraIndicator - In the implementation block
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_createFaceIDViewsIfNecessary;
-(BOOL)_effectiveShowPhysicalButtonIndicator;
-(BOOL)_effectiveShowCameraIndicator;
-(LAUIPhysicalButtonView *)physicalButtonView;
-(void)setShowPhysicalButtonIndicator:(BOOL)arg1 ;
-(void)setShowCameraIndicator:(BOOL)arg1 ;
-(BOOL)showPhysicalButtonIndicator;
-(BOOL)showCameraIndicator;
@end

