/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/SFUDataRepresentation.h>

@protocol SFUInputStream;
@class NSString, SFUCryptoKey;

@interface SFUFileDataRepresentation : SFUDataRepresentation {

	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned mFileType;
	BOOL mHasFileAttributes;
	long long mPlaintextDataLength;
	SFUCryptoKey* mCryptoKey;
	id<SFUInputStream> mInputStream;
	BOOL mDeleteFileWhenDone;

}
-(BOOL)isReadable;
-(long long)encodedLength;
-(id)initWithPath:(id)arg1 ;
-(void)setFileType:(unsigned)arg1 ;
-(long long)dataLength;
-(id)path;
-(id)description;
-(BOOL)isEncrypted;
-(id)inputStream;
-(void)dealloc;
-(unsigned)fileType;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(CGDataProviderRef)cgDataProvider;
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

