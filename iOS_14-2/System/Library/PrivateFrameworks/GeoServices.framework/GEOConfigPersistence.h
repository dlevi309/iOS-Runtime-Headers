/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOSQLiteDB, _GEOConfigDB, _GEOConfigDBOperationQueue;

@interface GEOConfigPersistence : NSObject {

	GEOSQLiteDB* _db;
	_GEOConfigDB* _configDB;
	_GEOConfigDBOperationQueue* _operationQueue;

}
+(id)shared;
+(BOOL)_setup:(id)arg1 ;
-(void)tearDown;
-(void)setDefault:(id)arg1 forKeyPath:(id)arg2 ;
-(id)defaultForKeyPathComponents:(id)arg1 ;
-(id)initWithDBPath:(id)arg1 ;
-(id)defaultForKeyPath:(id)arg1 ;
-(void)dealloc;
@end

