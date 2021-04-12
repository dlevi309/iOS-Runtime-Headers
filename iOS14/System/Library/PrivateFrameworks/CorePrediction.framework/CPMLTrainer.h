/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
*/


@protocol CPMLAlgorithmProtocol;
#import <CorePrediction/CorePrediction-Structs.h>
@class NSDictionary, CPMLDB, CPMLSchema, CPMLStorageManager;

@interface CPMLTrainer : NSObject {

	BOOL shouldFail;
	sqlite3Ref modelDB;
	NSDictionary* modelPlist;
	CPMLDB* cpmlDB;
	CPMLCDB* cpCDB;
	CPMLAlgorithm* cpMLAlgo;
	CPMLRemapper* cpRemapper;
	CPMLSchema* cpmlSchema;
	CPMLStatistics* trainerCPStatistics;
	CPMLSerialization* trainerCPSerializer;
	CPMLTunableData* cpTuneableData;
	int mapFunction;
	CPMLDelegate* _cpmlDelegate;
	CPMLStorageManager* _storageManager;
	id<CPMLAlgorithmProtocol> _theDelegate;

}
-(void)train:(BOOL)arg1 ;
-(void)dealloc;
-(id)init:(id)arg1 withModelDBPath:(id)arg2 withPropertyList:(id)arg3 ;
-(void)buildTrainingMachineLearningAlgorithm:(id)arg1 ;
-(id)fileProtectionClassRequest:(id)arg1 ;
-(id)getSolution;
@end

