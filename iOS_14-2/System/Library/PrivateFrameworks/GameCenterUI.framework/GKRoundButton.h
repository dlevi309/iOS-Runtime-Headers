/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKButton.h>

@class UIImage;

@interface GKRoundButton : GKButton

@property (nonatomic,retain) UIImage * backgroundImage; 
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(UIImage *)backgroundImage;
-(CGRect)_highlightBounds;
@end

