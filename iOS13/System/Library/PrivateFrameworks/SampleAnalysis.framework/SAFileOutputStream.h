/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <SampleAnalysis/SAOutputStream.h>

@interface SAFileOutputStream : SAOutputStream {

	_sFILE* _outputFileStream;

}

@property (nonatomic,readonly) _sFILE* outputFileStream;              //@synthesize outputFileStream=_outputFileStream - In the implementation block
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(int)appendData:(id)arg1 ;
-(int)printWithFormat:(const char*)arg1 ;
-(id)initWithFileStream:(_sFILE*)arg1 ;
-(_sFILE*)outputFileStream;
@end

