/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)closeFile;
-(BOOL)start;
-(_sFILE*)file;
-(void)setFile:(_sFILE*)arg1 ;
-(id)read;
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

