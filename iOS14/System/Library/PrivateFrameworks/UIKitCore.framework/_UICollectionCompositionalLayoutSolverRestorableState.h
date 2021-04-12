/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICollectionCompositionalLayoutSolverRestorableState.h>

@protocol _UICollectionCompositionalLayoutSolverRestorableState <NSObject>
@required
-(void)applyToSolver:(id)arg1;

@end


@class NSArray, NSIndexSet, NSString;

@interface _UICollectionCompositionalLayoutSolverRestorableState : NSObject <_UICollectionCompositionalLayoutSolverRestorableState> {

	NSArray* _bookmarkSnapshotters;
	NSIndexSet* _orthogonalSectionIndexes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyToSolver:(id)arg1 ;
-(id)initWithSolver:(id)arg1 ;
@end

