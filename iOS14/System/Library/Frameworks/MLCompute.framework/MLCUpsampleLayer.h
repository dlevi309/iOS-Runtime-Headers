/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class NSArray;

@interface MLCUpsampleLayer : MLCLayer {

	BOOL _alignsCorners;
	int _sampleMode;
	NSArray* _shape;
	unsigned long long _upsampleWidth;
	unsigned long long _upsampleHeight;

}

@property (nonatomic,readonly) unsigned long long upsampleWidth;               //@synthesize upsampleWidth=_upsampleWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long upsampleHeight;              //@synthesize upsampleHeight=_upsampleHeight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * shape;                           //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) int sampleMode;                                 //@synthesize sampleMode=_sampleMode - In the implementation block
@property (nonatomic,readonly) BOOL alignsCorners;                             //@synthesize alignsCorners=_alignsCorners - In the implementation block
+(id)layerWithShape:(id)arg1 ;
+(id)layerWithShape:(id)arg1 sampleMode:(int)arg2 alignsCorners:(BOOL)arg3 ;
-(NSArray *)shape;
-(id)description;
-(int)sampleMode;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)initWithShape:(id)arg1 sampleMode:(int)arg2 alignCorners:(BOOL)arg3 ;
-(unsigned long long)upsampleWidth;
-(unsigned long long)upsampleHeight;
-(BOOL)alignsCorners;
@end

