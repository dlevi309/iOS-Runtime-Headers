/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)searchType;
-(id)init;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(long long)serviceDiscoverySource;
-(long long)serviceLegacyFlagsFromTXTDictionary:(id)arg1 ;
@end

