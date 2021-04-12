/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@class NSMutableArray, NSMutableDictionary;

@interface PRDataRecorderBase : NSObject {

	NSMutableArray* _measurements;
	NSMutableArray* _estimatorInput;
	NSMutableArray* _estimatorOutput;
	NSMutableArray* _rangeEstimatorOutput;
	NSMutableDictionary* _customData;

}

@property (nonatomic,retain) NSMutableArray * measurements;                      //@synthesize measurements=_measurements - In the implementation block
@property (nonatomic,retain) NSMutableArray * estimatorInput;                    //@synthesize estimatorInput=_estimatorInput - In the implementation block
@property (nonatomic,retain) NSMutableArray * estimatorOutput;                   //@synthesize estimatorOutput=_estimatorOutput - In the implementation block
@property (nonatomic,retain) NSMutableArray * rangeEstimatorOutput;              //@synthesize rangeEstimatorOutput=_rangeEstimatorOutput - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customData;                   //@synthesize customData=_customData - In the implementation block
+(id)generateFilename;
-(id)init;
-(NSMutableArray *)measurements;
-(void)setMeasurements:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)customData;
-(void)setCustomData:(NSMutableDictionary *)arg1 ;
-(void)writeSensorDataToURL:(id)arg1 ;
-(void)discardSensorData;
-(void)recordProximityMeasurement:(id)arg1 ;
-(void)recordPoseMeasurement:(id)arg1 ;
-(void)recordEstimatorInput:(id)arg1 ;
-(void)recordTargetEstimates:(id)arg1 ;
-(void)recordRangeEstimate:(id)arg1 ;
-(void)recordTargetMovingStateChanged:(BOOL)arg1 atTime:(double)arg2 ;
-(void)recordCustomData:(id)arg1 forKey:(id)arg2 ;
-(void)setEstimatorInput:(NSMutableArray *)arg1 ;
-(void)setEstimatorOutput:(NSMutableArray *)arg1 ;
-(void)setRangeEstimatorOutput:(NSMutableArray *)arg1 ;
-(NSMutableArray *)estimatorInput;
-(NSMutableArray *)estimatorOutput;
-(NSMutableArray *)rangeEstimatorOutput;
@end

