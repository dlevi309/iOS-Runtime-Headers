/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class NSDictionary, NSSet, NSIndexSet;

@interface CKTransactionalComponentDataSourceChangesetBuilder : NSObject {

	NSDictionary* _updatedItems;
	NSSet* _removedItems;
	NSIndexSet* _removedSections;
	NSDictionary* _movedItems;
	NSIndexSet* _insertedSections;
	NSDictionary* _insertedItems;

}
+(id)transactionalComponentDataSourceChangeset;
-(id)build;
-(id)withInsertedItems:(id)arg1 ;
-(id)withUpdatedItems:(id)arg1 ;
-(id)withMovedItems:(id)arg1 ;
-(id)withRemovedItems:(id)arg1 ;
-(id)withInsertedSections:(id)arg1 ;
-(id)withRemovedSections:(id)arg1 ;
@end

