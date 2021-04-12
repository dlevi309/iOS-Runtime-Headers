/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEODefaultsDBDict, geo_isolater, GEOSQLiteDB, _GEOConfigDBOperationQueue;

@interface _GEOConfigDB : NSObject {

	GEODefaultsDBDict* _cache;
	geo_isolater* _isolator;
	Aq _lastId;
	GEOSQLiteDB* _db;
	_GEOConfigDBOperationQueue* _operationQueue;
	/*function pointer*/void* _clearFunction;
	/*function pointer*/void* _setFunction;
	/*function pointer*/void* _addFunction;

}

@property (nonatomic,readonly) GEOSQLiteDB * db;                                         //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) _GEOConfigDBOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* clearFunction;                  //@synthesize clearFunction=_clearFunction - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* setFunction;                    //@synthesize setFunction=_setFunction - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* addFunction;                    //@synthesize addFunction=_addFunction - In the implementation block
-(GEOSQLiteDB *)db;
-(_GEOConfigDBOperationQueue *)operationQueue;
-(/*function pointer*/void*)addFunction;
-(/*function pointer*/void*)clearFunction;
-(void)withCache:(/*^block*/id)arg1 ;
-(long long)nextId;
-(id)init:(id)arg1 cache:(id)arg2 operationQueue:(id)arg3 clearFunction:(/*function pointer*/void*)arg4 setFunction:(/*function pointer*/void*)arg5 addFunction:(/*function pointer*/void*)arg6 tableName:(id)arg7 ;
-(/*function pointer*/void*)setFunction;
@end

