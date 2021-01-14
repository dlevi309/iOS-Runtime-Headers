/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface GEODBReader : NSObject {

	BOOL _defunct;
	BOOL _closed;
	int _editionUpdating;
	NSObject*<OS_dispatch_queue> _readQueue;
	NSString* _path;
	NSDictionary* _pragmaOverrides;
	sqlite3Ref _db;
	sqlite3_stmtRef _tileQuery;
	sqlite3_stmtRef _versionQuery;
	SCD_Struct_GE55* _expirationRecords;
	unsigned long long _expirationRecordCount;

}

@property (assign) BOOL closed; 
-(BOOL)closed;
-(id)initWithPath:(id)arg1 ;
-(void)setClosed:(BOOL)arg1 ;
-(void)setExpirationRecords:(SCD_Struct_GE55*)arg1 count:(unsigned long long)arg2 ;
-(void)_databaseReset:(id)arg1 ;
-(id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2 ;
-(void)_editionUpdateBegin:(id)arg1 ;
-(void)_editionUpdateEnd:(id)arg1 ;
-(id)_dataForA:(unsigned)arg1 andB:(unsigned)arg2 andC:(unsigned)arg3 andD:(unsigned)arg4 isCurrent:(BOOL*)arg5 eTag:(id*)arg6 ;
-(id)dataForKey:(GEOTileKey*)arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3 ;
-(id)_dataForKey:(GEOTileKey)arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3 ;
-(void)dataForKeys:(id)arg1 callbackQueue:(id)arg2 asyncHandler:(/*^block*/id)arg3 ;
-(void)_closeDB;
-(void)_openDB;
-(void)dealloc;
@end

