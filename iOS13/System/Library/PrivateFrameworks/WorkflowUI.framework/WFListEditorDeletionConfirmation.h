/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
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

