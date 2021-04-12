/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ANXPCTransactionManager : NSObject {

	NSMutableDictionary* _activeTransactions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMutableDictionary * activeTransactions;              //@synthesize activeTransactions=_activeTransactions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSMutableDictionary *)activeTransactions;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_removeTransaction:(id)arg1 ;
-(void)_transaction:(id)arg1 setActive:(BOOL)arg2 ;
-(void)_transaction:(id)arg1 setActiveForTimeInterval:(double)arg2 ;
-(id)_createTransaction:(id)arg1 ;
-(void)_resetTimer:(id)arg1 expiration:(double)arg2 ;
-(void)_createTransaction:(id)arg1 expiration:(double)arg2 ;
-(void)_startTimer:(id)arg1 expiration:(double)arg2 ;
-(void)_cancelTimer:(id)arg1 ;
-(void)transaction:(id)arg1 setActive:(BOOL)arg2 ;
-(void)transaction:(id)arg1 setActiveForTimeInterval:(double)arg2 ;
@end

