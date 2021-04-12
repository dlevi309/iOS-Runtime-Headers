/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookDataCollection.framework/BrookDataCollection
*/


#import <BrookDataCollection/BrookDataCollection-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSString, NSArray;

@interface BRKDataCollectionBundle : NSObject {

	NSMutableDictionary* _writers;
	NSMutableSet* _manifest;
	os_unfair_lock_s _writersLock;
	BOOL _isPackaged;
	NSString* _folderName;
	NSString* _basePath;

}

@property (nonatomic,readonly) NSString * folderName;              //@synthesize folderName=_folderName - In the implementation block
@property (nonatomic,readonly) NSString * basePath;                //@synthesize basePath=_basePath - In the implementation block
@property (nonatomic,readonly) NSArray * addedFiles; 
@property (nonatomic,readonly) BOOL isPackaged;                    //@synthesize isPackaged=_isPackaged - In the implementation block
+(id)defaultLogDirectory;
-(NSString *)basePath;
-(void)writeData:(id)arg1 toFile:(id)arg2 ;
-(NSString *)folderName;
-(void)_writeData:(id)arg1 toFile:(id)arg2 updateManifest:(BOOL)arg3 ;
-(id)_writerForClass:(Class)arg1 file:(id)arg2 configuration:(/*^block*/id)arg3 ;
-(void)closeWriterForFile:(id)arg1 ;
-(id)initWithFolderNamed:(id)arg1 ;
-(NSArray *)addedFiles;
-(void)writeJSON:(id)arg1 toFile:(id)arg2 ;
-(id)accelerationWriterForFile:(id)arg1 ;
-(id)accelerationWriterForFile:(id)arg1 valueCount:(unsigned long long)arg2 ;
-(id)audioWriterForFile:(id)arg1 ;
-(id)logWriterForFile:(id)arg1 ;
-(id)embeddingsWriterForFile:(id)arg1 ;
-(BOOL)packageBundleToPath:(id*)arg1 filePrioritization:(id)arg2 ;
-(BOOL)removeBundle;
-(BOOL)isPackaged;
@end

