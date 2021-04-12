/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {

	OCPZipPackage* mZipPackage;
	const void* mDataBytes;

}

@property (nonatomic,retain) OCPZipPackage * zipPackage; 
-(BOOL)start;
-(id)read;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(BOOL)isBinaryReader;
-(OCPZipPackage *)zipPackage;
-(void)setZipPackage:(OCPZipPackage *)arg1 ;
-(BOOL)verifyFileFormat;
-(void)restartReaderToUseDecryptedDocument;
@end

