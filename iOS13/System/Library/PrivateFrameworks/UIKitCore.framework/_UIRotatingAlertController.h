/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertController.h>

@protocol UIPopoverPresentationControllerDelegate, _UIRotatingAlertControllerDelegate;
@class UIViewController;

@interface _UIRotatingAlertController : UIAlertController {

	unsigned long long _arrowDirections;
	BOOL _isRotating;
	BOOL _readyToPresentAfterRotation;
	UIViewController* _presentedViewControllerWhileRotating;
	id<UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;
	id<_UIRotatingAlertControllerDelegate> _rotatingSheetDelegate;

}

@property (assign,nonatomic,__weak) id<_UIRotatingAlertControllerDelegate> rotatingSheetDelegate;              //@synthesize rotatingSheetDelegate=_rotatingSheetDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirections;                                               //@synthesize arrowDirections=_arrowDirections - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)_canShowWhileLocked;
-(void)_presentingViewControllerDidChange:(id)arg1 ;
-(void)_presentingViewControllerWillChange:(id)arg1 ;
-(BOOL)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)setRotatingSheetDelegate:(id<_UIRotatingAlertControllerDelegate>)arg1 ;
-(BOOL)presentSheet;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(BOOL)presentSheetFromRect:(CGRect)arg1 ;
-(void)_didRotateAndLayout;
-(id<_UIRotatingAlertControllerDelegate>)rotatingSheetDelegate;
-(void)_updateSheetPositionAfterRotation;
-(void)doneWithSheet;
-(unsigned long long)arrowDirections;
-(void)setArrowDirections:(unsigned long long)arg1 ;
@end

