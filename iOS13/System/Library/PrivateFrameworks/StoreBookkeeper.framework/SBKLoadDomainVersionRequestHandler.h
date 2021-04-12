/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <StoreBookkeeper/SBKSyncRequestHandler.h>
#import <libobjc.A.dylib/SBKSyncTransactionProcessing.h>

@class SBKSyncTransaction, NSString;

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing> {

	BOOL _loadsRemoteItemCount;
	unsigned long long _responseItemCount;
	unsigned long long _itemCount;
	SBKSyncTransaction* _transaction;

}

@property (assign) unsigned long long itemCount;                        //@synthesize itemCount=_itemCount - In the implementation block
@property (retain) SBKSyncTransaction * transaction;                    //@synthesize transaction=_transaction - In the implementation block
@property (assign) BOOL loadsRemoteItemCount;                           //@synthesize loadsRemoteItemCount=_loadsRemoteItemCount - In the implementation block
@property (readonly) unsigned long long responseItemCount;              //@synthesize responseItemCount=_responseItemCount - In the implementation block
@property (copy) NSString * responseDomainVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)conflictDetectionType;
-(SBKSyncTransaction *)transaction;
-(void)setTransaction:(SBKSyncTransaction *)arg1 ;
-(unsigned long long)itemCount;
-(void)setItemCount:(unsigned long long)arg1 ;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)loadsRemoteItemCount;
-(void)setLoadsRemoteItemCount:(BOOL)arg1 ;
-(unsigned long long)responseItemCount;
@end

