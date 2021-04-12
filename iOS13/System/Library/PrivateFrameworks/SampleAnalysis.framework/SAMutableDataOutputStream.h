/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SAOutputStream.h>

@class NSMutableData;

@interface SAMutableDataOutputStream : SAOutputStream {

	NSMutableData* _outputData;

}

@property (nonatomic,readonly) NSMutableData * outputData;              //@synthesize outputData=_outputData - In the implementation block
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(int)appendData:(id)arg1 ;
-(NSMutableData *)outputData;
-(id)initWithMutableData:(id)arg1 ;
-(int)printWithFormat:(const char*)arg1 ;
@end

