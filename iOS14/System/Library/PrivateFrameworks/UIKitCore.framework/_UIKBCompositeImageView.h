/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)imageSize;
-(void)layoutSubviews;
-(NSArray *)imageViews;
-(void)setImageViews:(NSArray *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end

