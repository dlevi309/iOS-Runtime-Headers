/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCCPUDeviceOps.h>

@class NSArray;

@interface MLCSliceCPUDeviceOps : MLCCPUDeviceOps {

	unsigned long long _beginOffset;
	NSArray* _begin;
	NSArray* _count;
	NSArray* _stride;

}

@property (assign,nonatomic) unsigned long long beginOffset;              //@synthesize beginOffset=_beginOffset - In the implementation block
@property (nonatomic,copy) NSArray * begin;                               //@synthesize begin=_begin - In the implementation block
@property (nonatomic,copy) NSArray * count;                               //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSArray * stride;                              //@synthesize stride=_stride - In the implementation block
+(id)deviceOpsWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 ;
-(void)setCount:(NSArray *)arg1 ;
-(NSArray *)begin;
-(NSArray *)count;
-(void)setStride:(NSArray *)arg1 ;
-(NSArray *)stride;
-(void)setBegin:(NSArray *)arg1 ;
-(id)initWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 betaDeltaData:(id)arg9 gammaDeltaData:(id)arg10 betaMomentumData:(id)arg11 gammaMomentumData:(id)arg12 ;
-(unsigned long long)beginOffset;
-(void)setBeginOffset:(unsigned long long)arg1 ;
@end

