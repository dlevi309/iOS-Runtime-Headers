/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class SSURLBagContext, ISURLBag, NSNumber, NSString;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSURLBagContext* _context;
	ISURLBag* _outputBag;
	NSNumber* _accountDSID;

}

@property (nonatomic,retain) NSNumber * accountDSID;                                                    //@synthesize accountDSID=_accountDSID - In the implementation block
@property (readonly) SSURLBagContext * context;                                                         //@synthesize context=_context - In the implementation block
@property (readonly) ISURLBag * URLBag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
+(id)_networkSynchronyQueue;
+(id)_networkCounters;
+(id)_executedNetworkRequests;
+(id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1 ;
+(void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(void)decrementNetworkCounterForBagContext:(id)arg1 ;
+(void)incrementNetworkCounterForBagContext:(id)arg1 ;
+(id)storeFrontHeaderSuffix;
-(id)init;
-(void)run;
-(SSURLBagContext *)context;
-(NSNumber *)accountDSID;
-(id)uniqueKey;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2 ;
-(id)initWithBagContext:(id)arg1 ;
-(ISURLBag *)URLBag;
-(void)setAccountDSID:(NSNumber *)arg1 ;
-(void)_setOutputURLBag:(id)arg1 ;
-(void)_addHeadersToRequestProperties:(id)arg1 ;
-(BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(void)_analyzeBagForActiveSystemApps:(id)arg1 ;
-(void)_postBagDidLoadNotificationWithURLBag:(id)arg1 ;
-(void)_sendPingsForURLBag:(id)arg1 ;
@end

