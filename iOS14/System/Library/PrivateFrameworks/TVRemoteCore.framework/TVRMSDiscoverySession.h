/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRMSServiceProviderDelegate.h>
#import <TVRemoteCore/TVRMSDiscoverySession.h>

@protocol TVRMSDiscoverySessionDelegate;
@class Reachability, NSMutableSet, NSArray, NSString;

@interface TVRMSDiscoverySession : NSObject <TVRMSServiceProviderDelegate, TVRMSDiscoverySession> {

	long long _discoveryTypes;
	Reachability* _reachability;
	NSMutableSet* _availableServices;
	NSArray* _providers;
	BOOL _networkAvailable;
	id<TVRMSDiscoverySessionDelegate> _delegate;
	NSArray* _pairedNetworkNames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TVRMSDiscoverySessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long discoveryTypes;                                       //@synthesize discoveryTypes=_discoveryTypes - In the implementation block
@property (nonatomic,readonly) NSArray * availableServices; 
@property (getter=isNetworkAvailable,nonatomic,readonly) BOOL networkAvailable;              //@synthesize networkAvailable=_networkAvailable - In the implementation block
@property (nonatomic,retain) NSArray * pairedNetworkNames;                                   //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
+(id)localDiscoverySession;
+(id)proxyDiscoverySession;
-(id)init;
-(void)beginDiscovery;
-(id<TVRMSDiscoverySessionDelegate>)delegate;
-(BOOL)isNetworkAvailable;
-(void)setDelegate:(id<TVRMSDiscoverySessionDelegate>)arg1 ;
-(void)endDiscovery;
-(void)dealloc;
-(NSArray *)availableServices;
-(long long)discoveryTypes;
-(void)setDiscoveryTypes:(long long)arg1 ;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(void)serviceProvider:(id)arg1 serviceDidBecomeAvailable:(id)arg2 ;
-(void)serviceProvider:(id)arg1 serviceDidBecomeUnavailable:(id)arg2 ;
-(void)_handleHSGroupIDDidChangeNotification:(id)arg1 ;
-(void)_handleReachabilityChangedNotification:(id)arg1 ;
-(void)_enableProviders;
-(void)_updateWifiAvailability;
-(id)_providerForDiscoveryType:(long long)arg1 ;
@end

