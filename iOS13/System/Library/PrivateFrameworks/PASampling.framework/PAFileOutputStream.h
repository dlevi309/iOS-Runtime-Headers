/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PAOutputStream.h>

@interface PAFileOutputStream : PAOutputStream {

	_sFILE* _outputFileStream;

}

@property (nonatomic,readonly) _sFILE* outputFileStream;              //@synthesize outputFileStream=_outputFileStream - In the implementation block
-(int)printWithFormat:(const char*)arg1 ;
-(id)initWithFileStream:(_sFILE*)arg1 ;
-(_sFILE*)outputFileStream;
@end

