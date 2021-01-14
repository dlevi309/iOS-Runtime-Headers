/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXActionDelegate.h>
#import <libobjc.A.dylib/CXAbstractProviderVendorProtocol.h>

@protocol OS_dispatch_queue, CXAbstractProviderDelegate;
@class NSMutableArray, NSObject, NSArray, NSString;

@interface CXAbstractProvider : NSObject <CXActionDelegate, CXAbstractProviderVendorProtocol> {

	NSMutableArray* _mutablePendingTransactions;
	NSObject*<OS_dispatch_queue> _queue;
	id<CXAbstractProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) NSMutableArray * mutablePendingTransactions;                          //@synthesize mutablePendingTransactions=_mutablePendingTransactions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXAbstractProviderDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                             //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) id<CXAbstractProviderHostProtocol> hostProtocolDelegate; 
@property (nonatomic,copy,readonly) NSArray * pendingTransactions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)pendingTransactions;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(id)init;
-(id<CXAbstractProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_performAction:(id)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<CXAbstractProviderDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)invalidate;
-(void)performDelegateCallback:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CXAbstractProviderHostProtocol>)hostProtocolDelegate;
-(void)actionCompleted:(id)arg1 ;
-(oneway void)commitTransaction:(id)arg1 ;
-(oneway void)handleActionTimeout:(id)arg1 ;
-(NSMutableArray *)mutablePendingTransactions;
-(void)_handleConnectionInterruption;
-(id)_pendingActionWithUUID:(id)arg1 ;
-(void)_updatePendingTransactions;
-(void)sendProviderDidBegin;
-(void)handleConnectionInterruption;
@end

