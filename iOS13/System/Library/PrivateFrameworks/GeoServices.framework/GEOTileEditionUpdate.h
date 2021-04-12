/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)invalidateEverything;
-(BOOL)flushEverything;
-(unsigned long long)tilesetCount;
-(void)tileset:(unsigned*)arg1 edition:(unsigned*)arg2 provider:(unsigned*)arg3 invalidateOnly:(BOOL*)arg4 atIndex:(unsigned long long)arg5 ;
-(void)setFlushEverything:(BOOL)arg1 ;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(void)addTileset:(unsigned)arg1 edition:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(BOOL)arg4 ;
@end

