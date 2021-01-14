/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCMultiheadAttentionDescriptor : NSObject <NSCopying> {

	BOOL _hasBiases;
	BOOL _hasAttentionBiases;
	BOOL _addsZeroAttention;
	BOOL _hasKeyPaddingMask;
	BOOL _hasAttentionMask;
	float _dropout;
	unsigned long long _modelDimension;
	unsigned long long _keyDimension;
	unsigned long long _valueDimension;
	unsigned long long _headCount;

}

@property (assign,nonatomic) BOOL hasKeyPaddingMask;                           //@synthesize hasKeyPaddingMask=_hasKeyPaddingMask - In the implementation block
@property (assign,nonatomic) BOOL hasAttentionMask;                            //@synthesize hasAttentionMask=_hasAttentionMask - In the implementation block
@property (nonatomic,readonly) unsigned long long modelDimension;              //@synthesize modelDimension=_modelDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long keyDimension;                //@synthesize keyDimension=_keyDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long valueDimension;              //@synthesize valueDimension=_valueDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long headCount;                   //@synthesize headCount=_headCount - In the implementation block
@property (nonatomic,readonly) float dropout;                                  //@synthesize dropout=_dropout - In the implementation block
@property (nonatomic,readonly) BOOL hasBiases;                                 //@synthesize hasBiases=_hasBiases - In the implementation block
@property (nonatomic,readonly) BOOL hasAttentionBiases;                        //@synthesize hasAttentionBiases=_hasAttentionBiases - In the implementation block
@property (nonatomic,readonly) BOOL addsZeroAttention;                         //@synthesize addsZeroAttention=_addsZeroAttention - In the implementation block
+(id)descriptorWithModelDimension:(unsigned long long)arg1 keyDimension:(unsigned long long)arg2 valueDimension:(unsigned long long)arg3 headCount:(unsigned long long)arg4 dropout:(float)arg5 hasBiases:(BOOL)arg6 hasAttentionBiases:(BOOL)arg7 addsZeroAttention:(BOOL)arg8 ;
+(id)descriptorWithModelDimension:(unsigned long long)arg1 headCount:(unsigned long long)arg2 ;
-(unsigned long long)modelDimension;
-(id)description;
-(unsigned long long)hash;
-(float)dropout;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasBiases;
-(BOOL)hasAttentionBiases;
-(BOOL)addsZeroAttention;
-(BOOL)hasKeyPaddingMask;
-(BOOL)hasAttentionMask;
-(id)initWithModelDimension:(unsigned long long)arg1 keyDimension:(unsigned long long)arg2 valueDimension:(unsigned long long)arg3 headCount:(unsigned long long)arg4 dropout:(float)arg5 hasBias:(BOOL)arg6 hasAttentionBias:(BOOL)arg7 addsZeroAttention:(BOOL)arg8 ;
-(unsigned long long)keyDimension;
-(unsigned long long)valueDimension;
-(unsigned long long)headCount;
-(void)setHasKeyPaddingMask:(BOOL)arg1 ;
-(void)setHasAttentionMask:(BOOL)arg1 ;
@end

