/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIDESDataset, NSURL, NSString;

@interface HMIDESTrainer : HMFObject <HMFLogging> {

	HMIDESDataset* _data;
	NSURL* _networkPath;

}

@property (readonly) HMIDESDataset * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) NSURL * networkPath;                           //@synthesize networkPath=_networkPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMIDESDataset *)data;
-(NSURL *)networkPath;
-(id)initWithTrainingNetworkPath:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)trainLayers:(id)arg1 epochs:(unsigned long long)arg2 inferenceInputs:(id)arg3 inferenceOutputs:(id)arg4 trainingInputs:(id)arg5 trainingOutputs:(id)arg6 error:(id*)arg7 ;
-(id)getParametersFromLayers:(id)arg1 fromTask:(id)arg2 error:(id*)arg3 ;
@end

