/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@interface WFListEditorDeletionConfirmation : NSObject {

	unsigned long long _itemIndex;
	/*^block*/id _confirmationHandler;

}

@property (nonatomic,readonly) unsigned long long itemIndex;              //@synthesize itemIndex=_itemIndex - In the implementation block
@property (nonatomic,readonly) id confirmationHandler;                    //@synthesize confirmationHandler=_confirmationHandler - In the implementation block
+(id)confirmationForDeletingItemAtIndex:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(unsigned long long)itemIndex;
-(id)confirmationHandler;
-(id)initWithItemIndex:(unsigned long long)arg1 confirmationHandler:(/*^block*/id)arg2 ;
@end

