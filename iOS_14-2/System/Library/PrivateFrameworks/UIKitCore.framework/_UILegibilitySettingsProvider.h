/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIColor;

@interface _UILegibilitySettingsProvider : NSObject {

	BOOL _hasContrast;
	BOOL _accumulatorIsPrimed;
	double _mostRecentSaturation;
	double _accumulatedSaturation;
	double _mostRecentBrightness;
	double _accumulatedBrightness;
	UIColor* _contentColor;
	double _mostRecentContrast;
	double _accumulatedContrast;
	double _mostRecentLuminance;
	double _accumulatedLuminance;
	double _nextChangeBarrier;
	long long _currentStyle;

}

@property (nonatomic,retain) UIColor * contentColor;                    //@synthesize contentColor=_contentColor - In the implementation block
@property (assign,nonatomic) double mostRecentBrightness;               //@synthesize mostRecentBrightness=_mostRecentBrightness - In the implementation block
@property (assign,nonatomic) double accumulatedBrightness;              //@synthesize accumulatedBrightness=_accumulatedBrightness - In the implementation block
@property (assign,nonatomic) double mostRecentContrast;                 //@synthesize mostRecentContrast=_mostRecentContrast - In the implementation block
@property (assign,nonatomic) double accumulatedContrast;                //@synthesize accumulatedContrast=_accumulatedContrast - In the implementation block
@property (assign,nonatomic) double mostRecentLuminance;                //@synthesize mostRecentLuminance=_mostRecentLuminance - In the implementation block
@property (assign,nonatomic) double accumulatedLuminance;               //@synthesize accumulatedLuminance=_accumulatedLuminance - In the implementation block
@property (assign,nonatomic) double mostRecentSaturation;               //@synthesize mostRecentSaturation=_mostRecentSaturation - In the implementation block
@property (assign,nonatomic) double accumulatedSaturation;              //@synthesize accumulatedSaturation=_accumulatedSaturation - In the implementation block
@property (assign,nonatomic) BOOL hasContrast;                          //@synthesize hasContrast=_hasContrast - In the implementation block
@property (assign,nonatomic) BOOL accumulatorIsPrimed;                  //@synthesize accumulatorIsPrimed=_accumulatorIsPrimed - In the implementation block
@property (assign,nonatomic) double nextChangeBarrier;                  //@synthesize nextChangeBarrier=_nextChangeBarrier - In the implementation block
@property (assign,nonatomic) long long currentStyle;                    //@synthesize currentStyle=_currentStyle - In the implementation block
+(long long)styleForContentColor:(id)arg1 ;
+(long long)styleForContentColor:(id)arg1 contrast:(double)arg2 ;
-(UIColor *)contentColor;
-(BOOL)accumulatorIsPrimed;
-(double)nextChangeBarrier;
-(void)setContentColor:(UIColor *)arg1 ;
-(double)accumulatedLuminance;
-(double)accumulatedSaturation;
-(void)setMostRecentLuminance:(double)arg1 ;
-(void)setMostRecentBrightness:(double)arg1 ;
-(double)mostRecentLuminance;
-(long long)currentStyle;
-(void)setNextChangeBarrier:(double)arg1 ;
-(void)setHasContrast:(BOOL)arg1 ;
-(double)mostRecentContrast;
-(void)setAccumulatorIsPrimed:(BOOL)arg1 ;
-(void)setMostRecentContrast:(double)arg1 ;
-(id)settings;
-(void)setAccumulatedContrast:(double)arg1 ;
-(void)setMostRecentSaturation:(double)arg1 ;
-(double)accumulatedBrightness;
-(void)setAccumulatedLuminance:(double)arg1 ;
-(double)mostRecentSaturation;
-(double)mostRecentBrightness;
-(void)setAccumulatedSaturation:(double)arg1 ;
-(void)setAccumulatedBrightness:(double)arg1 ;
-(BOOL)accumulateChangesToContentColor:(id)arg1 contrast:(double)arg2 ;
-(BOOL)accumulateChangesToContentColor:(id)arg1 ;
-(BOOL)hasContrast;
-(void)clearContentColorAccumulator;
-(void)dealloc;
-(void)setCurrentStyle:(long long)arg1 ;
-(double)accumulatedContrast;
@end

