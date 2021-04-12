/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDUserActionPredictionGroup.h>

@class NSMutableArray, NSUUID, NSArray, HMUserActionPrediction, NSString;

@interface HMDUserActionPredictionGroup : HMFObject <HMDUserActionPredictionGroup> {

	double _maxScore;
	NSMutableArray* _mutablePredictions;

}

@property (copy,readonly) NSMutableArray * mutablePredictions;                            //@synthesize mutablePredictions=_mutablePredictions - In the implementation block
@property (copy,readonly) NSUUID * groupUUID; 
@property (readonly) double predictionScore; 
@property (copy,readonly) NSArray * predictions; 
@property (copy,readonly) HMUserActionPrediction * userActionRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)predictions;
-(double)predictionScore;
-(unsigned long long)targetGroupType;
-(NSUUID *)groupUUID;
-(HMUserActionPrediction *)userActionRepresentation;
-(id)initWithPredictions:(id)arg1 ;
-(void)updateWithPrediction:(id)arg1 ;
-(BOOL)containsPrediction:(id)arg1 ;
-(BOOL)shouldContainPrediction:(id)arg1 ;
-(void)_updateMaxScore;
-(NSMutableArray *)mutablePredictions;
-(unsigned long long)frameworkPredictionTypeForGroup;
@end

