/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOSearchAttributionServerProxy.h>

@protocol OS_dispatch_queue;
@class NSObject, GEOSearchAttributionManifest, NSString;

@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy> {

	NSObject*<OS_dispatch_queue> _attributionQueue;
	GEOSearchAttributionManifest* _attributionManifest;
	os_unfair_lock_s _attributionManifestLock;
	int _attributionManifestUpdatedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_attributionManifest;
-(void)_loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

