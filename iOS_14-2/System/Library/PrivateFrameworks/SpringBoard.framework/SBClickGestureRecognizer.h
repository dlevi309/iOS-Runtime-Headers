/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBPressGestureRecognizer.h>

@class NSMutableArray, NSMutableSet;

@interface SBClickGestureRecognizer : SBPressGestureRecognizer {

	unsigned long long _numberOfClicksRequired;
	BOOL _allPressesUpRequired;
	double _maximumClickFormationDuration;
	double _maximumClickDownDuration;
	double _maximumBetweenClicksDelay;
	unsigned long long _recognizedClicksCount;
	BOOL _gestureWasRecognized;
	BOOL _allPressBeganReceived;
	NSMutableArray* _shortcutPressTypesSubsets;
	NSMutableSet* _receivedPressBeganTypes;
	NSMutableSet* _receivedPressEndedTypes;

}

@property (assign,nonatomic) unsigned long long numberOfClicksRequired;              //@synthesize numberOfClicksRequired=_numberOfClicksRequired - In the implementation block
@property (assign,nonatomic) BOOL allPressesUpRequired;                              //@synthesize allPressesUpRequired=_allPressesUpRequired - In the implementation block
@property (assign,nonatomic) double maximumClickFormationDuration;                   //@synthesize maximumClickFormationDuration=_maximumClickFormationDuration - In the implementation block
@property (assign,nonatomic) double maximumClickDownDuration;                        //@synthesize maximumClickDownDuration=_maximumClickDownDuration - In the implementation block
@property (assign,nonatomic) double maximumBetweenClicksDelay;                       //@synthesize maximumBetweenClicksDelay=_maximumBetweenClicksDelay - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)resetShortcutsTracking;
-(void)_notePressReceivedWithType:(long long)arg1 phase:(long long)arg2 ;
-(void)setMaximumClickFormationDuration:(double)arg1 ;
-(unsigned long long)numberOfClicksRequired;
-(void)setMaximumBetweenClicksDelay:(double)arg1 ;
-(BOOL)didReceiveRequiredPressBeganCount;
-(double)maximumClickFormationDuration;
-(void)reset;
-(BOOL)didReceiveRequiredPressEndedCount;
-(BOOL)_areRequiredPressTypesContainedInSet:(id)arg1 ;
-(void)setAllPressesUpRequired:(BOOL)arg1 ;
-(double)maximumClickDownDuration;
-(void)setMaximumClickDownDuration:(double)arg1 ;
-(void)setNumberOfClicksRequired:(unsigned long long)arg1 ;
-(id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2 ;
-(BOOL)allPressesUpRequired;
-(double)maximumBetweenClicksDelay;
-(void)addShortcutWithPressTypes:(id)arg1 ;
@end

