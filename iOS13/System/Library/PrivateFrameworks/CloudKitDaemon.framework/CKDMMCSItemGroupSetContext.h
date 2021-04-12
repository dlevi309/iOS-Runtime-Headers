/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@protocol OS_dispatch_group;
@class CKDMMCSItemGroupSet, CKDOperation, NSMutableArray, NSObject;

@interface CKDMMCSItemGroupSetContext : NSObject <CKDCancelling> {

	CKDMMCSItemGroupSet* _itemGroupSet;
	CKDOperation* _operation;
	NSMutableArray* _itemGroupContexts;
	/*^block*/id _itemGroupCompletionBlock;
	/*^block*/id _itemGroupSetCompletionBlock;
	NSObject*<OS_dispatch_group> _itemGroupSetCompletionGroup;
	long long _mmcsOperationType;

}

@property (nonatomic,retain) CKDMMCSItemGroupSet * itemGroupSet;                                    //@synthesize itemGroupSet=_itemGroupSet - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * operation;                                       //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSMutableArray * itemGroupContexts;                                    //@synthesize itemGroupContexts=_itemGroupContexts - In the implementation block
@property (nonatomic,copy) id itemGroupCompletionBlock;                                             //@synthesize itemGroupCompletionBlock=_itemGroupCompletionBlock - In the implementation block
@property (nonatomic,copy) id itemGroupSetCompletionBlock;                                          //@synthesize itemGroupSetCompletionBlock=_itemGroupSetCompletionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> itemGroupSetCompletionGroup;              //@synthesize itemGroupSetCompletionGroup=_itemGroupSetCompletionGroup - In the implementation block
@property (assign,nonatomic) long long mmcsOperationType;                                           //@synthesize mmcsOperationType=_mmcsOperationType - In the implementation block
-(void)cancel;
-(CKDOperation *)operation;
-(void)setOperation:(CKDOperation *)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_group>)itemGroupSetCompletionGroup;
-(NSMutableArray *)itemGroupContexts;
-(long long)mmcsOperationType;
-(void)setMmcsOperationType:(long long)arg1 ;
-(id)itemGroupSetCompletionBlock;
-(CKDMMCSItemGroupSet *)itemGroupSet;
-(void)setItemGroupSetCompletionBlock:(id)arg1 ;
-(id)initWithItemGroupSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addItemGroupContext:(id)arg1 ;
-(void)setItemGroupSet:(CKDMMCSItemGroupSet *)arg1 ;
-(void)setItemGroupContexts:(NSMutableArray *)arg1 ;
-(id)itemGroupCompletionBlock;
-(void)setItemGroupCompletionBlock:(id)arg1 ;
-(void)setItemGroupSetCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

