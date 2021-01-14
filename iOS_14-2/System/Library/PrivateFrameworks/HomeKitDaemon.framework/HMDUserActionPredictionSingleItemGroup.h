/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDUserActionPredictionGroup.h>

@class NSUUID, NSArray, HMUserActionPrediction, NSString;

@interface HMDUserActionPredictionSingleItemGroup : HMFObject <HMDUserActionPredictionGroup> {

	HMUserActionPrediction* _prediction;

}

@property (retain) HMUserActionPrediction * prediction;                                   //@synthesize prediction=_prediction - In the implementation block
@property (copy,readonly) NSUUID * groupUUID; 
@property (readonly) double predictionScore; 
@property (copy,readonly) NSArray * predictions; 
@property (copy,readonly) HMUserActionPrediction * userActionRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)predictions;
-(HMUserActionPrediction *)prediction;
-(void)setPrediction:(HMUserActionPrediction *)arg1 ;
-(double)predictionScore;
-(NSUUID *)groupUUID;
-(HMUserActionPrediction *)userActionRepresentation;
-(id)initWithPrediction:(id)arg1 ;
-(void)updateWithPrediction:(id)arg1 ;
-(BOOL)containsPrediction:(id)arg1 ;
-(BOOL)shouldContainPrediction:(id)arg1 ;
@end

