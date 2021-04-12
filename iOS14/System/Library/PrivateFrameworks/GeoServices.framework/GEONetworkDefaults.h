/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_ib_disableServerConnection;
+(id)sharedNetworkDefaults;
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(BOOL)useLocalProxy;
-(id)init;
-(void)allKeysAndValues:(/*^block*/id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2 ;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(BOOL)_needsUpdate;
-(id)allKeys;
@end

