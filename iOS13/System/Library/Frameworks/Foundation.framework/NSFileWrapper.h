/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSData, NSURL;

@interface NSFileWrapper : NSObject <NSSecureCoding> {

	NSDictionary* _fileAttributes;
	NSString* _preferredFileName;
	NSString* _fileName;
	id _contents;
	id _icon;
	id _moreVars;

}

@property (getter=isDirectory,readonly) BOOL directory; 
@property (getter=isRegularFile,readonly) BOOL regularFile; 
@property (getter=isSymbolicLink,readonly) BOOL symbolicLink; 
@property (copy) NSString * preferredFilename; 
@property (copy) NSString * filename; 
@property (copy) NSDictionary * fileAttributes; 
@property (copy,readonly) NSData * serializedRepresentation; 
@property (copy,readonly) NSDictionary * fileWrappers; 
@property (copy,readonly) NSData * regularFileContents; 
@property (copy,readonly) NSURL * symbolicLinkDestinationURL; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_pathForURL:(id)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)_canSafelyMapFilesAtPath:(id)arg1 ;
+(BOOL)_forPath:(id)arg1 getItemKind:(id*)arg2 modificationDate:(id*)arg3 ;
+(id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6 ;
+(id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6 ;
+(BOOL)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
+(void)_removeTemporaryDirectoryAtURL:(id)arg1 ;
+(void)_writeAttributes:(id)arg1 toURL:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)isDirectory;
-(NSDictionary *)fileAttributes;
-(id)initRegularFileWithContents:(id)arg1 ;
-(BOOL)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(NSString *)preferredFilename;
-(void)setPreferredFilename:(NSString *)arg1 ;
-(id)_addChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(void)_initDirectoryContents;
-(id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5 ;
-(void)_removeParent:(id)arg1 ;
-(NSDictionary *)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(void)_observePreferredFileNameOfChild:(id)arg1 ;
-(BOOL)isRegularFile;
-(BOOL)isSymbolicLink;
-(BOOL)_matchesItemKind:(id)arg1 modificationDate:(id)arg2 ;
-(BOOL)matchesContentsOfURL:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(void)setFileAttributes:(NSDictionary *)arg1 ;
-(NSString *)filename;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(BOOL)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id*)arg2 ;
-(NSData *)regularFileContents;
-(NSURL *)symbolicLinkDestinationURL;
-(void)setFilename:(NSString *)arg1 ;
-(void)_updateDescendantFileNames;
-(BOOL)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(BOOL)arg4 didHardLinking:(BOOL*)arg5 error:(id*)arg6 ;
-(id)_attributesToWrite;
-(id)_newImpl;
-(void)_addParent:(id)arg1 ;
-(id)keyForFileWrapper:(id)arg1 ;
-(void)_resetFileModificationDate;
-(id)_uniqueFileNameOfChild:(id)arg1 ;
-(NSData *)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initDirectoryWithFileWrappers:(id)arg1 ;
-(id)initSymbolicLinkWithDestinationURL:(id)arg1 ;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)_fullDescription:(BOOL)arg1 ;
@end

