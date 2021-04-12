/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUISettings.h>

@interface SBProximitySettings : SBUISettings {

	double _initialBacklightDebounceDuration;
	double _subsequentBacklightDebounceDuration;

}

@property (assign,nonatomic) double initialBacklightDebounceDuration;                 //@synthesize initialBacklightDebounceDuration=_initialBacklightDebounceDuration - In the implementation block
@property (assign,nonatomic) double subsequentBacklightDebounceDuration;              //@synthesize subsequentBacklightDebounceDuration=_subsequentBacklightDebounceDuration - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)initialBacklightDebounceDuration;
-(double)subsequentBacklightDebounceDuration;
-(void)setInitialBacklightDebounceDuration:(double)arg1 ;
-(void)setSubsequentBacklightDebounceDuration:(double)arg1 ;
@end

