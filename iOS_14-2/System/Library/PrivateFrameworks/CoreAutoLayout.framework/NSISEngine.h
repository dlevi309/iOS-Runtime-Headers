/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSISVariableDelegate.h>

@protocol NSObservable, NSISEngineDelegate;
@class NSMutableArray, NSHashTable, NSObject, NSMapTable, _NSISVariableObservable, NSMutableDictionary, NSThread, NSMutableSet, NSISVariable, NSISObjectiveLinearExpression, NSString;

@interface NSISEngine : NSObject <NSISVariableDelegate> {

	NSMutableArray* _variablesWithValueRestrictionViolations;
	NSMutableArray* _pendingRemovals;
	NSHashTable* _pendingMarkerDelegates;
	NSObject*<NSObservable> _variableChangeTransactionSignal;
	NSMapTable* _variableObservables;
	_NSISVariableObservable* _dirtyObservables;
	id<NSISEngineDelegate> _delegate;
	NSMapTable* _brokenConstraintPositiveErrors;
	NSMapTable* _brokenConstraintNegativeErrors;
	/*^block*/id _unsatisfiabilityHandler;
	unsigned long long _pivotCount;
	unsigned long long _variableChangeCount;
	CGSize _engineScalingCoefficients;
	NSMutableDictionary* _recordedOperations;
	NSThread* _allowedBGThread;
	int _automaticOptimizationDisabledCount;
	int _engineDelegateCallsDisabledCount;
	int _variableDelegateCallsDisabledCount;
	unsigned _totalChangeCount;
	unsigned _changeCountAtLastOptimization;
	BOOL _revertsAfterUnsatisfiabilityHandler;
	BOOL _accumulatingRemovals;
	BOOL _engineNeedsOptimization;
	BOOL _allowUnoptimizedReads;
	BOOL _optimizationInProgress;
	BOOL _accessedFromMainThread;
	BOOL _engineNeedsRebuildFromConstraints;
	BOOL _changeNotificationsDirty;
	NSMapTable* _variablesObservations;
	NSMutableSet* _dirtyVariables;
	NSMapTable* _rows;
	SCD_Struct_NS7* _engineVarTable;
	SCD_Struct_NS7* _rowTables[2];
	SCD_Struct_NS7* _colTables[2];
	NSISVariable* _headForObjectiveRow;
	SCD_Struct_NS8* _objectiveRow;
	NSISVariable* _placeholderHeadForExpressionBeingAdded;
	NSISVariable* _artificialRowHead;
	NSISVariable* _artificialObjectiveRowHead;
	NSISObjectiveLinearExpression* _artificialObjectiveRowBody;

}

@property (retain) NSMutableArray * variablesWithValueRestrictionViolations;                   //@synthesize variablesWithValueRestrictionViolations=_variablesWithValueRestrictionViolations - In the implementation block
@property (retain) NSISVariable * artificialRowHead;                                           //@synthesize artificialRowHead=_artificialRowHead - In the implementation block
@property (retain) NSISVariable * artificialObjectiveRowHead;                                  //@synthesize artificialObjectiveRowHead=_artificialObjectiveRowHead - In the implementation block
@property (retain) NSISObjectiveLinearExpression * artificialObjectiveRowBody;                 //@synthesize artificialObjectiveRowBody=_artificialObjectiveRowBody - In the implementation block
@property (assign) id<NSISEngineDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL shouldIntegralize; 
@property (assign) BOOL revertsAfterUnsatisfiabilityHandler;                                   //@synthesize revertsAfterUnsatisfiabilityHandler=_revertsAfterUnsatisfiabilityHandler - In the implementation block
@property (readonly) unsigned long long variableChangeCount; 
@property (getter=isOptimizationInProgress,readonly) BOOL optimizationInProgress; 
@property (assign,nonatomic) CGSize engineScalingCoefficients;                                 //@synthesize engineScalingCoefficients=_engineScalingCoefficients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_dbg_anyEngineContainsVariable:(id)arg1 ;
+(void)setEnableEngineTrace:(BOOL)arg1 ;
+(id)traceFileSuffix;
+(void)setLogOnInvalidUseFromBGThread:(BOOL)arg1 ;
+(BOOL)enableEngineTrace;
+(void)setTraceFileSuffix:(id)arg1 ;
-(id)debugQuickLookObject;
-(void)_UIKitPerformPendingChangeNotifications;
-(unsigned long long)_UIKitRowCount;
-(BOOL)_UIKitEngineTrackingOn;
-(void)_setUIKitEngineTrackingOn:(BOOL)arg1 ;
-(id)constraints;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(id)init;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(id<NSISEngineDelegate>)delegate;
-(unsigned long long)variableChangeCount;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(void)beginRecording;
-(SCD_Struct_NS9*)traceState;
-(unsigned long long)pivotCount;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)setShouldIntegralize:(BOOL)arg1 ;
-(void)setEngineScalingCoefficients:(CGSize)arg1 ;
-(void)withAutomaticOptimizationDisabled:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<NSISEngineDelegate>)arg1 ;
-(double)valueForVariable:(id)arg1 ;
-(NSString *)description;
-(BOOL)hasValue:(double*)arg1 forVariable:(id)arg2 ;
-(CGSize)engineScalingCoefficients;
-(BOOL)isObservingChangesForVariable:(id)arg1 ;
-(void)performPendingChangeNotifications;
-(id)candidateRedundantConstraints;
-(void)verifyInternalIntegrity;
-(void)startObservingChangesForVariable:(id)arg1 ;
-(id)observableForVariable:(id)arg1 ;
-(BOOL)exerciseAmbiguityInVariable:(id)arg1 ;
-(id)constraintsAffectingValueOfVariable:(id)arg1 ;
-(void)removeObservableForVariable:(id)arg1 ;
-(void)stopObservingChangesForVariable:(id)arg1 ;
-(unsigned long long)optimize;
-(BOOL)valueOfVariableIsAmbiguous:(id)arg1 ;
-(unsigned long long)colCount;
-(void)endBookkeepingForVariableIfUnused:(id)arg1 ;
-(id)variableChangeTransactionSignal;
-(double)valueForExpression:(id)arg1 ;
-(id)variableForEngineVarIndex:(SCD_Struct_NS0)arg1 ;
-(int)valueRestrictionForEngineVarIndex:(SCD_Struct_NS0)arg1 ;
-(id)_brokenConstraintPositiveErrorsIfAvailable;
-(void)enumerateRows:(/*^block*/id)arg1 ;
-(id)_brokenConstraintNegativeErrorsIfAvailable;
-(void)removeConstraintWithMarker:(id)arg1 ;
-(void)setVariablesWithValueRestrictionViolations:(NSMutableArray *)arg1 ;
-(void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(/*^block*/id)arg1 ;
-(unsigned long long)_optimizeWithoutRebuilding;
-(void)withBehaviors:(unsigned long long)arg1 performModifications:(/*^block*/id)arg2 ;
-(BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(BOOL)containsVariable:(id)arg1 ;
-(BOOL)shouldIntegralize;
-(void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2 ;
-(double)integralizationAdjustmentForMarker:(id)arg1 ;
-(BOOL)isTrackingVariableChanges;
-(void)performPendingChangeNotificationsForItem:(id)arg1 ;
-(void)performModifications:(/*^block*/id)arg1 withUnsatisfiableConstraintsHandler:(/*^block*/id)arg2 ;
-(SCD_Struct_NS0)engineVarIndexForVariable:(id)arg1 ;
-(id)recordedCommandsData;
-(unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(BOOL)arg2 ;
-(void)withDelegateCallsDisabled:(/*^block*/id)arg1 ;
-(BOOL)hasValueForPossiblyDeallocatedVariable:(id)arg1 ;
-(id)allVariableValues;
-(BOOL)hasValue:(double*)arg1 forExpression:(id)arg2 ;
-(void)beginBookkeepingForVariableIfNeeded:(id)arg1 ;
-(BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id*)arg4 ;
-(void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2 ;
-(void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2 ;
-(void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3 ;
-(BOOL)containsConstraintWithMarker:(id)arg1 ;
-(BOOL)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(/*^block*/id)arg3 ;
-(BOOL)hasObservableForVariable:(id)arg1 ;
-(BOOL)isOptimizationInProgress;
-(NSISVariable *)artificialRowHead;
-(NSMutableArray *)variablesWithValueRestrictionViolations;
-(BOOL)revertsAfterUnsatisfiabilityHandler;
-(void)setRevertsAfterUnsatisfiabilityHandler:(BOOL)arg1 ;
-(void)setArtificialRowHead:(NSISVariable *)arg1 ;
-(NSISVariable *)artificialObjectiveRowHead;
-(void)setArtificialObjectiveRowHead:(NSISVariable *)arg1 ;
-(NSISObjectiveLinearExpression *)artificialObjectiveRowBody;
-(void)setArtificialObjectiveRowBody:(NSISObjectiveLinearExpression *)arg1 ;
-(void)dealloc;
-(unsigned long long)rowCount;
@end

