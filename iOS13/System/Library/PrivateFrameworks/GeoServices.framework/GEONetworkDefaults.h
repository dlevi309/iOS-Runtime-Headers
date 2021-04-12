/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxyDelegate.h>

@protocol _GEONetworkDefaultsServerProxy;
@class NSMutableArray, NSDictionary, geo_isolater, NSString;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate> {

	id<_GEONetworkDefaultsServerProxy> _serverProxy;
	NSMutableArray* _completionHandlers;
	NSDictionary* _networkDefaults;
	geo_isolater* _networkDefaultsIsolation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNetworkDefaults;
+(BOOL)useLocalProxy;
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(void)_ib_disableServerConnection;
-(id)init;
-(id)allKeys;
-(id)valueForKey:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)allKeysAndValues:(/*^block*/id)arg1 ;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2 ;
@end

