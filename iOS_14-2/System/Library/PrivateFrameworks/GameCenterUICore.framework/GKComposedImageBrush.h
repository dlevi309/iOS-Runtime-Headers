/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKImageBrush.h>

@class UIImage;

@interface GKComposedImageBrush : GKImageBrush {

	UIImage* _maskImage;
	UIImage* _backgroundImage;
	UIImage* _overlayImage;
	UIEdgeInsets _maskInsets;

}

@property (nonatomic,retain) UIImage * maskImage;                    //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                 //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets maskInsets;                //@synthesize maskInsets=_maskInsets - In the implementation block
-(void)setOverlayImage:(UIImage *)arg1 ;
-(UIImage *)overlayImage;
-(void)setMaskImage:(UIImage *)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(double)scaleForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(CGSize)sizeForInput:(id)arg1 ;
-(UIImage *)backgroundImage;
-(UIImage *)maskImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)maskInsets;
-(void)setMaskInsets:(UIEdgeInsets)arg1 ;
@end

