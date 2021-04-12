/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <libobjc.A.dylib/TSAnimatedViewProperties.h>

@class UIImageView;

@interface TSHeadlineViewAnimatedViewProperties : NSObject <TSAnimatedViewProperties> {

	 thumbnailImageViewFrame;
	 thumbnailViewForAnimator;

}

@property (assign,nonatomic) CGRect thumbnailImageViewFrame; 
@property (retain,nonatomic) UIImageView * thumbnailViewForAnimator; 
-(id)init;
-(CGRect)thumbnailImageViewFrame;
-(void)setThumbnailImageViewFrame:(CGRect)arg1 ;
-(UIImageView *)thumbnailViewForAnimator;
-(void)setThumbnailViewForAnimator:(UIImageView *)arg1 ;
@end

