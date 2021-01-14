/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/


#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSMutableData, NSArray;

@interface ENSignatureFile : NSObject {

	_sFILE* _fileHandle;
	NSMutableData* _outputData;
	NSArray* _signatures;

}

@property (nonatomic,copy) NSArray * signatures;              //@synthesize signatures=_signatures - In the implementation block
+(id)_signatureFileWithProtobufCoder:(id)arg1 error:(id*)arg2 ;
+(id)signatureFileWithArchive:(id)arg1 error:(id*)arg2 ;
+(id)signatureFileWithBytes:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(BOOL)writeAndReturnError:(id*)arg1 ;
-(NSArray *)signatures;
-(BOOL)openWithFileSystemRepresentation:(const char*)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)openForWritingToData:(id)arg1 error:(id*)arg2 ;
-(void)setSignatures:(NSArray *)arg1 ;
@end

