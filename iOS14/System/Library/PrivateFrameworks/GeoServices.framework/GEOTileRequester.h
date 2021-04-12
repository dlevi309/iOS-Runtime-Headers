/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTileRequesterDelegate, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileRequest, NSObject, NSThread, NSString, GEOResourceManifestManager;

@interface GEOTileRequester : NSObject {

	GEOTileRequest* _tileRequest;
	id<GEOTileRequesterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _context;
	NSThread* _thread;
	NSString* _deviceCountry;
	NSString* _deviceRegion;

}

@property (nonatomic,readonly) GEOResourceManifestManager * resourceManifestManager; 
@property (nonatomic,readonly) GEOTileRequest * tileRequest;                                      //@synthesize tileRequest=_tileRequest - In the implementation block
@property (nonatomic,__weak,readonly) id<GEOTileRequesterDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                        //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id context;                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * deviceCountry;                                            //@synthesize deviceCountry=_deviceCountry - In the implementation block
@property (nonatomic,retain) NSString * deviceRegion;                                             //@synthesize deviceRegion=_deviceRegion - In the implementation block
+(id)locationSensitiveTilesets;
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE55*)newExpiringTilesets;
+(unsigned char)tileProviderIdentifier;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(void)tearDown;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(id)init;
-(id<GEOTileRequesterDelegate>)delegate;
-(void)start;
-(id)context;
-(GEOTileRequest *)tileRequest;
-(NSString *)deviceRegion;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSString *)deviceCountry;
-(void)setDeviceCountry:(NSString *)arg1 ;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(GEOResourceManifestManager *)resourceManifestManager;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)cancel;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)setContext:(id)arg1 ;
@end

