/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSMutableDictionary, NSURL, PLPhotoLibraryPathManager;

@interface PLAppPrivateData : NSObject {

	NSMutableDictionary* _backingDictionary;
	NSURL* _libraryURL;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (retain) NSMutableDictionary * backingDictionary;              //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (retain) NSURL * libraryURL;                                   //@synthesize libraryURL=_libraryURL - In the implementation block
@property (retain) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
+(id)appPrivateDataForLibraryURL:(id)arg1 ;
-(id)debugDescription;
-(id)allKeys;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(NSURL *)libraryURL;
-(id)initWithLibraryURL:(id)arg1 ;
-(PLPhotoLibraryPathManager *)pathManager;
-(NSMutableDictionary *)backingDictionary;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)setLibraryURL:(NSURL *)arg1 ;
-(id)_dictionaryStorageURL;
-(void)_saveToFilesystem;
-(void)_readFromFilesystem;
-(id)_appPrivateDataFolderURL;
-(void)_recursiveCreateSubDictionariesIfMissing:(id)arg1 index:(unsigned long long)arg2 parentDictionary:(id)arg3 ;
-(void)setPathManager:(PLPhotoLibraryPathManager *)arg1 ;
@end

