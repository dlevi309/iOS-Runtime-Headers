/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCLossDescriptor : NSObject <NSCopying> {

	int _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	float _epsilon;
	float _delta;
	unsigned long long _classCount;

}

@property (nonatomic,readonly) int lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                          //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) float weight;                               //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) float labelSmoothing;                       //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (nonatomic,readonly) unsigned long long classCount;              //@synthesize classCount=_classCount - In the implementation block
@property (nonatomic,readonly) float epsilon;                              //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) float delta;                                //@synthesize delta=_delta - In the implementation block
+(id)descriptorWithType:(int)arg1 reductionType:(int)arg2 ;
+(id)descriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 classCount:(unsigned long long)arg5 ;
+(id)descriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 ;
+(id)descriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 classCount:(unsigned long long)arg5 epsilon:(float)arg6 delta:(float)arg7 ;
-(int)lossType;
-(float)delta;
-(float)weight;
-(id)description;
-(unsigned long long)hash;
-(int)reductionType;
-(float)labelSmoothing;
-(float)epsilon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)classCount;
-(id)initWithLossDescriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 ;
-(id)initWithLossDescriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 classCount:(unsigned long long)arg5 epsilon:(float)arg6 delta:(float)arg7 ;
@end

