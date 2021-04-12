/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface SKUIViewControllerContainerCollectionView : UICollectionView {

	double _competingScrollViewPanGestureRecognizerHysteresis;
	BOOL _forcingIncreasedPanGestureRecognizerHysteresis;
	double _originalPanGestureRecognizerHysteresis;
	CFRunLoopObserverRef _runLoopObserver;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)_endDynamicHysteresisIncrease;
-(void)_beginDynamicHysteresisIncreaseWithCompetingScrollView:(id)arg1 ;
-(void)_updateStateForDynamicHysteresisIncrease;
@end

