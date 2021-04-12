/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)allKeys;
-(unsigned long long)storeSize;
-(NSString *)preferredExtension;
-(NSString *)directoryPath;
-(BOOL)removeAllFiles;
-(id)_keyForFileName:(id)arg1 ;
-(id)_filePathForKey:(id)arg1 ;
-(NSMutableDictionary *)fileURLsByKey;
-(BOOL)removeFileWithKey:(id)arg1 ;
-(id)fileURLForKey:(id)arg1 ;
-(unsigned long long)_sizeOfFileAtURL:(id)arg1 ;
-(unsigned long long)storeSizeForKeys:(id)arg1 ;
-(id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2 ;
-(id)copyFileAtPath:(id)arg1 withKey:(id)arg2 ;
-(id)moveFileAtPath:(id)arg1 withKey:(id)arg2 ;
-(id)copyData:(id)arg1 withKey:(id)arg2 ;
-(BOOL)removeAllFilesExceptKeys:(id)arg1 ;
-(id)filePathForKey:(id)arg1 ;
-(unsigned long long)sizeOfFileForKey:(id)arg1 ;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(void)setPreferredExtension:(NSString *)arg1 ;
-(void)setFileURLsByKey:(NSMutableDictionary *)arg1 ;
@end

