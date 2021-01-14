/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)resetDisplayOffsetAccumulationFactor;
-(CGPoint)displayOffset;
-(void)_notifyObserversForMovementDirection:(CGVector)arg1 ;
-(BOOL)displayOffsetAccumulatorEnabled;
-(void)removeObserver:(id)arg1 ;
-(CGPoint)currentOffset;
-(void)reset;
-(void)setDisplayOffsetAccumulatorEnabled:(BOOL)arg1 ;
-(void)cancelRollbackAnimation;
-(void)updateCurrentOffset:(CGPoint)arg1 ;
-(void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
-(void)updateCurrentOffset:(CGPoint)arg1 overrideDisplayOffset:(id)arg2 ;
-(void)startRollbackAnimation;
@end

