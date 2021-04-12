/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/SFUDataRepresentation.h>

@protocol SFUZipArchiveDataRepresentation;
@class SFUDataRepresentation, SFUCryptoKey;

@interface SFUZipEntry : SFUDataRepresentation {

	SFUDataRepresentation*<SFUZipArchiveDataRepresentation> mArchiveDataRepresentation;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;
	unsigned long long mDataOffset;
	BOOL mHasDataOffset;
	unsigned long long mEncodedLength;
	BOOL mHasEncodedLength;
	SFUCryptoKey* mCryptoKey;

}
-(void)dealloc;
-(id)data;
-(BOOL)isEncrypted;
-(id)inputStream;
-(long long)encodedLength;
-(long long)dataLength;
-(BOOL)isReadable;
-(void)setDataLength:(long long)arg1 ;
-(BOOL)isCompressed;
-(unsigned long long)dataOffset;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(unsigned)crc;
-(void)setCryptoKey:(id)arg1 ;
-(void)copyToFile:(id)arg1 ;
-(id)initFromCentralFileHeader:(const char*)arg1 dataRepresentation:(id)arg2 ;
-(void)readZip64ExtraField:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned)arg6 ;
-(void)setCompressionFlags:(unsigned short)arg1 ;
-(unsigned long long)calculateEncodedLength;
-(BOOL)isBackedByFile;
-(id)backingFilePath;
-(unsigned long long)backingFileDataOffset;
@end

