/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(SCD_Struct_PR0)rotation;
-(void)setRotation:(SCD_Struct_PR0)arg1 ;
-(PRRoseSolution *)proximity;
-()translation;
-(void)setTranslation:;
-(void)setProximity:(PRRoseSolution *)arg1 ;
-(double)priorTimestamp;
-(void)setPriorTimestamp:(double)arg1 ;
-(double)subsequentTimestamp;
-(void)setSubsequentTimestamp:(double)arg1 ;
@end

