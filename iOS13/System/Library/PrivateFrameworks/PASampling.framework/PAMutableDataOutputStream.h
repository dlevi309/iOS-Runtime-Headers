/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PAOutputStream.h>

@class NSMutableData;

@interface PAMutableDataOutputStream : PAOutputStream {

	NSMutableData* _outputData;

}

@property (nonatomic,readonly) NSMutableData * outputData;              //@synthesize outputData=_outputData - In the implementation block
-(NSMutableData *)outputData;
-(id)initWithMutableData:(id)arg1 ;
-(int)printWithFormat:(const char*)arg1 ;
@end

