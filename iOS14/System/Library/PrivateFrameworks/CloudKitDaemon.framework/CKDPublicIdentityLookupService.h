/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, CKDClientContext, CKDKeyValueDiskCache;

@interface CKDPublicIdentityLookupService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CKDClientContext* _context;
	CKDKeyValueDiskCache* _cache;

}

@property (nonatomic,retain) CKDKeyValueDiskCache * cache;                   //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
-(CKDKeyValueDiskCache *)cache;
-(void)setCache:(CKDKeyValueDiskCache *)arg1 ;
-(CKDClientContext *)context;
-(id)initWithClientContext:(id)arg1 ;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)removeCacheForLookupInfos:(id)arg1 ;
-(void)scheduleRequest:(id)arg1 forOperation:(id)arg2 ;
-(void)configureRequest:(id)arg1 parentOperation:(id)arg2 ;
@end

