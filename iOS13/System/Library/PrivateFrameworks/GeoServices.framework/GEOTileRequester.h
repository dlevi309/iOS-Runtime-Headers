/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned char)tileProviderIdentifier;
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE58*)newExpiringTilesets;
-(id)init;
-(id<GEOTileRequesterDelegate>)delegate;
-(void)cancel;
-(void)start;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)tearDown;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(GEOTileRequest *)tileRequest;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(NSString *)deviceCountry;
-(void)setDeviceCountry:(NSString *)arg1 ;
-(NSString *)deviceRegion;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(GEOResourceManifestManager *)resourceManifestManager;
@end

