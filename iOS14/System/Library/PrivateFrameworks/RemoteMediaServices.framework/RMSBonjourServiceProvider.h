/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <libobjc.A.dylib/RMSServiceProvider.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol RMSServiceProviderDelegate;
@class NSMutableDictionary, NSNetServiceBrowser, NSString;

@interface RMSBonjourServiceProvider : NSObject <RMSServiceProvider, NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSMutableDictionary* _services;
	NSMutableDictionary* _cache;
	id<RMSServiceProviderDelegate> _delegate;
	NSNetServiceBrowser* _netServiceBrowser;

}

@property (nonatomic,readonly) NSNetServiceBrowser * netServiceBrowser;                   //@synthesize netServiceBrowser=_netServiceBrowser - In the implementation block
@property (nonatomic,readonly) NSString * searchType; 
@property (nonatomic,readonly) NSString * searchDomain; 
@property (nonatomic,readonly) NSString * searchScope; 
@property (nonatomic,readonly) long long serviceDiscoverySource; 
@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)searchType;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(id)init;
-(void)beginDiscovery;
-(id)_searchString;
-(id<RMSServiceProviderDelegate>)delegate;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(NSNetServiceBrowser *)netServiceBrowser;
-(void)setDelegate:(id<RMSServiceProviderDelegate>)arg1 ;
-(void)endDiscovery;
-(NSString *)searchScope;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)dealloc;
-(long long)serviceDiscoverySource;
-(long long)serviceTypeFromTXTDictionary:(id)arg1 ;
-(long long)serviceFlagsFromTXTDictionary:(id)arg1 ;
-(id)_valueForTXTRecordKey:(id)arg1 inTXTDictionary:(id)arg2 ;
-(NSString *)searchDomain;
-(id)_identifierForNetService:(id)arg1 ;
-(void)_updateService:(id)arg1 withNetService:(id)arg2 txtData:(id)arg3 ;
-(void)_updateCacheWithService:(id)arg1 identifier:(id)arg2 ;
@end

