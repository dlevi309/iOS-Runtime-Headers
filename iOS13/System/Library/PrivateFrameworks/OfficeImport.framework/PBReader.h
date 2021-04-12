/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@interface PBReader : OCBReader {

	PptObjectFactory* mPptObjectFactory;
	const void* mBuffer;

}

@property (nonatomic,readonly) PptBinaryReader* pptReader; 
-(void)dealloc;
-(BOOL)start;
-(id)read;
-(id)initWithCancelDelegate:(id)arg1 ;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(PptBinaryReader*)pptReader;
@end

