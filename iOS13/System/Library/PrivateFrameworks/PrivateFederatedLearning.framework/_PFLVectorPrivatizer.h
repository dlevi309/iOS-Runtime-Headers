/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@interface _PFLVectorPrivatizer : NSObject {

	double _r;
	double _nu;

}

@property (r) double r;                    //@synthesize r=_r - In the implementation block
@property (assign) double nu;              //@synthesize nu=_nu - In the implementation block
+(id)vectorPrivatizerWithGamma:(double)arg1 nu:(double)arg2 ;
-(id)init;
-(id)description;
-(double)r;
-(void)setR:(double)arg1 ;
-(id)initWithGamma:(double)arg1 nu:(double)arg2 ;
-(id)privatizeUnitWithVector:(id)arg1 maxRejection:(unsigned long long)arg2 minCDProduct:(double)arg3 precision:(double)arg4 ;
-(double)privMagn:(double)arg1 ;
-(double)nu;
-(id)sampleUnitSDPWithUnitVector:(id)arg1 gamma:(double)arg2 maxRejection:(unsigned long long)arg3 minCDProduct:(double)arg4 precision:(double)arg5 ;
-(double)biasWithD:(double)arg1 minCDProduct:(double)arg2 ;
-(id)sdpWithVector:(id)arg1 maxRejection:(unsigned long long)arg2 minCDProduct:(double)arg3 precision:(double)arg4 ;
-(void)setNu:(double)arg1 ;
@end

