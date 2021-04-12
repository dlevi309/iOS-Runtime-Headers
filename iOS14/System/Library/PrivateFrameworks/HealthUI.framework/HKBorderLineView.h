/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface HKBorderLineView : UIView {

	long long _edges;
	double _borderWidth;
	UIColor* _borderLineColor;
	double _minimumHeight;
	double _minimumWidth;
	UIEdgeInsets _borderInsets;

}

@property (assign,nonatomic) long long edges;                        //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderLineColor;              //@synthesize borderLineColor=_borderLineColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderInsets;              //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) double minimumHeight;                   //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) double minimumWidth;                    //@synthesize minimumWidth=_minimumWidth - In the implementation block
+(void)drawBorderLinesInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 borderEdges:(long long)arg3 borderLineWidth:(double)arg4 borderLineColor:(id)arg5 borderInsets:(UIEdgeInsets)arg6 ;
-(double)minimumWidth;
-(void)setMinimumWidth:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)minimumHeight;
-(void)setMinimumHeight:(double)arg1 ;
-(long long)edges;
-(void)drawRect:(CGRect)arg1 ;
-(double)borderWidth;
-(id)initWithCoder:(id)arg1 ;
-(void)setEdges:(long long)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderLineColor:(UIColor *)arg1 ;
-(void)_initFields;
-(UIColor *)borderLineColor;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
@end

