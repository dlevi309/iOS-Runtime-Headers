/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class CBClient, SBHarmonySettings, NSMutableArray;

@interface SBHarmonyController : NSObject {

	CBClient* _client;
	SBHarmonySettings* _harmonySettings;
	NSMutableArray* _suppressionAssertions;
	long long _suppressedWhitePointAdaptationEnabled;
	long long _suppressedBlueLightReductionEnabled;
	BOOL _supportsWhitePointAdaptation;
	BOOL _supportsBlueLightReduction;

}

@property (nonatomic,readonly) BOOL supportsWhitePointAdaptation;                                                //@synthesize supportsWhitePointAdaptation=_supportsWhitePointAdaptation - In the implementation block
@property (assign,getter=isWhitePointAdaptationEnabled,nonatomic) BOOL whitePointAdaptationEnabled; 
@property (assign,nonatomic) long long whitePointAdaptivityStyle; 
@property (nonatomic,readonly) BOOL supportsBlueLightReduction;                                                  //@synthesize supportsBlueLightReduction=_supportsBlueLightReduction - In the implementation block
@property (nonatomic,readonly) SBHarmonySettings * harmonySettings; 
+(id)sharedInstance;
-(id)init;
-(void)setWhitePointAdaptationEnabled:(BOOL)arg1 ;
-(BOOL)isWhitePointAdaptationEnabled;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 animationSettings:(id)arg2 ;
-(BOOL)supportsBlueLightReduction;
-(long long)whitePointAdaptivityStyle;
-(BOOL)supportsWhitePointAdaptation;
-(void)setWhitePointAdaptivityStyleWithStyles:(id)arg1 animationSettings:(id)arg2 ;
-(void)setWhitePointAdaptationStrength:(float)arg1 forWhitePointAdaptivityStyle:(long long)arg2 ;
-(SBHarmonySettings *)harmonySettings;
-(void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)arg1 toWhitePointAdaptivityStyleWithStyles:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5 ;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(id)_adaptationClient;
-(float)whitePointAdaptationStrengthForWhitePointAdaptivityStyle:(long long)arg1 ;
@end

