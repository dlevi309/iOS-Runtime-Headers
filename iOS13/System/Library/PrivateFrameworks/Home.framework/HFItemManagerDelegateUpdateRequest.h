/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFGroupedItemDiff;

@interface HFItemManagerDelegateUpdateRequest : NSObject {

	BOOL _initialUpdate;
	BOOL _debug_wasPerformed;
	HFGroupedItemDiff* _changes;
	/*^block*/id _applyChangesBlock;
	/*^block*/id _issueDelegateMessagesBlock;

}

@property (nonatomic,copy,readonly) id applyChangesBlock;                              //@synthesize applyChangesBlock=_applyChangesBlock - In the implementation block
@property (nonatomic,copy,readonly) id issueDelegateMessagesBlock;                     //@synthesize issueDelegateMessagesBlock=_issueDelegateMessagesBlock - In the implementation block
@property (nonatomic,readonly) BOOL debug_wasPerformed;                                //@synthesize debug_wasPerformed=_debug_wasPerformed - In the implementation block
@property (nonatomic,readonly) HFGroupedItemDiff * changes;                            //@synthesize changes=_changes - In the implementation block
@property (getter=isInitialUpdate,nonatomic,readonly) BOOL initialUpdate;              //@synthesize initialUpdate=_initialUpdate - In the implementation block
-(id)init;
-(id)description;
-(HFGroupedItemDiff *)changes;
-(id)initWithChanges:(id)arg1 isInitialUpdate:(BOOL)arg2 applyChangesBlock:(/*^block*/id)arg3 issueDelegateMessagesBlock:(/*^block*/id)arg4 ;
-(id)applyChangesBlock;
-(id)issueDelegateMessagesBlock;
-(BOOL)isInitialUpdate;
-(void)performWithOptions:(unsigned long long)arg1 ;
-(BOOL)debug_wasPerformed;
@end

