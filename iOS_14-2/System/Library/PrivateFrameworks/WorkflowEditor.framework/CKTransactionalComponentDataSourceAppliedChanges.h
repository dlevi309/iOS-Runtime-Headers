/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class NSSet, NSIndexSet, NSDictionary;

@interface CKTransactionalComponentDataSourceAppliedChanges : NSObject {

	NSSet* _updatedIndexPaths;
	NSSet* _removedIndexPaths;
	NSIndexSet* _removedSections;
	NSDictionary* _movedIndexPaths;
	NSIndexSet* _insertedSections;
	NSSet* _insertedIndexPaths;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSSet * updatedIndexPaths;                   //@synthesize updatedIndexPaths=_updatedIndexPaths - In the implementation block
@property (nonatomic,copy,readonly) NSSet * removedIndexPaths;                   //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedSections;                //@synthesize removedSections=_removedSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedIndexPaths;              //@synthesize movedIndexPaths=_movedIndexPaths - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedSections;               //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy,readonly) NSSet * insertedIndexPaths;                  //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
-(NSDictionary *)userInfo;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(NSSet *)insertedIndexPaths;
-(NSIndexSet *)insertedSections;
-(BOOL)isEqual:(id)arg1 ;
-(id)newIndexPathForPreviousIndexPath:(id)arg1 ;
-(NSSet *)updatedIndexPaths;
-(NSIndexSet *)removedSections;
-(NSDictionary *)movedIndexPaths;
-(NSSet *)removedIndexPaths;
-(id)initWithUpdatedIndexPaths:(id)arg1 removedIndexPaths:(id)arg2 removedSections:(id)arg3 movedIndexPaths:(id)arg4 insertedSections:(id)arg5 insertedIndexPaths:(id)arg6 userInfo:(id)arg7 ;
@end

