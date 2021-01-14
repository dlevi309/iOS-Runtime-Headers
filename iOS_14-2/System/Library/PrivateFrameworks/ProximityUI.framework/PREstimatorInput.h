/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


#import <ProximityUI/ProximityUI-Structs.h>
@class PRRoseSolution;

@interface PREstimatorInput : NSObject {

	double _timestamp;
	double _priorTimestamp;
	double _subsequentTimestamp;
	PRRoseSolution* _proximity;
	SCD_Struct_PR0 _rotation;
	 _translation;

}

@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double priorTimestamp;                   //@synthesize priorTimestamp=_priorTimestamp - In the implementation block
@property (assign,nonatomic) double subsequentTimestamp;              //@synthesize subsequentTimestamp=_subsequentTimestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_PR0 rotation;                 //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic)  translation;                            //@synthesize translation=_translation - In the implementation block
@property (nonatomic,retain) PRRoseSolution * proximity;              //@synthesize proximity=_proximity - In the implementation block
-(void)setRotation:(SCD_Struct_PR0)arg1 ;
-(SCD_Struct_PR0)rotation;
-(double)timestamp;
-(void)setTranslation:;
-(PRRoseSolution *)proximity;
-()translation;
-(void)setProximity:(PRRoseSolution *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(double)priorTimestamp;
-(void)setPriorTimestamp:(double)arg1 ;
-(double)subsequentTimestamp;
-(void)setSubsequentTimestamp:(double)arg1 ;
@end

