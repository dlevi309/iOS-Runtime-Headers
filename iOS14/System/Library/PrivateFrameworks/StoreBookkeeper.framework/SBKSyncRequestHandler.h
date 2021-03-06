/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <StoreBookkeeper/SBKRequestHandler.h>
#import <libobjc.A.dylib/SBKSyncTransactionProcessing.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SBKSyncResponseData, NSMutableArray, NSMutableDictionary, SBKTransactionController, NSArray;

@interface SBKSyncRequestHandler : SBKRequestHandler <SBKSyncTransactionProcessing> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _overrideResponseDomainVersion;
	SBKSyncResponseData* _responseData;
	NSMutableArray* _responseUpdatedKeys;
	NSMutableArray* _responseDeletedKeys;
	NSMutableArray* _responseConflictedKeys;
	NSMutableDictionary* _responseDataByKey;
	SBKTransactionController* _transactionController;

}

@property (readonly) SBKSyncResponseData * responseData;                            //@synthesize responseData=_responseData - In the implementation block
@property (readonly) SBKTransactionController * transactionController;              //@synthesize transactionController=_transactionController - In the implementation block
@property (copy) NSString * responseDomainVersion; 
@property (readonly) NSArray * responseUpdatedKeys;                                 //@synthesize responseUpdatedKeys=_responseUpdatedKeys - In the implementation block
@property (readonly) NSArray * responseDeletedKeys;                                 //@synthesize responseDeletedKeys=_responseDeletedKeys - In the implementation block
@property (readonly) NSArray * responseConflictedKeys;                              //@synthesize responseConflictedKeys=_responseConflictedKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)conflictDetectionType;
-(SBKSyncResponseData *)responseData;
-(id)initWithBagContext:(id)arg1 ;
-(SBKTransactionController *)transactionController;
-(NSString *)responseDomainVersion;
-(void)clearTransactionResponseData;
-(void)transaction:(id)arg1 willProcessResponseData:(id)arg2 ;
-(void)transaction:(id)arg1 didProcessResponseData:(id)arg2 ;
-(void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(BOOL*)arg5 ;
-(void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(BOOL*)arg3 ;
-(id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2 ;
-(NSArray *)responseUpdatedKeys;
-(void)startTransactionWithSyncAnchor:(id)arg1 keysToUpdate:(id)arg2 keysToDelete:(id)arg3 finishedBlock:(/*^block*/id)arg4 ;
-(void)_onQueue_clearTransactionResponseData;
-(void)setResponseDomainVersion:(NSString *)arg1 ;
-(NSArray *)responseDeletedKeys;
-(NSArray *)responseConflictedKeys;
-(id)responseDataForResponseKey:(id)arg1 ;
@end

