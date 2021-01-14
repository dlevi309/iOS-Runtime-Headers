/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)tileset;
-(unsigned)provider;
-(void)setInvalidateOnly:(BOOL)arg1 ;
-(void)setTileset:(unsigned)arg1 ;
-(BOOL)invalidateOnly;
-(unsigned)edition;
-(void)setEdition:(unsigned)arg1 ;
@end

