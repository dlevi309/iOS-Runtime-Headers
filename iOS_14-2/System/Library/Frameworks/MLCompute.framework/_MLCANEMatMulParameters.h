/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class NSDictionary;

@interface _MLCANEMatMulParameters : NSObject {

	NSDictionary* _matMulParams;
	NSDictionary* _gocParams;

}

@property (nonatomic,retain,readonly) NSDictionary * matMulParams;              //@synthesize matMulParams=_matMulParams - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * gocParams;                 //@synthesize gocParams=_gocParams - In the implementation block
+(id)matMulUnitParametersWith:(id)arg1 gocParams:(id)arg2 ;
-(id)initWithMatMulParams:(id)arg1 gocParams:(id)arg2 ;
-(NSDictionary *)matMulParams;
-(NSDictionary *)gocParams;
@end

