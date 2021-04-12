/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionView.h>

@class HUScrollGestureRecognitionResolver;

@interface HUQuickControlCollectionView : UICollectionView {

	HUScrollGestureRecognitionResolver* _scrollGestureResolver;

}

@property (nonatomic,readonly) HUScrollGestureRecognitionResolver * scrollGestureResolver;              //@synthesize scrollGestureResolver=_scrollGestureResolver - In the implementation block
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(HUScrollGestureRecognitionResolver *)scrollGestureResolver;
@end

