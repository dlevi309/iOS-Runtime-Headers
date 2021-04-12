/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRMSSessionProxy.h>
#import <TVRemoteCore/TVRMSDiscoverySession.h>

@protocol TVRMSDiscoverySessionDelegate;
@class NSArray, TVRMSIDSClient, NSString;

@interface TVRMSDiscoverySessionProxy : TVRMSSessionProxy <TVRMSDiscoverySession> {

	TVRMSIDSClient* _idsClient;
	long long _retryRate;
	BOOL _discovering;
	BOOL _wifiAvailable;
	BOOL _networkAvailable;
	id<TVRMSDiscoverySessionDelegate> _delegate;
	long long _discoveryTypes;
	NSArray* _availableServices;
	NSArray* _pairedNetworkNames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TVRMSDiscoverySessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long discoveryTypes;                                       //@synthesize discoveryTypes=_discoveryTypes - In the implementation block
@property (nonatomic,readonly) NSArray * availableServices;                                  //@synthesize availableServices=_availableServices - In the implementation block
@property (getter=isNetworkAvailable,nonatomic,readonly) BOOL networkAvailable;              //@synthesize networkAvailable=_networkAvailable - In the implementation block
@property (nonatomic,retain) NSArray * pairedNetworkNames;                                   //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TVRMSDiscoverySessionDelegate>)delegate;
-(void)setDelegate:(id<TVRMSDiscoverySessionDelegate>)arg1 ;
-(void)endDiscovery;
-(void)beginDiscovery;
-(BOOL)isNetworkAvailable;
-(NSArray *)availableServices;
-(void)_availableServicesDidUpdateNotification:(id)arg1 ;
-(void)_handleSessionDidEndNotification:(id)arg1 ;
-(void)_companionAvailabilityDidChange:(id)arg1 ;
-(void)_wifiAvailabilityDidChange:(id)arg1 ;
-(void)_updateNetworkAvailability;
-(long long)discoveryTypes;
-(void)setDiscoveryTypes:(long long)arg1 ;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(void)heartbeatDidFail;
@end

