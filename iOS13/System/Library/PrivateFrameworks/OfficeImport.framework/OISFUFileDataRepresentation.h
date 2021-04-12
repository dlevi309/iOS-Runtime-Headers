/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@protocol SFUInputStream;
@class NSString, OISFUCryptoKey;

@interface OISFUFileDataRepresentation : OISFUDataRepresentation {

	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned mFileType;
	BOOL mHasFileAttributes;
	long long mPlaintextDataLength;
	OISFUCryptoKey* mCryptoKey;
	id<SFUInputStream> mInputStream;
	BOOL mDeleteFileWhenDone;

}
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(unsigned)fileType;
-(BOOL)isEncrypted;
-(id)inputStream;
-(void)setFileType:(unsigned)arg1 ;
-(long long)encodedLength;
-(long long)dataLength;
-(BOOL)isReadable;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3 ;
-(BOOL)isCryptoKeyIdenticalToKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)readFileAttributes;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 ;
-(id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)deleteFileWhenDone;
@end

