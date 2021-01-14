/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@class NSString;

@interface EBReader : OCBReader {

	NSString* mTemporaryDirectory;
	XlObjectFactory* mXlObjectFactory;
	BOOL mUseStringOptimization;
	BOOL mIsFileStructuredStorage;
	const void* mBuffer;

}

@property (nonatomic,retain) NSString * temporaryDirectory; 
@property (nonatomic,readonly) XlBinaryReader* xlReader; 
@property (assign,nonatomic) BOOL useStringOptimization; 
@property (assign,nonatomic) BOOL isFileStructuredStorage; 
-(NSString *)temporaryDirectory;
-(BOOL)start;
-(id)read;
-(void)dealloc;
-(id)initWithCancelDelegate:(id)arg1 ;
-(void)setIsFileStructuredStorage:(BOOL)arg1 ;
-(BOOL)isFileStructuredStorage;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(XlBinaryReader*)xlReader;
-(BOOL)useStringOptimization;
-(void)setUseStringOptimization:(BOOL)arg1 ;
-(void)setTemporaryDirectory:(NSString *)arg1 ;
@end

