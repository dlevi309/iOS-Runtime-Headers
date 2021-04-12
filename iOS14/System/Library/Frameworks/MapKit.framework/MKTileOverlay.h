/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKOverlay.h>

@protocol OS_dispatch_source;
@class NSString, GEOTileCache, geo_isolater, NSObject;

@interface MKTileOverlay : NSObject <MKOverlay> {

	NSString* _URLTemplate;
	CGSize _tileSize;
	BOOL _geometryFlipped;
	long long _minimumZ;
	long long _maximumZ;
	BOOL _canReplaceMapContent;
	unsigned _providerID;
	GEOTileCache* _tileCache;
	GEOTileCache* _minimumLifetimeTileCache;
	geo_isolater* _minimumLifetimeTileCacheEvictionTimerIsolation;
	NSObject*<OS_dispatch_source> _minimumLifetimeTileCacheEvictionTimer;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	BOOL _needsAdditionalMinimumLifetimeCleanup;

}

@property (assign) CGSize tileSize;                                            //@synthesize tileSize=_tileSize - In the implementation block
@property (getter=isGeometryFlipped) BOOL geometryFlipped;                     //@synthesize geometryFlipped=_geometryFlipped - In the implementation block
@property (assign) long long minimumZ;                                         //@synthesize minimumZ=_minimumZ - In the implementation block
@property (assign) long long maximumZ;                                         //@synthesize maximumZ=_maximumZ - In the implementation block
@property (readonly) NSString * URLTemplate;                                   //@synthesize URLTemplate=_URLTemplate - In the implementation block
@property (assign,nonatomic) BOOL canReplaceMapContent;                        //@synthesize canReplaceMapContent=_canReplaceMapContent - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK6 boundingMapRect; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)tileSize;
-(id)init;
-(void)_receivedMemoryNotification;
-(CLLocationCoordinate2D)coordinate;
-(long long)minimumZ;
-(long long)maximumZ;
-(void)setTileSize:(CGSize)arg1 ;
-(BOOL)isGeometryFlipped;
-(NSString *)URLTemplate;
-(GEOTileKey)_keyForPath:(SCD_Struct_MK47)arg1 ;
-(id)initWithURLTemplate:(id)arg1 ;
-(void)_assignProviderID;
-(id)URLForTilePath:(SCD_Struct_MK47)arg1 ;
-(void)_scheduleMinLifetimeCacheCleanupIfNecessary;
-(void)_minLifetimeCacheCleanupFired;
-(int)_zoomLevelForScale:(double)arg1 ;
-(void)loadTileAtPath:(SCD_Struct_MK47)arg1 result:(/*^block*/id)arg2 ;
-(void)_loadTile:(const GEOTileKey*)arg1 result:(/*^block*/id)arg2 ;
-(void)_flushCaches;
-(id)_tilesInMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 contentScale:(double)arg3 ;
-(void)setMinimumZ:(long long)arg1 ;
-(void)setMaximumZ:(long long)arg1 ;
-(void)setCanReplaceMapContent:(BOOL)arg1 ;
-(SCD_Struct_MK6)boundingMapRect;
-(BOOL)canReplaceMapContent;
-(void)setGeometryFlipped:(BOOL)arg1 ;
-(void)dealloc;
@end

