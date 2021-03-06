/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIChartBackgroundView.h>

@class NSArray, UIColor;

@interface FIUIChartDashedBackgroundView : FIUIChartBackgroundView {

	NSArray* _linePositions;
	BOOL _shouldCenterLines;
	unsigned long long _numLines;
	UIColor* _color;
	long long _direction;
	long long _lineType;

}

@property (assign,nonatomic) unsigned long long numLines;              //@synthesize numLines=_numLines - In the implementation block
@property (assign,nonatomic) BOOL shouldCenterLines;                   //@synthesize shouldCenterLines=_shouldCenterLines - In the implementation block
@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long direction;                      //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) long long lineType;                       //@synthesize lineType=_lineType - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)lineType;
-(void)setLineType:(long long)arg1 ;
-(void)_updateLinePositions;
-(void)drawLine:(id)arg1 rect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)setShouldCenterLines:(BOOL)arg1 ;
-(void)setNumLines:(unsigned long long)arg1 ;
-(unsigned long long)numLines;
-(BOOL)shouldCenterLines;
@end

