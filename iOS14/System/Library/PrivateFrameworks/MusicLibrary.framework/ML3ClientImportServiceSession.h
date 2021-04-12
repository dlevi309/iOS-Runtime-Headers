/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class ML3DatabaseConnection, ML3MusicLibrary, ML3ClientImportSessionConfiguration;

@interface ML3ClientImportServiceSession : NSObject {

	ML3DatabaseConnection* _databaseConnection;
	ML3MusicLibrary* _library;
	ML3ClientImportSessionConfiguration* _configuration;

}
-(BOOL)finish;
-(BOOL)begin;
-(void)dealloc;
-(id)initWithLibrary:(id)arg1 connection:(id)arg2 configuration:(id)arg3 ;
-(BOOL)addTrack:(id)arg1 persistentID:(id*)arg2 ;
-(BOOL)updateTrack:(id)arg1 persistentID:(id*)arg2 ;
-(BOOL)removeTrack:(id)arg1 persistentID:(id*)arg2 ;
@end

