/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)fileExtension;
-(unsigned long long)fileSize;
-(NSString *)path;
-(NSURL *)url;
-(NSString *)fileName;
-(NSDate *)fileCreationDate;
-(NSString *)UTI;
-(BOOL)isDirectory;
-(NSDate *)fileModificationDate;

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
+(long long)sizeOf:(id)arg1 includeSubFolders:(BOOL)arg2 ;
+(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 fixCreationDate:(BOOL)arg3 ;
+(id)fileWithPath:(id)arg1 ;
+(int)disableOSCachingForURL:(id)arg1 ;
+(void)reenableOSCachingForFileDescriptor:(int)arg1 ;
+(id)pathByTidyingExtensionInPath:(id)arg1 withExtension:(id)arg2 ;
+(BOOL)createEmptyFileAtURL:(id)arg1 ;
+(id)createEmptyTempFileInDirectoryNamed:(id)arg1 filenamePrefix:(id)arg2 pathExtension:(id)arg3 error:(id*)arg4 ;
+(id)createEmptyTempFileInBaseDirectory:(id)arg1 withSubDirectoryNamed:(id)arg2 filenamePrefix:(id)arg3 pathExtension:(id)arg4 error:(id*)arg5 ;
-(id)modificationDate;
-(void)unlock;
-(id)assetType;
-(const char*)fileSystemRepresentation;
-(id)initWithURL:(id)arg1 ;
-(BOOL)tryLock;
-(NSString *)fileExtension;
-(id)initWithPath:(id)arg1 ;
-(BOOL)exists;
-(long long)size;
-(BOOL)isFile;
-(unsigned long long)fileSize;
-(NSString *)path;
-(void)lock;
-(NSURL *)url;
-(NSString *)fileName;
-(id)name;
-(id)attributes;
-(NSDate *)fileCreationDate;
-(id)creationDate;
-(id)extension;
-(unsigned long long)hash;
-(unsigned long long)pathHash;
-(NSString *)UTI;
-(BOOL)isDirectory;
-(NSDate *)fileModificationDate;
-(const stat*)cachedStat;
-(id)volume;
-(void)uncacheStat;
-(id)fileComponent;
-(BOOL)isEqualToFile:(id)arg1 ;
-(id)newFileByAppendingPathComponent:(id)arg1 ;
-(id)fileByResolvingFileAlias;
-(id)folderPath;
-(void)logFileAccess;
-(BOOL)isFileAlias;
-(BOOL)pathExists;
-(unsigned short)posixPermissions;
-(long long)folderSize_recursive:(BOOL)arg1 ;
-(id)lockInFinder;
-(id)labelNumber;
-(id)unlockInFinder;
-(BOOL)isLockedInFinder;
-(id)directoryEnumerator;
-(void)setLabelNumber:(id)arg1 ;
-(id)newFileIStream;
-(id)newFileIOStream;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)isSymLink;
-(BOOL)isInTrash;
-(BOOL)isXMPType;
-(int)fileType;
@end

