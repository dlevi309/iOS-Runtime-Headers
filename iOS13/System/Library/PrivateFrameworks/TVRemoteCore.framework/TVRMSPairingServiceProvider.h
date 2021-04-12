/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRMSBonjourServiceProvider.h>

@class NSMutableDictionary, NSArray;

@interface TVRMSPairingServiceProvider : TVRMSBonjourServiceProvider {

	NSMutableDictionary* _unmonitoredServices;
	NSMutableDictionary* _monitoredServices;
	NSArray* _pairedNetworkNames;

}

@property (nonatomic,retain) NSArray * pairedNetworkNames;              //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
-(id)init;
-(void)dealloc;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(id)searchType;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(long long)serviceDiscoverySource;
-(long long)serviceLegacyFlagsFromTXTDictionary:(id)arg1 ;
@end

