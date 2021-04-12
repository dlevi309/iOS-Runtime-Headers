/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@interface PBReader : OCBReader {

	PptObjectFactory* mPptObjectFactory;
	const void* mBuffer;

}

@property (nonatomic,readonly) PptBinaryReader* pptReader; 
-(BOOL)start;
-(id)read;
-(void)dealloc;
-(id)initWithCancelDelegate:(id)arg1 ;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(PptBinaryReader*)pptReader;
@end

