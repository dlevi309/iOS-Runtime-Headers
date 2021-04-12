/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKDOperation, CKDKeyValueDiskCache, CKDPublicIdentityLookupService;

@interface CKDCacheBasedRequest : NSObject {

	BOOL _isCancelled;
	CKDOperation* _operation;
	CKDKeyValueDiskCache* _cache;
	CKDPublicIdentityLookupService* _lookupService;
	unsigned long long _fetchBatchSize;

}

@property (assign,nonatomic) BOOL isCancelled;                                                   //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * operation;                                    //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic,__weak) CKDKeyValueDiskCache * cache;                                //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) CKDPublicIdentityLookupService * lookupService;              //@synthesize lookupService=_lookupService - In the implementation block
@property (assign,nonatomic) unsigned long long fetchBatchSize;                                  //@synthesize fetchBatchSize=_fetchBatchSize - In the implementation block
-(id)initWithOperation:(id)arg1 ;
-(void)setOperation:(CKDOperation *)arg1 ;
-(CKDKeyValueDiskCache *)cache;
-(CKDOperation *)operation;
-(unsigned long long)fetchBatchSize;
-(void)setCache:(CKDKeyValueDiskCache *)arg1 ;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setIsCancelled:(BOOL)arg1 ;
-(void)performRequest;
-(void)setLookupService:(CKDPublicIdentityLookupService *)arg1 ;
-(id)spawnURLRequests;
-(CKDPublicIdentityLookupService *)lookupService;
@end

