/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class NSString, ASCLockupFetcher, NSMutableDictionary, NSMutableArray;

@interface ASCLockupViewGroup : NSObject {

	BOOL _hasScheduledBatchRequest;
	NSString* _name;
	ASCLockupFetcher* _lockupFetcher;
	NSMutableDictionary* _deferredRequests;
	NSMutableArray* _prefetchSpansIfLoaded;

}

@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) ASCLockupFetcher * lockupFetcher;                    //@synthesize lockupFetcher=_lockupFetcher - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * deferredRequests;              //@synthesize deferredRequests=_deferredRequests - In the implementation block
@property (assign,nonatomic) BOOL hasScheduledBatchRequest;                         //@synthesize hasScheduledBatchRequest=_hasScheduledBatchRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * prefetchSpansIfLoaded;                //@synthesize prefetchSpansIfLoaded=_prefetchSpansIfLoaded - In the implementation block
@property (nonatomic,readonly) NSMutableArray * prefetchSpans; 
+(id)log;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)_cacheLockupsWithRequests:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)lockupWithRequest:(id)arg1 ;
-(ASCLockupFetcher *)lockupFetcher;
-(NSMutableArray *)prefetchSpansIfLoaded;
-(id)initWithName:(id)arg1 lockupFetcher:(id)arg2 ;
-(void)setPrefetchSpansIfLoaded:(NSMutableArray *)arg1 ;
-(BOOL)hasScheduledBatchRequest;
-(void)performBatchRequests;
-(void)setHasScheduledBatchRequest:(BOOL)arg1 ;
-(NSMutableDictionary *)deferredRequests;
-(void)scheduleBatchRequestsIfNeeded;
-(NSMutableArray *)prefetchSpans;
-(void)_prefetchLockupsWithRequests:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

