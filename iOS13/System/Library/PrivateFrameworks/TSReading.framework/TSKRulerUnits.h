/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSFormatter;

@interface TSKRulerUnits : NSObject {

	int _rulerUnits;
	BOOL _showRulerAsPercentage;
	BOOL _centerRulerOrigin;
	int _preferredPixelUnit;
	NSFormatter* _formatter;
	NSFormatter* _lenientFormatter;
	NSFormatter* _highPrecisionFormatter;
	NSFormatter* _lenientHighPrecisionFormatter;

}

@property (assign,nonatomic) int rulerUnits;                          //@synthesize rulerUnits=_rulerUnits - In the implementation block
@property (assign,nonatomic) BOOL showRulerAsPercentage;              //@synthesize showRulerAsPercentage=_showRulerAsPercentage - In the implementation block
@property (assign,nonatomic) BOOL centerRulerOrigin;                  //@synthesize centerRulerOrigin=_centerRulerOrigin - In the implementation block
@property (assign,nonatomic) int preferredPixelUnit;                  //@synthesize preferredPixelUnit=_preferredPixelUnit - In the implementation block
+(id)instance;
+(id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(BOOL)arg3 lenient:(BOOL)arg4 ;
-(id)init;
-(void)dealloc;
-(void)setRulerUnits:(int)arg1 ;
-(void)setShowRulerAsPercentage:(BOOL)arg1 ;
-(void)setCenterRulerOrigin:(BOOL)arg1 ;
-(double)convertRulerUnitsToPoints:(double)arg1 ;
-(double)convertPointsToRulerUnits:(double)arg1 ;
-(id)formatter:(BOOL)arg1 lenient:(BOOL)arg2 ;
-(id)compatibleRulerUnits;
-(id)localizedCompatibleRulerUnits;
-(int)rulerUnits;
-(BOOL)showRulerAsPercentage;
-(BOOL)centerRulerOrigin;
-(int)preferredPixelUnit;
-(void)setPreferredPixelUnit:(int)arg1 ;
@end

