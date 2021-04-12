/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class NSNumber;

@interface WFListEditorUpdateItem : NSObject {

	NSNumber* _indexBeforeUpdate;
	NSNumber* _indexAfterUpdate;
	unsigned long long _updateAction;

}

@property (nonatomic,readonly) NSNumber * indexBeforeUpdate;                 //@synthesize indexBeforeUpdate=_indexBeforeUpdate - In the implementation block
@property (nonatomic,readonly) NSNumber * indexAfterUpdate;                  //@synthesize indexAfterUpdate=_indexAfterUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long updateAction;              //@synthesize updateAction=_updateAction - In the implementation block
+(id)itemInsertedAtIndex:(unsigned long long)arg1 ;
+(id)itemUpdatedAtIndex:(unsigned long long)arg1 ;
+(id)itemDeletedAtIndex:(unsigned long long)arg1 ;
+(id)itemMovedFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(unsigned long long)updateAction;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)indexAfterUpdate;
-(NSNumber *)indexBeforeUpdate;
-(id)initWithAction:(unsigned long long)arg1 indexBeforeUpdate:(id)arg2 indexAfterUpdate:(id)arg3 ;
@end

