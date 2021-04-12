/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFRepresentation.h>

@class NSString, NSData, NSURL, WFFileType, NSDate;

@interface WFFileRepresentation : WFRepresentation {

	BOOL _deletesFileOnDeallocation;
	BOOL _securityScopedResource;
	NSString* _filename;
	NSData* _data;
	NSURL* _fileURL;
	WFFileType* _wfType;
	NSString* _wfName;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSURL* _originalURL;

}

@property (nonatomic,retain) NSString * filename;                           //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSString * wfName;                           //@synthesize wfName=_wfName - In the implementation block
@property (nonatomic,readonly) WFFileType * wfType;                         //@synthesize wfType=_wfType - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                   //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) NSURL * originalURL;                         //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,readonly) long long fileSize; 
@property (nonatomic,readonly) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) long long representationType; 
@property (nonatomic,readonly) BOOL deletesFileOnDeallocation;              //@synthesize deletesFileOnDeallocation=_deletesFileOnDeallocation - In the implementation block
@property (nonatomic,readonly) BOOL securityScopedResource;                 //@synthesize securityScopedResource=_securityScopedResource - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 ;
+(id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2 ;
+(id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 ;
+(id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 ;
+(id)fileWithURL:(id)arg1 options:(long long)arg2 ;
+(void)addDisallowedDirectory:(id)arg1 ;
+(id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2 unsanitizedName:(id*)arg3 ;
+(id)typeOfFile:(id)arg1 ;
+(BOOL)sandboxAllowsRepresentingFileURL:(id)arg1 ;
+(BOOL)fileIsInDisallowedDirectory:(id)arg1 ;
+(id)typeOfData:(id)arg1 ;
+(id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4 ;
+(id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5 ;
+(id)disallowedDirectoryURLs;
+(BOOL)isAllowedToRepresentFileURL:(id)arg1 ;
+(id)sanitizedFilename:(id)arg1 withExtension:(id)arg2 ;
+(id)sanitizedFilename:(id)arg1 withExtension:(id)arg2 unsanitizedName:(id*)arg3 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(long long)fileSize;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSDate *)modificationDate;
-(NSURL *)fileURL;
-(NSURL *)originalURL;
-(NSDate *)creationDate;
-(id)inputStream;
-(BOOL)isEncodable;
-(NSString *)wfName;
-(id)mappedData;
-(BOOL)writeToFileURL:(id)arg1 overwriting:(BOOL)arg2 error:(id*)arg3 ;
-(WFFileType *)wfType;
-(BOOL)deletesFileOnDeallocation;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(id)mappedDataWithError:(id*)arg1 ;
-(long long)representationType;
-(id)initWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4 ;
-(id)initWithFileURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5 ;
-(BOOL)writeToTemporaryFileURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToFileURL:(id)arg1 copy:(BOOL)arg2 overwrite:(BOOL)arg3 error:(id*)arg4 ;
-(id)copyWithName:(id)arg1 addingExtensionIfNecessary:(BOOL)arg2 zone:(NSZone*)arg3 ;
-(BOOL)securityScopedResource;
@end

