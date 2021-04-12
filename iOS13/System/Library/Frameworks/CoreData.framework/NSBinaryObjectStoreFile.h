/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSDictionary, NSMutableDictionary;

@interface NSBinaryObjectStoreFile : NSObject {

	int _databaseVersion;
	NSDictionary* _fullMetadata;
	unsigned long long _primaryKeyGeneration;
	NSMutableDictionary* _mapData;
	NSDictionary* _storeOptions;

}
-(void)dealloc;
-(BOOL)readMetadataFromFile:(id)arg1 securely:(BOOL)arg2 error:(id*)arg3 ;
-(id)fullMetadata;
-(void)setFullMetadata:(id)arg1 ;
-(BOOL)writeMetadataToFile:(id)arg1 error:(id*)arg2 ;
-(void)setDatabaseVersion:(int)arg1 ;
-(void)setPrimaryKeyGeneration:(unsigned long long)arg1 ;
-(void)setMapData:(id)arg1 ;
-(void)clearCurrentValues;
-(BOOL)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4 ;
-(int)databaseVersion;
-(unsigned long long)primaryKeyGeneration;
-(id)mapData;
-(BOOL)readFromFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
@end

