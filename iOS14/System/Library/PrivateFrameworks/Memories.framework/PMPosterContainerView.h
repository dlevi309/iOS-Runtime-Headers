/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImages:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(NSArray *)imageViews;
-(NSArray *)images;
-(void)setImageViews:(NSArray *)arg1 ;
@end

