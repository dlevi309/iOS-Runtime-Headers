/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, GEOSQLiteDB;

@interface GEOLocationShifterPersistence : NSObject {

	NSString* _dbPath;
	GEOSQLiteDB* _db;

}
+(id)sharedPersister;
-(void)removeAllEntries;
-(void)tearDown;
-(id)init;
-(id)initWithDBFilePath:(id)arg1 ;
-(void)storeResponse:(id)arg1 ;
-(void)findResponseForCoordinate:(GEOCoarseLocationLatLng)arg1 reduceRadius:(double)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2 ;
-(void)removeAllEntriesSync;
-(void)getAllEntries:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_setup:(id)arg1 ;
@end

