/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <UIKitCore/UIView.h>

@class UIColor;

@interface FMBorderedView : UIView {

	BOOL _hairlineBorder;

}

@property (assign,nonatomic) BOOL hairlineBorder;                //@synthesize hairlineBorder=_hairlineBorder - In the implementation block
@property (assign,nonatomic) double borderWidth; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) UIColor * borderColor; 
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(void)setHairlineBorder:(BOOL)arg1 ;
-(BOOL)hairlineBorder;
@end

