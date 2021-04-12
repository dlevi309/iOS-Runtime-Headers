/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _UIKBCompositeImageView : UIView {

	NSArray* _imageViews;
	CGSize _imageSize;

}

@property (assign,nonatomic) CGSize imageSize;                  //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) NSArray * imageViews;              //@synthesize imageViews=_imageViews - In the implementation block
-(void)layoutSubviews;
-(CGSize)imageSize;
-(void)setImageViews:(NSArray *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(NSArray *)imageViews;
@end

