/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@protocol SFUZipArchiveDataRepresentation;
@class OISFUDataRepresentation, OISFUCryptoKey;

@interface OISFUZipEntry : OISFUDataRepresentation {

	OISFUDataRepresentation*<SFUZipArchiveDataRepresentation> mArchiveDataRepresentation;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;
	unsigned long long mDataOffset;
	BOOL mHasDataOffset;
	unsigned long long mEncodedLength;
	BOOL mHasEncodedLength;
	OISFUCryptoKey* mCryptoKey;

}
-(void)setCryptoKey:(id)arg1 ;
-(BOOL)isReadable;
-(void)setDataLength:(long long)arg1 ;
-(unsigned)crc;
-(long long)encodedLength;
-(unsigned long long)dataOffset;
-(long long)dataLength;
-(id)data;
-(BOOL)isEncrypted;
-(id)inputStream;
-(BOOL)isCompressed;
-(void)dealloc;
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

