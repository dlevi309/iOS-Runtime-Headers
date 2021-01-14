/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject {

	NSMutableArray* _entries;
	BOOL _flushEverything;
	BOOL _invalidateEverything;

}

@property (assign,nonatomic) BOOL flushEverything;                   //@synthesize flushEverything=_flushEverything - In the implementation block
@property (assign,nonatomic) BOOL invalidateEverything;              //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
-(void)addTileset:(unsigned)arg1 edition:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(BOOL)arg4 ;
-(id)init;
-(BOOL)flushEverything;
-(void)tileset:(unsigned*)arg1 edition:(unsigned*)arg2 provider:(unsigned*)arg3 invalidateOnly:(BOOL*)arg4 atIndex:(unsigned long long)arg5 ;
-(unsigned long long)tilesetCount;
-(void)setFlushEverything:(BOOL)arg1 ;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(BOOL)invalidateEverything;
@end

