/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <SPFinder/SPAdvertisementCaching.h>
#import <SPFinder/SPBeaconPayloadCaching.h>

@protocol SPAdvertisementCacheXPCProtocol, OS_dispatch_queue;
@class FMXPCServiceDescription, FMXPCSession, NSObject, NSString;

@interface SPAdvertisementCache : NSObject <SPAdvertisementCaching, SPBeaconPayloadCaching> {

	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPAdvertisementCacheXPCProtocol> _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPAdvertisementCacheXPCProtocol> proxy;                 //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProxy:(id<SPAdvertisementCacheXPCProtocol>)arg1 ;
-(id<SPAdvertisementCacheXPCProtocol>)proxy;
-(id)init;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(id)remoteInterface;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)saveAdvertisements:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markAdvertisementsProcessed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)advertisementsForSearchCriteria:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveBeaconPayloads:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)clearCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)markRecordsProcessed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markBeaconPayloadsProcessed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mockingEnabled:(BOOL)arg1 ;
@end
