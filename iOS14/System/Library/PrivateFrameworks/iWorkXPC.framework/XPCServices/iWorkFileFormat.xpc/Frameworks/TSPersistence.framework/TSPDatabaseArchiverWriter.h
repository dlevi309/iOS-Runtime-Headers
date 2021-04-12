/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class NSString, TSPDatabase, TSPDistributableFileManager;

@interface TSPDatabaseArchiverWriter : NSObject {

	long long _dataStateIdentifier;
	NSString* _fileStateIdentifier;
	BOOL _hasDataState;
	BOOL _hasFileState;
	TSPDatabase* _database;
	TSPDistributableFileManager* _fileManager;
	NSString* _filenameHint;
	BOOL _forceFileStorage;

}

@property (nonatomic,readonly) BOOL hasDataState;                         //@synthesize hasDataState=_hasDataState - In the implementation block
@property (assign,nonatomic) long long dataStateIdentifier; 
@property (nonatomic,readonly) BOOL hasFileState;                         //@synthesize hasFileState=_hasFileState - In the implementation block
@property (nonatomic,retain) NSString * fileStateIdentifier; 
@property (nonatomic,retain) NSString * filenameHint;                     //@synthesize filenameHint=_filenameHint - In the implementation block
@property (assign,nonatomic) BOOL forceFileStorage;                       //@synthesize forceFileStorage=_forceFileStorage - In the implementation block
-(BOOL)hasDataState;
-(BOOL)hasFileState;
-(sqlite3_blobRef)_openDatabaseBlobWithSize:(int)arg1 ;
-(void)_writeDataFromInputStreamToDatabase:(id)arg1 length:(int)arg2 ;
-(void)_writeDataFromInputStreamToFile:(id)arg1 length:(long long)arg2 ;
-(void)setDataStateIdentifier:(long long)arg1 ;
-(void)setFileStateIdentifier:(NSString *)arg1 ;
-(id)initWithDatabase:(id)arg1 fileManager:(id)arg2 ;
-(BOOL)serializeArchive:(const Message*)arg1 ;
-(long long)dataStateIdentifier;
-(NSString *)fileStateIdentifier;
-(void)serializeDataFromStream:(id)arg1 length:(long long)arg2 ;
-(NSString *)filenameHint;
-(void)setFilenameHint:(NSString *)arg1 ;
-(BOOL)forceFileStorage;
-(void)setForceFileStorage:(BOOL)arg1 ;
@end

