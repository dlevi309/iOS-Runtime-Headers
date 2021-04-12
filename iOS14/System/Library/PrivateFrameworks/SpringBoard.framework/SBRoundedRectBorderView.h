/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface SBRoundedRectBorderView : UIView

@property (nonatomic,retain) UIColor * borderColor; 
@property (assign,nonatomic) double borderWidth; 
@property (assign,nonatomic) double cornerRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)borderColor;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
@end

