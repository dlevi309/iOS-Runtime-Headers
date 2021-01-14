/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGeoTrackingGradualCorrectionFilter : NSObject {

	SCD_Struct_AR1 _ENUFromVIOCurrent;
	SCD_Struct_AR1 _lastVIOPose;
	double _lastTimestamp;
	vector<float, std::__1::allocator<float> >* _posHistory;
	vector<unsigned char, std::__1::allocator<unsigned char> > _posHistoryC;
	SCD_Struct_AR1 _ENUFromVIOTarget;

}

@property (assign) SCD_Struct_AR1 ENUFromVIOTarget;              //@synthesize ENUFromVIOTarget=_ENUFromVIOTarget - In the implementation block
-(void)updateWithVIOPose:(SCD_Struct_AR1)arg1 timestamp:(double)arg2 ;
-(BOOL)getCurrentENUFromVIO:(SCD_Struct_AR1*)arg1 ;
-(id)initWithTargetTransform:(SCD_Struct_AR1)arg1 ;
-(void)setENUFromVIOTarget:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)ENUFromVIOTarget;
@end

