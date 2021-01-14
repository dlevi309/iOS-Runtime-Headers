/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/NWNetworkOfInterestManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NWNetworkOfInterestManager, NSObject, NSMutableSet, NSMutableArray;

@interface ASKNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {

	NWNetworkOfInterestManager* _manager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _knownNetworks;
	NSMutableArray* _knownNetworksReadyHandlers;

}

@property (nonatomic,readonly) NWNetworkOfInterestManager * manager;                   //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * knownNetworks;                           //@synthesize knownNetworks=_knownNetworks - In the implementation block
@property (nonatomic,retain) NSMutableArray * knownNetworksReadyHandlers;              //@synthesize knownNetworksReadyHandlers=_knownNetworksReadyHandlers - In the implementation block
-(id)init;
-(void)performWhenKnownNetworksReady:(/*^block*/id)arg1 ;
-(void)didStopTrackingAllNOIs:(id)arg1 ;
-(void)didStopTrackingNOI:(id)arg1 ;
-(void)investigateNetworksWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSMutableSet *)knownNetworks;
-(void)didStartTrackingNOI:(id)arg1 ;
-(BOOL)areKnownNetworksReady;
-(NWNetworkOfInterestManager *)manager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)drainKnownNetworksReadyHandlers;
-(NSMutableArray *)knownNetworksReadyHandlers;
-(void)setKnownNetworksReadyHandlers:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

