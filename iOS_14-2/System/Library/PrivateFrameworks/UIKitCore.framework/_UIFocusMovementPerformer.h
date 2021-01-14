/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIFocusMovementPerformerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusMovementPerformer : NSObject {

	id<_UIFocusMovementPerformerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIFocusMovementPerformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_findFocusCandidateWithoutLoadingScrollableContent:(id)arg1 forRequest:(id)arg2 minimumSearchArea:(CGRect)arg3 ;
-(CGRect)_minimumSearchAreaForContainer:(id)arg1 inWindow:(id)arg2 shouldLoadScrollableContainer:(BOOL)arg3 ;
-(id)_findFocusCandidateByExhaustivelySearchingScrollableContainer:(id)arg1 forRequest:(id)arg2 ;
-(id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForRequest:(id)arg1 ;
-(id<_UIFocusMovementPerformerDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusMovementPerformerDelegate>)arg1 ;
-(BOOL)performFocusMovement:(id)arg1 ;
-(CGRect)_minimumSearchAreaForContainer:(id)arg1 inWindow:(id)arg2 ;
-(id)_itemContainersToCheckForRequest:(id)arg1 ;
-(BOOL)_shouldRecordDestinationItemDistanceOffscreenInWindow:(id)arg1 ;
-(id)_nextLinearCandidateLoadingScrollableContentForRequest:(id)arg1 ;
-(id)_bestCandidateForLinearFocusMovement:(id)arg1 ;
-(id)_bestCandidateForHierarchicalFocusMovement:(id)arg1 ;
-(id)_bestCandidateForNonLinearFocusMovement:(id)arg1 ;
-(id)_fakeFocusedViewForFocusMovement:(id)arg1 searchArea:(CGRect)arg2 window:(id)arg3 ;
-(BOOL)_isMovementValidForFocusSequences:(id)arg1 ;
-(id)viewForFocusHeading:(unsigned long long)arg1 fromView:(id)arg2 ;
-(id)_bestCandidateForFocusMovement:(id)arg1 ;
@end

