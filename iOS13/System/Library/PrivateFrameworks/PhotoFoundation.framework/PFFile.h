/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/PFFile.h>
@class NSURL, NSString, NSDate;


@protocol PFFile
@property (readonly) NSURL * url; 
@property (readonly) NSString * path; 
@property (readonly) NSString * fileName; 
@property (readonly) unsigned long long fileSize; 
@property (readonly) NSDate * fileCreationDate; 
@property (readonly) NSDate * fileModificationDate; 
@property (readonly) NSString * fileExtension; 
@property (readonly) BOOL isDirectory; 
@property (readonly) NSString * UTI; 
@required
-(NSString *)path;
-(unsigned long long)fileSize;
-(NSDate *)fileModificationDate;
-(BOOL)isDirectory;
-(NSDate *)fileCreationDate;
-(NSURL *)url;
-(NSString *)UTI;
-(NSString *)fileName;
-(NSString *)fileExtension;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDate;

@interface PFFile : NSObject <PFFile, NSCopying> {

	NSURL* _url;
	NSString* _uti;
	unsigned long long _pathHash;
	stat* _fileInfo;
	NSString* _cachedPath;

}

@property (nonatomic,readonly) unsigned long long pathHash;              //@synthesize pathHash=_pathHash - In the implementation block
@property (readonly) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (readonly) NSString * path; 
@property (readonly) NSString * fileName; 
@property (readonly) unsigned long long fileSize; 
@property (readonly) NSDate * fileCreationDate; 
@property (readonly) NSDate * fileModificationDate; 
@property (readonly) NSString * fileExtension; 
@property (readonly) BOOL isDirectory; 
@property (readonly) NSString * UTI; 
+(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
+(id)fileWithURL:(id)arg1 ;
+(id)assetType:(id)arg1 ;
+(id)realPathFromFileAlias:(id)arg1 ;
+(BOOL)pathExists:(id)arg1 ;
+(BOOL)fileExists:(id)arg1 ;
+(BOOL)directoryExists:(id)arg1 ;
+(id)resourceIdentifierForURL:(id)arg1 ;
+(id)uniqueFileSystemNameForName:(id)arg1 inDirectory:(id)arg2 ;
+(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 fixCreationDate:(BOOL)arg3 ;
+(long long)sizeOf:(id)arg1 includeSubFolders:(BOOL)arg2 ;
+(id)fileWithPath:(id)arg1 ;
+(int)disableOSCachingForURL:(id)arg1 ;
+(void)reenableOSCachingForFileDescriptor:(int)arg1 ;
+(id)pathByTidyingExtensionInPath:(id)arg1 withExtension:(id)arg2 ;
+(BOOL)createEmptyFileAtURL:(id)arg1 ;
+(id)createEmptyTempFileInDirectoryNamed:(id)arg1 filenamePrefix:(id)arg2 pathExtension:(id)arg3 error:(id*)arg4 ;
+(id)createEmptyTempFileInBaseDirectory:(id)arg1 withSubDirectoryNamed:(id)arg2 filenamePrefix:(id)arg3 pathExtension:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(long long)size;
-(const char*)fileSystemRepresentation;
-(id)attributes;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)fileSize;
-(NSDate *)fileModificationDate;
-(int)fileType;
-(BOOL)isDirectory;
-(NSDate *)fileCreationDate;
-(BOOL)tryLock;
-(NSURL *)url;
-(id)modificationDate;
-(id)creationDate;
-(NSString *)UTI;
-(id)extension;
-(id)volume;
-(NSString *)fileName;
-(NSString *)fileExtension;
-(void)uncacheStat;
-(const stat*)cachedStat;
-(BOOL)isEqualToFile:(id)arg1 ;
-(id)fileComponent;
-(id)newFileByAppendingPathComponent:(id)arg1 ;
-(id)fileByResolvingFileAlias;
-(id)folderPath;
-(BOOL)isSymLink;
-(BOOL)isFile;
-(void)logFileAccess;
-(BOOL)isInTrash;
-(BOOL)isFileAlias;
-(BOOL)isXMPType;
-(BOOL)exists;
-(BOOL)pathExists;
-(unsigned short)posixPermissions;
-(long long)folderSize_recursive:(BOOL)arg1 ;
-(id)assetType;
-(id)lockInFinder;
-(id)unlockInFinder;
-(BOOL)isLockedInFinder;
-(id)directoryEnumerator;
-(id)labelNumber;
-(void)setLabelNumber:(id)arg1 ;
-(id)newFileIStream;
-(id)newFileIOStream;
-(unsigned long long)pathHash;
@end

