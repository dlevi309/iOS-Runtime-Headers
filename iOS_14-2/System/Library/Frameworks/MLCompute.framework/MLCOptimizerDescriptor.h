/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCOptimizerDescriptor : NSObject <NSCopying> {

	BOOL _appliesGradientClipping;
	float _learningRate;
	float _gradientRescale;
	float _gradientClipMax;
	float _gradientClipMin;
	float _regularizationScale;
	int _regularizationType;

}

@property (nonatomic,readonly) float learningRate;                        //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,readonly) float gradientRescale;                     //@synthesize gradientRescale=_gradientRescale - In the implementation block
@property (nonatomic,readonly) BOOL appliesGradientClipping;              //@synthesize appliesGradientClipping=_appliesGradientClipping - In the implementation block
@property (nonatomic,readonly) float gradientClipMax;                     //@synthesize gradientClipMax=_gradientClipMax - In the implementation block
@property (nonatomic,readonly) float gradientClipMin;                     //@synthesize gradientClipMin=_gradientClipMin - In the implementation block
@property (nonatomic,readonly) float regularizationScale;                 //@synthesize regularizationScale=_regularizationScale - In the implementation block
@property (nonatomic,readonly) int regularizationType;                    //@synthesize regularizationType=_regularizationType - In the implementation block
+(id)descriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(int)arg3 regularizationScale:(float)arg4 ;
+(id)descriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 appliesGradientClipping:(BOOL)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(int)arg6 regularizationScale:(float)arg7 ;
-(id)description;
-(unsigned long long)hash;
-(float)gradientRescale;
-(int)regularizationType;
-(float)regularizationScale;
-(id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(BOOL)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(int)arg6 regularizationScale:(float)arg7 ;
-(float)gradientClipMin;
-(float)gradientClipMax;
-(id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(int)arg3 regularizationScale:(float)arg4 ;
-(float)learningRate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)appliesGradientClipping;
@end

