/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)_endDynamicHysteresisIncrease;
-(void)_beginDynamicHysteresisIncreaseWithCompetingScrollView:(id)arg1 ;
-(void)_updateStateForDynamicHysteresisIncrease;
@end

