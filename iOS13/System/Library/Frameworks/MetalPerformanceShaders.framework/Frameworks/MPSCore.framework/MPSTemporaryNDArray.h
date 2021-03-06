/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSNDArray.h>

@interface MPSTemporaryNDArray : MPSNDArray {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)defaultAllocator;
+(id)temporaryNDArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)readCount;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
@end

