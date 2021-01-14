/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTransaction:(SBKSyncTransaction *)arg1 ;
-(SBKSyncTransaction *)transaction;
-(unsigned long long)itemCount;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setItemCount:(unsigned long long)arg1 ;
-(BOOL)loadsRemoteItemCount;
-(void)setLoadsRemoteItemCount:(BOOL)arg1 ;
-(unsigned long long)responseItemCount;
@end

