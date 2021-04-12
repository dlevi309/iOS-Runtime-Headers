/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/


#import <Phoenix/Phoenix-Structs.h>
@class NSMutableArray, AXPhoenixClassifierConfiguration;

@interface PredictionsBuffer : NSObject {

	NSMutableArray* _predictions;
	NSMutableArray* _counts;
	AXPhoenixClassifierConfiguration* _configuration;

}
-(id)initWithConfiguration:(id)arg1 ;
-(id)description;
-(void)reset;
-(id)logBuffer;
-(id)predictionCounts;
-(void)addPrediction:(id)arg1 ;
-(SCD_Struct_Pr6)bestPredictionUsingPolicyOption:(int)arg1 ;
@end

