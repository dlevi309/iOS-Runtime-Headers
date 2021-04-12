/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OITSUTemporaryDirectory, NSString;

@interface OCCDecryptor : NSObject {

	OITSUTemporaryDirectory* mTempDirectory;
	NSString* mOutputFilename;
	NSString* mBaseStringForOutputFilename;
	OCCStreamer* mStreamer;

}

@property (nonatomic,readonly) NSString * outputFilename; 
+(id)allocTempFileWithBase:(id)arg1 outFilename:(id*)arg2 tempDirectory:(id*)arg3 ;
+(id)agileDescriptorNamespace;
+(id)agilePasswordKeyEncryptorNamespace;
-(void)dealloc;
-(NSString *)outputFilename;
-(BOOL)decrypt;
-(BOOL)isReadProtectedUsingDefaultPassphrase;
-(BOOL)verifyPassphrase:(id)arg1 ;
-(void)deleteOutputFile;
-(BOOL)decryptIntoOutputFile;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
@end

