/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

