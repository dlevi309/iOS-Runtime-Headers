/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class OKPageViewController;

@interface OKNavigatorCollectionViewCell : UICollectionViewCell {

	OKPageViewController* _pageViewController;

}

@property (nonatomic,retain) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(OKPageViewController *)pageViewController;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
-(void)dealloc;
@end

