/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDEncryptedReader.h>

@interface OCBReader : OCDEncryptedReader {

	OcBinaryReader* mBinaryReader;
	_sFILE* mFile;

}

@property (assign,nonatomic) OcBinaryReader* binaryReader; 
@property (assign,nonatomic) _sFILE* file; 
@property (nonatomic,readonly) OCCEncryptionInfoReader* encryptionInfoReader; 
-(_sFILE*)file;
-(void)setFile:(_sFILE*)arg1 ;
-(void)closeFile;
-(BOOL)start;
-(id)read;
-(void)dealloc;
-(id)initWithCancelDelegate:(id)arg1 ;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(BOOL)isBinaryReader;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey*)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(id)allocDecryptorWithCryptoKey:(OCCCryptoKey*)arg1 baseOutputFilename:(id)arg2 ;
-(OcBinaryReader*)binaryReader;
-(void)setBinaryReader:(OcBinaryReader*)arg1 ;
-(void)restartReaderToUseDecryptedDocument;
@end

