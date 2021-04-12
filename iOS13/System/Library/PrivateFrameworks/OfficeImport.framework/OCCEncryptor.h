/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OCCEncryptor : NSObject {

	NSString* mOutputFilename;
	OCCStreamer* mStreamer;

}

@property (nonatomic,readonly) NSString * outputFilename; 
+(id)allocTempFileWithBase:(id)arg1 filename:(id*)arg2 ;
-(void)dealloc;
-(NSString *)outputFilename;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
-(BOOL)encryptIntoOutputFile;
-(BOOL)encrypt;
@end

