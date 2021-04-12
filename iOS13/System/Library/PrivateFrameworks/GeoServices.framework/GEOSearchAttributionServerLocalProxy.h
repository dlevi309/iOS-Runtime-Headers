/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEOSearchAttributionServerProxy.h>

@class NSMapTable, NSMutableArray, GEOSearchAttributionManifest, geo_isolater, NSString;

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOSearchAttributionServerProxy> {

	NSMapTable* _listeners;
	os_unfair_lock_s _listenersLock;
	BOOL _updatingManifest;
	NSMutableArray* _updateManifestCompletionHandlers;
	NSMutableArray* _updateManifestErrorHandlers;
	GEOSearchAttributionManifest* _attributionManifest;
	os_unfair_lock_s _attributionManifestLock;
	geo_isolater* _isolater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_attributionManifest;
-(void)_sendInfo:(id)arg1 toListener:(id)arg2 ;
-(void)_sendError:(id)arg1 toListener:(id)arg2 ;
-(void)_loadAttributionInfoForListener:(id)arg1 ;
@end

