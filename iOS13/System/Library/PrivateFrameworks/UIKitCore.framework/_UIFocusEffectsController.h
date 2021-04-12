/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIDynamicValueConvergenceAnimation, NSHashTable;

@interface _UIFocusEffectsController : NSObject {

	_UIDynamicValueConvergenceAnimation* _rollbackAnimation;
	NSHashTable* _observers;
	CGPoint _displayOffset;
	double _displayMovementAdjustment;
	BOOL _displayOffsetAccumulatorEnabled;
	CGPoint _currentOffset;

}

@property (nonatomic,readonly) CGPoint currentOffset;                           //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) CGPoint displayOffset; 
@property (assign,nonatomic) BOOL displayOffsetAccumulatorEnabled;              //@synthesize displayOffsetAccumulatorEnabled=_displayOffsetAccumulatorEnabled - In the implementation block
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)reset;
-(CGPoint)currentOffset;
-(void)setDisplayOffsetAccumulatorEnabled:(BOOL)arg1 ;
-(void)cancelRollbackAnimation;
-(void)updateCurrentOffset:(CGPoint)arg1 ;
-(void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
-(void)updateCurrentOffset:(CGPoint)arg1 overrideDisplayOffset:(id)arg2 ;
-(void)startRollbackAnimation;
-(void)startRollbackAnimationFasterConvergence;
-(void)resetDisplayOffsetAccumulationFactor;
-(void)_notifyObserversForMovementDirection:(CGVector)arg1 ;
-(CGPoint)displayOffset;
-(BOOL)displayOffsetAccumulatorEnabled;
@end

