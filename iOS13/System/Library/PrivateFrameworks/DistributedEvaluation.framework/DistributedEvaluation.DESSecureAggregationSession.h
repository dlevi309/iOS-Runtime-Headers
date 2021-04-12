/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@class NSString;

@interface DistributedEvaluation.DESSecureAggregationSession : NSObject {

	 queue;
	 service;
	??? publicCommunicationKey;
	??? publicMaskingKey;
	??? verificationKey;
	??? signature;
	 configuration;
	 secretData;
	 clientsThatSubmittedData;
	 encryptedSharesFromPeers;
	 b_uData;
	 b_uSharesByIndex;
	 clientUuid;
	 clientIndex;
	 cohortThreshold;
	 cohort;
	 checkinTimer;

}

@property (copy,nonatomic) NSString * clientUuid; 
-(id)init;
-(id)initWithDatabase:(id)arg1 toService:(id)arg2 local:(BOOL)arg3 configuration:(id)arg4 ;
-(void)checkinWithCompletion:(/*^block*/id)arg1 ;
-(void)registerTaskWithTaskUuid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)clientUuid;
-(void)setClientUuid:(NSString *)arg1 ;
-(void)postTaskWithTaskUuid:(id)arg1 numTargetDevices:(unsigned)arg2 samplingRate:(float)arg3 cohortSize:(unsigned)arg4 secretSharingThreshold:(unsigned)arg5 completion:(/*^block*/id)arg6 ;
@end

