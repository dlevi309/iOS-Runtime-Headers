/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storeFrontHeaderSuffix;
+(id)_networkCounters;
+(void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1 ;
+(void)incrementNetworkCounterForBagContext:(id)arg1 ;
+(void)decrementNetworkCounterForBagContext:(id)arg1 ;
+(id)_networkSynchronyQueue;
+(id)_executedNetworkRequests;
-(id)uniqueKey;
-(void)run;
-(id)init;
-(void)_analyzeBagForActiveSystemApps:(id)arg1 ;
-(void)_sendPingsForURLBag:(id)arg1 ;
-(void)_setOutputURLBag:(id)arg1 ;
-(SSURLBagContext *)context;
-(BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(void)setAccountDSID:(NSNumber *)arg1 ;
-(BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2 ;
-(id)initWithBagContext:(id)arg1 ;
-(void)_addHeadersToRequestProperties:(id)arg1 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(void)_postBagDidLoadNotificationWithURLBag:(id)arg1 ;
-(ISURLBag *)URLBag;
-(NSNumber *)accountDSID;
@end

