/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <SampleAnalysis/SAOutputStream.h>

@interface SAFileOutputStream : SAOutputStream {

	_sFILE* _outputFileStream;

}
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(int)appendData:(id)arg1 ;
-(BOOL)hasSpaceAvailable;
@end

