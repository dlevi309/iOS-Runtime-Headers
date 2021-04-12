/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, GEOSQLiteDB;

@interface GEOLocationShifterPersistence : NSObject {

	NSString* _dbPath;
	GEOSQLiteDB* _db;

}
+(id)sharedPersister;
-(id)init;
-(void)removeAllEntries;
-(void)tearDown;
-(BOOL)_setup:(id)arg1 ;
-(void)findResponseForCoordinate:(SCD_Struct_GE32)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)storeResponse:(id)arg1 ;
-(void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2 ;
-(void)removeAllEntriesSync;
-(id)initWithDBFilePath:(id)arg1 ;
-(void)_findResponseForCoordinate:(SCD_Struct_GE32)arg1 usingFunction:(/*function pointer*/void*)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)findExactResponseForCoordinate:(SCD_Struct_GE32)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllEntries:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

