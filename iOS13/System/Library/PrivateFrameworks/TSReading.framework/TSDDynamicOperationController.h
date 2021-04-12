/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSDInteractiveCanvasController, NSMutableSet, TSDAutoscroll, NSSet;

@interface TSDDynamicOperationController : NSObject {

	TSDInteractiveCanvasController* mICC;
	BOOL mOperationIsDynamic;
	BOOL mResetGuides;
	BOOL mSupportsAlignmentGuides;
	BOOL mPossibleDynamicOperation;
	NSMutableSet* mReps;
	NSMutableSet* mAllTransformedReps;
	TSDAutoscroll* mAutoscroll;

}

@property (nonatomic,readonly) NSSet * allTransformedReps; 
@property (nonatomic,readonly) NSSet * currentlyTransformingReps; 
-(void)dealloc;
-(void)endOperation;
-(void)cancelOperation;
-(void)beginOperation;
-(void)handleGestureRecognizer:(id)arg1 ;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(NSSet *)allTransformedReps;
-(NSSet *)currentlyTransformingReps;
-(BOOL)isInOperation;
-(BOOL)isInPossibleDynamicOperation;
-(void)stopTransformingReps:(id)arg1 ;
-(void)startTransformingReps:(id)arg1 ;
-(void)p_beginDynamicOperationForReps:(id)arg1 ;
-(void)p_controllingTMDidResetInOperation:(id)arg1 ;
-(void)p_cleanupOperation;
-(void)p_resetGuidesForCleanup:(BOOL)arg1 ;
-(void)beginPossibleDynamicOperation;
-(BOOL)isOperationDynamic;
-(void)handleTrackerManipulator:(id)arg1 ;
-(void)invalidateGuides;
@end

