/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class NSDictionary, NSSet, NSIndexSet;

@interface CKTransactionalComponentDataSourceChangeset : NSObject {

	NSDictionary* _updatedItems;
	NSSet* _removedItems;
	NSIndexSet* _removedSections;
	NSDictionary* _movedItems;
	NSIndexSet* _insertedSections;
	NSDictionary* _insertedItems;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * updatedItems;                //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,copy,readonly) NSSet * removedItems;                       //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedSections;               //@synthesize removedSections=_removedSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedItems;                  //@synthesize movedItems=_movedItems - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedSections;              //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * insertedItems;               //@synthesize insertedItems=_insertedItems - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
-(NSDictionary *)userInfo;
-(NSSet *)removedItems;
-(NSDictionary *)updatedItems;
-(id)description;
-(unsigned long long)hash;
-(NSIndexSet *)insertedSections;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)insertedItems;
-(NSIndexSet *)removedSections;
-(id)initWithUpdatedItems:(id)arg1 removedItems:(id)arg2 removedSections:(id)arg3 movedItems:(id)arg4 insertedSections:(id)arg5 insertedItems:(id)arg6 ;
-(NSDictionary *)movedItems;
@end

