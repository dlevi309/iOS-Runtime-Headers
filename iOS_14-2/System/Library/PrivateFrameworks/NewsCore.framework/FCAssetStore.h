/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSMutableDictionary;

@interface FCAssetStore : NSObject {

	NSString* _directoryPath;
	NSString* _preferredExtension;
	NSMutableDictionary* _fileURLsByKey;

}

@property (nonatomic,copy) NSString * directoryPath;                         //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,copy) NSString * preferredExtension;                    //@synthesize preferredExtension=_preferredExtension - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * fileURLsByKey;              //@synthesize fileURLsByKey=_fileURLsByKey - In the implementation block
@property (nonatomic,readonly) NSString * rootDirectory; 
-(NSString *)preferredExtension;
-(id)_keyForFileName:(id)arg1 ;
-(unsigned long long)storeSize;
-(id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2 ;
-(BOOL)removeAllFilesExceptKeys:(id)arg1 ;
-(unsigned long long)sizeOfFileForKey:(id)arg1 ;
-(id)copyFileAtPath:(id)arg1 withKey:(id)arg2 ;
-(void)setPreferredExtension:(NSString *)arg1 ;
-(id)copyData:(id)arg1 withKey:(id)arg2 ;
-(NSMutableDictionary *)fileURLsByKey;
-(id)filePathForKey:(id)arg1 ;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(id)fileURLForKey:(id)arg1 ;
-(NSString *)rootDirectory;
-(BOOL)removeAllFiles;
-(unsigned long long)_sizeOfFileAtURL:(id)arg1 ;
-(id)moveFileAtURL:(id)arg1 withKey:(id)arg2 ;
-(unsigned long long)storeSizeForKeys:(id)arg1 ;
-(BOOL)removeFileWithKey:(id)arg1 ;
-(void)setFileURLsByKey:(NSMutableDictionary *)arg1 ;
-(id)allKeys;
-(id)moveFileAtPath:(id)arg1 withKey:(id)arg2 ;
-(NSString *)directoryPath;
-(id)_filePathForKey:(id)arg1 ;
@end

