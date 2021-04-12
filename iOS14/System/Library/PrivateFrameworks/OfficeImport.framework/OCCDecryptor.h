/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)decrypt;
-(NSString *)outputFilename;
-(void)dealloc;
-(BOOL)isReadProtectedUsingDefaultPassphrase;
-(BOOL)verifyPassphrase:(id)arg1 ;
-(void)deleteOutputFile;
-(BOOL)decryptIntoOutputFile;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
@end

