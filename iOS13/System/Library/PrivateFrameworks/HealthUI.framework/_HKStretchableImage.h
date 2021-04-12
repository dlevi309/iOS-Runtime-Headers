/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class UIImage;

@interface _HKStretchableImage : NSObject {

	UIImage* _topImage;
	UIImage* _centerImage;
	UIImage* _bottomImage;
	UIImage* _singlePointImage;

}

@property (nonatomic,retain) UIImage * topImage;                      //@synthesize topImage=_topImage - In the implementation block
@property (nonatomic,retain) UIImage * centerImage;                   //@synthesize centerImage=_centerImage - In the implementation block
@property (nonatomic,retain) UIImage * bottomImage;                   //@synthesize bottomImage=_bottomImage - In the implementation block
@property (nonatomic,retain) UIImage * singlePointImage;              //@synthesize singlePointImage=_singlePointImage - In the implementation block
-(void)setCenterImage:(UIImage *)arg1 ;
-(UIImage *)centerImage;
-(double)_desiredWidth;
-(void)_renderSingleImageInContext:(CGContextRef)arg1 point:(CGPoint)arg2 contextBounds:(CGRect)arg3 alpha:(double)arg4 ;
-(void)_renderStretchedInContext:(CGContextRef)arg1 frame:(CGRect)arg2 contextBounds:(CGRect)arg3 alpha:(double)arg4 ;
-(void)renderInContext:(CGContextRef)arg1 topCenter:(CGPoint)arg2 bottomCenter:(CGPoint)arg3 contextBounds:(CGRect)arg4 alpha:(double)arg5 ;
-(UIImage *)topImage;
-(void)setTopImage:(UIImage *)arg1 ;
-(UIImage *)bottomImage;
-(void)setBottomImage:(UIImage *)arg1 ;
-(UIImage *)singlePointImage;
-(void)setSinglePointImage:(UIImage *)arg1 ;
@end

