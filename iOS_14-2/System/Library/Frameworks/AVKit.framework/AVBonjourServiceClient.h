/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol AVBonjourServiceClientDelegate;
@class NSMutableSet, NSMutableDictionary, NSString, NSNetServiceBrowser;

@interface AVBonjourServiceClient : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	BOOL _discovering;
	NSMutableSet* _resolvedServices;
	NSMutableSet* _resolvingServices;
	NSMutableSet* _monitoringServices;
	NSMutableDictionary* _netServiceIdentifierToChannel;
	id _observeAirPlayVideoActiveDidChange;
	id _observeMRDeviceInfoDidChange;
	NSString* _serviceType;
	id<AVBonjourServiceClientDelegate> _delegate;
	NSNetServiceBrowser* _netServiceBrowser;
	void* _airplayDeviceRef;

}

@property (nonatomic,readonly) NSNetServiceBrowser * netServiceBrowser;                       //@synthesize netServiceBrowser=_netServiceBrowser - In the implementation block
@property (assign,nonatomic) void* airplayDeviceRef;                                          //@synthesize airplayDeviceRef=_airplayDeviceRef - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                                        //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic,__weak) id<AVBonjourServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dictionaryFromTXTRecordData:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)beginDiscovery;
-(id<AVBonjourServiceClientDelegate>)delegate;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(id)initWithNetServiceType:(id)arg1 ;
-(void)setAirplayDeviceRef:(void*)arg1 ;
-(void)_updatedAirPlayPairedDeviceAsync;
-(BOOL)_isServiceForCurrentAirPlayDevice:(id)arg1 ;
-(id)identifierForNetService:(id)arg1 ;
-(id)airTransportSenderForNetService:(id)arg1 ;
-(NSNetServiceBrowser *)netServiceBrowser;
-(void*)airplayDeviceRef;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)setDelegate:(id<AVBonjourServiceClientDelegate>)arg1 ;
-(NSString *)description;
-(void)endDiscovery;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(NSString *)serviceType;
-(void)dealloc;
@end

