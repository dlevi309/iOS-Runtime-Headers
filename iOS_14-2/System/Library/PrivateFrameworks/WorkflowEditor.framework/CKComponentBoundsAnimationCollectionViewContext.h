/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class UICollectionView, NSDictionary;

@interface CKComponentBoundsAnimationCollectionViewContext : NSObject {

	UICollectionView* _collectionView;
	long long _numberOfSections;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _numberOfItemsInSection;
	NSDictionary* _indexPathsToSnapshotViews;
	NSDictionary* _supplementaryElementIndexPathsToSnapshotViews;
	NSDictionary* _decorationElementIndexPathsToSnapshotViews;
	NSDictionary* _indexPathsToOriginalLayoutAttributes;
	NSDictionary* _supplementaryElementIndexPathsToOriginalLayoutAttributes;
	NSDictionary* _decorationElementIndexPathsToOriginalLayoutAttributes;

}
-(id)initWithCollectionView:(id)arg1 ;
-(void)applyBoundsAnimationToCollectionView:(const CKComponentBoundsAnimation*)arg1 ;
@end

