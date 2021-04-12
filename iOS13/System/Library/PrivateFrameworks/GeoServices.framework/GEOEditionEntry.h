/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOEditionEntry : NSObject {

	unsigned _tileset;
	unsigned _edition;
	unsigned _provider;
	BOOL _invalidateOnly;

}

@property (assign,nonatomic) unsigned tileset;                 //@synthesize tileset=_tileset - In the implementation block
@property (assign,nonatomic) unsigned edition;                 //@synthesize edition=_edition - In the implementation block
@property (assign,nonatomic) unsigned provider;                //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) BOOL invalidateOnly;              //@synthesize invalidateOnly=_invalidateOnly - In the implementation block
-(void)setProvider:(unsigned)arg1 ;
-(unsigned)provider;
-(unsigned)edition;
-(unsigned)tileset;
-(void)setTileset:(unsigned)arg1 ;
-(void)setEdition:(unsigned)arg1 ;
-(BOOL)invalidateOnly;
-(void)setInvalidateOnly:(BOOL)arg1 ;
@end

