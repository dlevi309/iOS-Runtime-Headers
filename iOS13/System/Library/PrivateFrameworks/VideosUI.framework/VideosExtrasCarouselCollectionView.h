/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UICollectionView.h>

@protocol VideosExtrasCarouselCollectionViewDelegate;
@interface VideosExtrasCarouselCollectionView : UICollectionView {

	id<VideosExtrasCarouselCollectionViewDelegate> _carouselCollectionViewDelegate;

}

@property (assign,nonatomic,__weak) id<VideosExtrasCarouselCollectionViewDelegate> carouselCollectionViewDelegate;              //@synthesize carouselCollectionViewDelegate=_carouselCollectionViewDelegate - In the implementation block
-(void)didAddSubview:(id)arg1 ;
-(void)setCarouselCollectionViewDelegate:(id<VideosExtrasCarouselCollectionViewDelegate>)arg1 ;
-(id<VideosExtrasCarouselCollectionViewDelegate>)carouselCollectionViewDelegate;
@end

