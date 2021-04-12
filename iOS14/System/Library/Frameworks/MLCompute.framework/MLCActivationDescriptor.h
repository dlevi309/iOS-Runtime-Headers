/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCActivationDescriptor : NSObject <NSCopying> {

	int _activationType;
	float _a;
	float _b;
	float _c;

}

@property (nonatomic,readonly) int activationType;              //@synthesize activationType=_activationType - In the implementation block
@property (a,nonatomic,readonly) float a;                       //@synthesize a=_a - In the implementation block
@property (b,nonatomic,readonly) float b;                       //@synthesize b=_b - In the implementation block
@property (c,nonatomic,readonly) float c;                       //@synthesize c=_c - In the implementation block
+(id)descriptorWithType:(int)arg1 ;
+(2)defaultParametersForType:(int)arg1 ;
+(id)descriptorWithType:(int)arg1 a:(float)arg2 ;
+(id)descriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 ;
+(id)descriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 ;
-(float)b;
-(float)c;
-(int)activationType;
-(id)description;
-(unsigned long long)hash;
-(id)initWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 ;
-(float)a;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

