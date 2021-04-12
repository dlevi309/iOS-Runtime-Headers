/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _remoteURL;
	NSData* _cachedData;

}

@property (nonatomic,retain) NSURL * remoteURL;                //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSData * cachedData;              //@synthesize cachedData=_cachedData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDirectory;
-(id)fileAttributes;
-(id)preferredFilename;
-(id)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(BOOL)isSymbolicLink;
-(BOOL)matchesContentsOfURL:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)filename;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(id)regularFileContents;
-(id)symbolicLinkDestinationURL;
-(id)keyForFileWrapper:(id)arg1 ;
-(id)serializedRepresentation;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(NSData *)cachedData;
-(void)setCachedData:(NSData *)arg1 ;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(id)dataWithError:(id*)arg1 ;
-(id)initWithRemoteURL:(id)arg1 ;
@end

