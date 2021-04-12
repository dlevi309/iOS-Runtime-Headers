/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface TSKCenterTilingImageView : UIView {

	UIImage* mLeftCapImage;
	UIImage* mCenterTileImage;
	UIImage* mRightCapImage;

}

@property (nonatomic,retain) UIImage * leftCapImage; 
@property (nonatomic,retain) UIImage * centerTileImage; 
@property (nonatomic,retain) UIImage * rightCapImage; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setLeftCapImage:(UIImage *)arg1 ;
-(void)setCenterTileImage:(UIImage *)arg1 ;
-(void)setRightCapImage:(UIImage *)arg1 ;
-(UIImage *)leftCapImage;
-(UIImage *)centerTileImage;
-(UIImage *)rightCapImage;
@end

