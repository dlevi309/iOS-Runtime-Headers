/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)serializedRepresentation;
-(NSData *)cachedData;
-(NSURL *)remoteURL;
-(BOOL)isSymbolicLink;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(id)filename;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)fileWrappers;
-(id)addFileWrapper:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)symbolicLinkDestinationURL;
-(id)preferredFilename;
-(BOOL)matchesContentsOfURL:(id)arg1 ;
-(void)setCachedData:(NSData *)arg1 ;
-(id)regularFileContents;
-(id)initWithCoder:(id)arg1 ;
-(void)removeFileWrapper:(id)arg1 ;
-(id)keyForFileWrapper:(id)arg1 ;
-(BOOL)isDirectory;
-(id)dataWithError:(id*)arg1 ;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(id)initWithRemoteURL:(id)arg1 ;
-(id)fileAttributes;
@end

