/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKStrokeStyle, HKTickStyle, HKAxisLabelStyle, HKFillStyle;

@interface HKAxisStyle : NSObject <NSCopying> {

	BOOL _showGridLines;
	HKStrokeStyle* _gridLineStyle;
	HKStrokeStyle* _minorGridLineStyle;
	HKStrokeStyle* _referenceGridLineStyle;
	HKStrokeStyle* _axisLineStyle;
	HKTickStyle* _tickStyle;
	HKAxisLabelStyle* _labelStyle;
	unsigned long long _tickPositions;
	unsigned long long _axisLabelPosition;
	HKFillStyle* _fillStyle;
	double _fillInnerPadding;
	double _fillOuterPadding;
	HKStrokeStyle* _borderStyleForFill;
	long long _location;

}

@property (nonatomic,retain) HKStrokeStyle * gridLineStyle;                       //@synthesize gridLineStyle=_gridLineStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * minorGridLineStyle;                  //@synthesize minorGridLineStyle=_minorGridLineStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * referenceGridLineStyle;              //@synthesize referenceGridLineStyle=_referenceGridLineStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * axisLineStyle;                       //@synthesize axisLineStyle=_axisLineStyle - In the implementation block
@property (nonatomic,retain) HKTickStyle * tickStyle;                             //@synthesize tickStyle=_tickStyle - In the implementation block
@property (nonatomic,retain) HKAxisLabelStyle * labelStyle;                       //@synthesize labelStyle=_labelStyle - In the implementation block
@property (assign,nonatomic) unsigned long long tickPositions;                    //@synthesize tickPositions=_tickPositions - In the implementation block
@property (assign,nonatomic) unsigned long long axisLabelPosition;                //@synthesize axisLabelPosition=_axisLabelPosition - In the implementation block
@property (assign,nonatomic) BOOL showGridLines;                                  //@synthesize showGridLines=_showGridLines - In the implementation block
@property (nonatomic,retain) HKFillStyle * fillStyle;                             //@synthesize fillStyle=_fillStyle - In the implementation block
@property (assign,nonatomic) double fillInnerPadding;                             //@synthesize fillInnerPadding=_fillInnerPadding - In the implementation block
@property (assign,nonatomic) double fillOuterPadding;                             //@synthesize fillOuterPadding=_fillOuterPadding - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * borderStyleForFill;                  //@synthesize borderStyleForFill=_borderStyleForFill - In the implementation block
@property (assign,nonatomic) long long location;                                  //@synthesize location=_location - In the implementation block
+(id)defaultStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)location;
-(void)setLocation:(long long)arg1 ;
-(void)setFillStyle:(HKFillStyle *)arg1 ;
-(HKFillStyle *)fillStyle;
-(void)setLabelStyle:(HKAxisLabelStyle *)arg1 ;
-(void)setTickPositions:(unsigned long long)arg1 ;
-(void)setAxisLineStyle:(HKStrokeStyle *)arg1 ;
-(void)setFillInnerPadding:(double)arg1 ;
-(void)setFillOuterPadding:(double)arg1 ;
-(void)setShowGridLines:(BOOL)arg1 ;
-(void)setGridLineStyle:(HKStrokeStyle *)arg1 ;
-(void)setBorderStyleForFill:(HKStrokeStyle *)arg1 ;
-(HKAxisLabelStyle *)labelStyle;
-(HKStrokeStyle *)gridLineStyle;
-(HKStrokeStyle *)minorGridLineStyle;
-(void)setMinorGridLineStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)referenceGridLineStyle;
-(void)setReferenceGridLineStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)axisLineStyle;
-(HKTickStyle *)tickStyle;
-(void)setTickStyle:(HKTickStyle *)arg1 ;
-(unsigned long long)tickPositions;
-(unsigned long long)axisLabelPosition;
-(void)setAxisLabelPosition:(unsigned long long)arg1 ;
-(BOOL)showGridLines;
-(double)fillInnerPadding;
-(double)fillOuterPadding;
-(HKStrokeStyle *)borderStyleForFill;
@end

