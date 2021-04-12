/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/


@class NSURL, NSString, NSFileManager;

@interface CHSScreenshotManager : NSObject {

	NSURL* _baseURL;
	NSString* _fileUTI;
	NSString* _fileExtension;
	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSString * fileUTI;                       //@synthesize fileUTI=_fileUTI - In the implementation block
@property (nonatomic,readonly) NSString * fileExtension;                 //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
+(id)sharedManager;
-(NSFileManager *)fileManager;
-(NSURL *)baseURL;
-(id)initWithDirectory:(id)arg1 fileUTI:(id)arg2 fileExtension:(id)arg3 ;
-(id)initWithDirectory:(id)arg1 fileType:(id)arg2 fileManager:(id)arg3 ;
-(id)initWithDirectory:(id)arg1 fileUTI:(id)arg2 fileExtension:(id)arg3 fileManager:(id)arg4 ;
-(id)indexingDirectoryNameForWidget:(id)arg1 ;
-(id)URLForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 createIntermediateDirectories:(BOOL)arg4 ;
-(NSString *)fileExtension;
-(id)finalFileNameForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 ;
-(id)initWithDirectory:(id)arg1 fileType:(id)arg2 ;
-(void)deleteAllCachedScreenshots;
-(id)URLIfScreenshotExistsForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 ;
-(id)contentIdentifierForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 ;
-(NSString *)fileUTI;
@end

