/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface VUICollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	UIEdgeInsets _gradientBoundsInsets;
	struct {
		unsigned layoutBelowDisabled : 1;
	}  _flags;

}

@property (assign,nonatomic) UIEdgeInsets gradientBoundsInsets;              //@synthesize gradientBoundsInsets=_gradientBoundsInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)layoutBelowIfNeeded;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(void)_getGradientMaskBounds:(out CGRect*)arg1 startInsets:(out UIEdgeInsets*)arg2 endInsets:(out UIEdgeInsets*)arg3 intensities:(out UIEdgeInsets*)arg4 ;
-(void)_performWithoutLayoutBelow:(/*^block*/id)arg1 ;
-(UIEdgeInsets)gradientBoundsInsets;
-(void)setGradientBoundsInsets:(UIEdgeInsets)arg1 ;
@end

