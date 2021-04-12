/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
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
	SCD_Struct_NS67* _engineVarTable;
	SCD_Struct_NS67* _rowTables[2];
	SCD_Struct_NS67* _colTables[2];
	NSISVariable* _headForObjectiveRow;
	SCD_Struct_NS68* _objectiveRow;
	NSISVariable* _placeholderHeadForExpressionBeingAdded;
	NSISVariable* _artificialRowHead;
	NSISVariable* _artificialObjectiveRowHead;
	NSISObjectiveLinearExpression* _artificialObjectiveRowBody;

}

@property (retain) NSMutableArray * variablesWithValueRestrictionViolations;                //@synthesize variablesWithValueRestrictionViolations=_variablesWithValueRestrictionViolations - In the implementation block
@property (retain) NSISVariable * artificialRowHead;                                        //@synthesize artificialRowHead=_artificialRowHead - In the implementation block
@property (retain) NSISVariable * artificialObjectiveRowHead;                               //@synthesize artificialObjectiveRowHead=_artificialObjectiveRowHead - In the implementation block
@property (retain) NSISObjectiveLinearExpression * artificialObjectiveRowBody;              //@synthesize artificialObjectiveRowBody=_artificialObjectiveRowBody - In the implementation block
@property (assign) id<NSISEngineDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL shouldIntegralize; 
@property (assign) BOOL revertsAfterUnsatisfiabilityHandler;                                //@synthesize revertsAfterUnsatisfiabilityHandler=_revertsAfterUnsatisfiabilityHandler - In the implementation block
@property (readonly) unsigned long long variableChangeCount; 
@property (assign,nonatomic) CGSize engineScalingCoefficients;                              //@synthesize engineScalingCoefficients=_engineScalingCoefficients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_dbg_anyEngineContainsVariable:(id)arg1 ;
+(void)setEnableEngineTrace:(BOOL)arg1 ;
+(BOOL)enableEngineTrace;
+(id)traceFileSuffix;
+(void)setTraceFileSuffix:(id)arg1 ;
+(void)setLogOnInvalidUseFromBGThread:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<NSISEngineDelegate>)delegate;
-(void)setDelegate:(id<NSISEngineDelegate>)arg1 ;
-(BOOL)hasValue:(double*)arg1 forVariable:(id)arg2 ;
-(id)constraints;
-(id)observableForVariable:(id)arg1 ;
-(id)variableChangeTransactionSignal;
-(double)valueForExpression:(id)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(double)valueForVariable:(id)arg1 ;
-(BOOL)valueOfVariableIsAmbiguous:(id)arg1 ;
-(id)constraintsAffectingValueOfVariable:(id)arg1 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(void)setShouldIntegralize:(BOOL)arg1 ;
-(unsigned long long)optimize;
-(unsigned long long)_optimizeWithoutRebuilding;
-(BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id*)arg4 ;
-(void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2 ;
-(void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2 ;
-(void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3 ;
-(void)removeConstraintWithMarker:(id)arg1 ;
-(void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2 ;
-(BOOL)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(/*^block*/id)arg3 ;
-(void)verifyInternalIntegrity;
-(id)_brokenConstraintPositiveErrors;
-(id)_brokenConstraintPositiveErrorsIfAvailable;
-(id)_brokenConstraintNegativeErrors;
-(id)_brokenConstraintNegativeErrorsIfAvailable;
-(id)markerForBrokenConstraintWithPositiveErrorVar:(id)arg1 ;
-(id)markerForBrokenConstraintWithNegativeErrorVar:(id)arg1 ;
-(void)enumerateRows:(/*^block*/id)arg1 ;
-(void)enumerateCols:(/*^block*/id)arg1 ;
-(void)enumerateEngineVars:(/*^block*/id)arg1 ;
-(void)replaceMarker:(SCD_Struct_NS69*)arg1 withMarkerPlusCoefficient:(double)arg2 timesCol:(SCD_Struct_NS69*)arg3 ;
-(void)setPositiveErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2 ;
-(void)setNegativeErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2 ;
-(id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)arg1 errorIsPositive:(BOOL)arg2 ;
-(BOOL)handleUnsatisfiableRow:(SCD_Struct_NS69*)arg1 usingInfeasibilityHandlingBehavior:(long long)arg2 prospectiveRowHead:(SCD_Struct_NS69*)arg3 mutuallyExclusiveConstraints:(id*)arg4 ;
-(BOOL)chooseHeadForRow:(SCD_Struct_NS69*)arg1 chosenCol:(SCD_Struct_NS69*)arg2 outNewToEngine:(BOOL*)arg3 ;
-(void)setVariablesWithValueRestrictionViolations:(NSMutableArray *)arg1 ;
-(void)_addObjectiveRow;
-(void)_removeAllVariables;
-(void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(/*^block*/id)arg1 ;
-(void)_flushPendingRemovals;
-(void)rebuildFromConstraints;
-(id)fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(long long)arg1 ;
-(BOOL)_optimizeIfNotDisabled;
-(void)withBehaviors:(unsigned long long)arg1 performModifications:(/*^block*/id)arg2 ;
-(double)valueForEngineVar:(SCD_Struct_NS69*)arg1 ;
-(BOOL)hasValue:(double*)arg1 forEngineVar:(SCD_Struct_NS69*)arg2 ;
-(void)copyExpressionSubstitutingRowHeadVariables:(id)arg1 intoRow:(SCD_Struct_NS69*)arg2 ;
-(BOOL)_tryToAddConstraintWithMarkerEngineVar:(SCD_Struct_NS69*)arg1 row:(SCD_Struct_NS69*)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(BOOL)tryAddingDirectly:(SCD_Struct_NS69*)arg1 ;
-(BOOL)tryUsingArtificialVariableToAddConstraintWithMarker:(SCD_Struct_NS69*)arg1 row:(SCD_Struct_NS69*)arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id*)arg4 ;
-(BOOL)containsVariable:(id)arg1 ;
-(BOOL)outgoingRowHeadForRemovingConstraintWithMarker:(SCD_Struct_NS69*)arg1 outgoingRowHead:(SCD_Struct_NS69*)arg2 ;
-(BOOL)positiveErrorVarForBrokenConstraintWithMarker:(id)arg1 errorVar:(SCD_Struct_NS69*)arg2 ;
-(BOOL)negativeErrorVarForBrokenConstraintWithMarker:(id)arg1 errorVar:(SCD_Struct_NS69*)arg2 ;
-(void)_coreReplaceMarker:(id)arg1 withMarkerPlusDelta:(double)arg2 ;
-(id)tryToOptimizeReturningMutuallyExclusiveConstraints;
-(void)_dirtyListRemoveObservable:(id)arg1 ;
-(void)enumerateOriginalConstraints:(/*^block*/id)arg1 ;
-(BOOL)bodyVarIsAmbiguous:(SCD_Struct_NS69*)arg1 withPivotOfOutgoingRowHead:(SCD_Struct_NS69*)arg2 foundOutgoingRowHead:(BOOL*)arg3 ;
-(BOOL)incoming:(SCD_Struct_NS69*)arg1 andOutgoing:(SCD_Struct_NS69*)arg2 foundOutgoing:(BOOL*)arg3 rowHeadsThatMakeValueAmbiguousForVariable:(SCD_Struct_NS69*)arg4 ;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(double)integralizationAdjustmentForMarker:(id)arg1 ;
-(BOOL)shouldIntegralize;
-(BOOL)_dirtyListContainsObservable:(id)arg1 ;
-(void)_dirtyListPrependObservable:(id)arg1 ;
-(BOOL)isTrackingVariableChanges;
-(void)performPendingChangeNotifications;
-(void)performPendingChangeNotificationsForItem:(id)arg1 ;
-(void)performModifications:(/*^block*/id)arg1 withUnsatisfiableConstraintsHandler:(/*^block*/id)arg2 ;
-(os_unfair_lock_s)engineVarIndexForVariable:(id)arg1 ;
-(id)variableForEngineVarIndex:(os_unfair_lock_s)arg1 ;
-(int)valueRestrictionForEngineVarIndex:(os_unfair_lock_s)arg1 ;
-(void)beginRecording;
-(id)recordedCommandsData;
-(unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(BOOL)arg2 ;
-(void)withAutomaticOptimizationDisabled:(/*^block*/id)arg1 ;
-(void)withDelegateCallsDisabled:(/*^block*/id)arg1 ;
-(BOOL)hasValueForPossiblyDeallocatedVariable:(id)arg1 ;
-(BOOL)hasValue:(double*)arg1 forExpression:(id)arg2 ;
-(void)beginBookkeepingForVariableIfNeeded:(id)arg1 ;
-(void)endBookkeepingForVariableIfUnused:(id)arg1 ;
-(BOOL)containsConstraintWithMarker:(id)arg1 ;
-(void)removeObservableForVariable:(id)arg1 ;
-(BOOL)hasObservableForVariable:(id)arg1 ;
-(void)startObservingChangesForVariable:(id)arg1 ;
-(void)stopObservingChangesForVariable:(id)arg1 ;
-(BOOL)isObservingChangesForVariable:(id)arg1 ;
-(SCD_Struct_NS70*)traceState;
-(unsigned long long)rowCount;
-(unsigned long long)colCount;
-(unsigned long long)pivotCount;
-(unsigned long long)variableChangeCount;
-(id)allRowHeads;
-(id)candidateRedundantConstraints;
-(BOOL)exerciseAmbiguityInVariable:(id)arg1 ;
-(id)allVariableValues;
-(NSMutableArray *)variablesWithValueRestrictionViolations;
-(BOOL)revertsAfterUnsatisfiabilityHandler;
-(void)setRevertsAfterUnsatisfiabilityHandler:(BOOL)arg1 ;
-(CGSize)engineScalingCoefficients;
-(void)setEngineScalingCoefficients:(CGSize)arg1 ;
-(NSISVariable *)artificialRowHead;
-(void)setArtificialRowHead:(NSISVariable *)arg1 ;
-(NSISVariable *)artificialObjectiveRowHead;
-(void)setArtificialObjectiveRowHead:(NSISVariable *)arg1 ;
-(NSISObjectiveLinearExpression *)artificialObjectiveRowBody;
-(void)setArtificialObjectiveRowBody:(NSISObjectiveLinearExpression *)arg1 ;
-(BOOL)_disambiguateFrame:(CGRect*)arg1 forAmbiguousItem:(id)arg2 withOldFrame:(CGRect)arg3 ;
@end

