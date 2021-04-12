/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

