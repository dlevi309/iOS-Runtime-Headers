/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOSQLiteDB, GEODefaultsDBDict, geo_isolater;

@interface GEOConfigPersistence : NSObject {

	GEOSQLiteDB* _db;
	GEODefaultsDBDict* _cache;
	geo_isolater* _cacheIsolator;

}
+(id)shared;
+(BOOL)_setup:(id)arg1 ;
-(void)dealloc;
-(void)tearDown;
-(id)initWithDBPath:(id)arg1 ;
-(id)_valueForKeyPath:(id)arg1 key:(id*)arg2 createOrUpdate:(/*^block*/id)arg3 ;
-(void)setDefault:(id)arg1 forKeyPath:(id)arg2 ;
-(id)defaultForKeyPath:(id)arg1 ;
@end

