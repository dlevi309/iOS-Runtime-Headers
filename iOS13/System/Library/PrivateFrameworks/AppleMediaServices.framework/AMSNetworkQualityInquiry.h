/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NWNetworkOfInterestManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, AMSPromise, NWNetworkOfInterestManager, NSObject, NSMutableSet, NSMutableArray;

@interface AMSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {

	NSArray* _lastKnownReports;
	long long _lastReportRefreshTimestamp;
	AMSPromise* _currentInvestigation;
	NWNetworkOfInterestManager* _manager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _knownNetworks;
	NSMutableArray* _knownNetworksReadyHandlers;

}

@property (nonatomic,readonly) NWNetworkOfInterestManager * manager;                   //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * knownNetworks;                           //@synthesize knownNetworks=_knownNetworks - In the implementation block
@property (nonatomic,retain) NSMutableArray * knownNetworksReadyHandlers;              //@synthesize knownNetworksReadyHandlers=_knownNetworksReadyHandlers - In the implementation block
+(id)sharedInstance;
+(id)reportForTask:(id)arg1 fromReports:(id)arg2 ;
+(BOOL)isEntitled;
+(id)lastConnectionReport;
+(void)updateLastConnectionReportWithTask:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NWNetworkOfInterestManager *)manager;
-(id)investigateNetworks;
-(NSMutableSet *)knownNetworks;
-(void)performWhenKnownNetworksReady:(/*^block*/id)arg1 ;
-(BOOL)areKnownNetworksReady;
-(NSMutableArray *)knownNetworksReadyHandlers;
-(void)setKnownNetworksReadyHandlers:(NSMutableArray *)arg1 ;
-(void)drainKnownNetworksReadyHandlers;
-(void)didStopTrackingNOI:(id)arg1 ;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)didStopTrackingAllNOIs:(id)arg1 ;
@end

