/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

