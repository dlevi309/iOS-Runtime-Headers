/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)borderColor;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setHairlineBorder:(BOOL)arg1 ;
-(BOOL)hairlineBorder;
@end

