/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
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
+(id)itemDeletedAtIndex:(unsigned long long)arg1 ;
+(id)itemUpdatedAtIndex:(unsigned long long)arg1 ;
+(id)itemMovedFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)updateAction;
-(id)initWithAction:(unsigned long long)arg1 indexBeforeUpdate:(id)arg2 indexAfterUpdate:(id)arg3 ;
-(NSNumber *)indexBeforeUpdate;
-(NSNumber *)indexAfterUpdate;
@end

