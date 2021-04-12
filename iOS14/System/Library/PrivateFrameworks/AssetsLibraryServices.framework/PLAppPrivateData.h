/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)appPrivateDataForLibraryURL:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(NSURL *)libraryURL;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)debugDescription;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(NSMutableDictionary *)backingDictionary;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)setLibraryURL:(NSURL *)arg1 ;
-(id)_dictionaryStorageURL;
-(void)_saveToFilesystem;
-(void)_readFromFilesystem;
-(id)_appPrivateDataFolderURL;
-(void)_recursiveCreateSubDictionariesIfMissing:(id)arg1 index:(unsigned long long)arg2 parentDictionary:(id)arg3 ;
-(void)setPathManager:(PLPhotoLibraryPathManager *)arg1 ;
-(id)allKeys;
@end

