/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView {

	double _lineWidthPixels;
	BOOL _disabled;
	BOOL _hasFlexibleCornerRadius;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	double _cornerRadius;

}

@property (nonatomic,retain) UIColor * strokeColor;                     //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                       //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) double cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL hasFlexibleCornerRadius;              //@synthesize hasFlexibleCornerRadius=_hasFlexibleCornerRadius - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(UIColor *)fillColor;
-(double)cornerRadius;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHasFlexibleCornerRadius:(BOOL)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3 updateView:(BOOL)arg4 ;
-(void)updateView;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_fillColor:(BOOL)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(double)_cornerRadiusAdjustedForBoundsHeight;
-(double)_screenScale;
-(BOOL)hasFlexibleCornerRadius;
@end

