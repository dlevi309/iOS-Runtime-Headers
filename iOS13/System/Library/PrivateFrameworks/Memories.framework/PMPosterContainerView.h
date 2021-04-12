/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIView.h>

@class NSArray;

@interface PMPosterContainerView : UIView {

	NSArray* _images;
	NSArray* _imageViews;

}

@property (nonatomic,retain) NSArray * imageViews;              //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NSArray * images;                  //@synthesize images=_images - In the implementation block
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
@end

