/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

