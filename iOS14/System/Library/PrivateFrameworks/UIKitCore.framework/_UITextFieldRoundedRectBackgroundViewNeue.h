/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView {

	SCD_Struct_UI62 _flags;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	double _lineWidth;
	double _cornerRadius;

}

@property (assign,nonatomic) BOOL usesSinglePixelLineWidth; 
@property (nonatomic,retain) UIColor * strokeColor;                      //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                        //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                           //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL hasFlexibleCornerRadius; 
-(void)setHasFlexibleCornerRadius:(BOOL)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(BOOL)hasFlexibleCornerRadius;
-(double)lineWidth;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(double)_screenScale;
-(void)setActive:(BOOL)arg1 ;
-(id)_fillColor:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)fillColor;
-(BOOL)usesSinglePixelLineWidth;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 usesSinglePixelLineWidth:(BOOL)arg3 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(void)setUsesSinglePixelLineWidth:(BOOL)arg1 ;
-(void)updateView;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 usesSinglePixelLineWidth:(BOOL)arg3 updateView:(BOOL)arg4 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)_cornerRadiusAdjustedForBoundsHeight;
-(id)_strokeColor:(BOOL)arg1 ;
@end

