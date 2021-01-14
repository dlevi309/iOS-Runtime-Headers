/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)encrypt;
-(NSString *)outputFilename;
-(void)dealloc;
-(id)initWithStreamer:(OCCStreamer*)arg1 ;
-(BOOL)encryptIntoOutputFile;
@end

