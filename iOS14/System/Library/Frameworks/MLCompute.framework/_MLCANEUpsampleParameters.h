/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class NSDictionary;

@interface _MLCANEUpsampleParameters : NSObject {

	float _scaleFactorX;
	float _scaleFactorY;
	NSDictionary* _upsampleParams;

}

@property (nonatomic,retain,readonly) NSDictionary * upsampleParams;              //@synthesize upsampleParams=_upsampleParams - In the implementation block
@property (nonatomic,readonly) float scaleFactorX;                                //@synthesize scaleFactorX=_scaleFactorX - In the implementation block
@property (nonatomic,readonly) float scaleFactorY;                                //@synthesize scaleFactorY=_scaleFactorY - In the implementation block
+(id)upsampleUnitParametersWith:(id)arg1 scaleFactorX:(float)arg2 scaleFactorY:(float)arg3 ;
-(float)scaleFactorX;
-(float)scaleFactorY;
-(NSDictionary *)upsampleParams;
-(id)initWithUpsampleParams:(id)arg1 scaleFactorX:(float)arg2 scaleFactorY:(float)arg3 ;
@end

