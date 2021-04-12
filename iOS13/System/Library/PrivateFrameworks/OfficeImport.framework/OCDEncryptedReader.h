/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCDReader.h>

@class OCCDecryptor;

@interface OCDEncryptedReader : OCDReader {

	OCCDecryptor* mDecryptor;

}

@property (nonatomic,readonly) OCCDecryptor * decryptor; 
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(OCCDecryptor *)decryptor;
-(void)restartReaderToUseDecryptedDocument;
-(void)useUnencryptedDocument;
-(id)defaultPassphrase;
@end

