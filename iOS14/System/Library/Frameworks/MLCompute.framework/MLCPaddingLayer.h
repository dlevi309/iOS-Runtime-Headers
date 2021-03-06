/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCLayer.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCPaddingLayer : MLCLayer <NSCopying> {

	int _paddingType;
	float _constantValue;
	unsigned long long _paddingLeft;
	unsigned long long _paddingRight;
	unsigned long long _paddingTop;
	unsigned long long _paddingBottom;

}

@property (nonatomic,readonly) int paddingType;                               //@synthesize paddingType=_paddingType - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingLeft;                //@synthesize paddingLeft=_paddingLeft - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingRight;               //@synthesize paddingRight=_paddingRight - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingTop;                 //@synthesize paddingTop=_paddingTop - In the implementation block
@property (nonatomic,readonly) unsigned long long paddingBottom;              //@synthesize paddingBottom=_paddingBottom - In the implementation block
@property (nonatomic,readonly) float constantValue;                           //@synthesize constantValue=_constantValue - In the implementation block
+(id)layerWithReflectionPadding:(id)arg1 ;
+(id)layerWithSymmetricPadding:(id)arg1 ;
+(id)layerWithZeroPadding:(id)arg1 ;
+(id)layerWithConstantPadding:(id)arg1 constantValue:(float)arg2 ;
-(unsigned long long)paddingBottom;
-(id)description;
-(unsigned long long)paddingTop;
-(unsigned long long)paddingLeft;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)paddingRight;
-(float)constantValue;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)initWithPaddingType:(int)arg1 paddingSizes:(id)arg2 constantValue:(float)arg3 ;
-(int)paddingType;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)resultTensorFromSources:(id)arg1 ;
@end

