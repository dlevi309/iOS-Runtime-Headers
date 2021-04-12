/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class NSString, TRIClient, TRITrackingId, NSDictionary;

@interface BMMiningTaskConfig : NSObject {

	BOOL _interactionExtractedTopicFromAttachmentFactorInUse;
	int _deploymentID;
	NSString* _trialID;
	TRIClient* _trialClient;
	TRITrackingId* _trialTrackingID;
	NSString* _treatmentID;
	NSString* _experimentID;
	NSDictionary* _bmMiningTaskConfig;

}

@property (nonatomic,retain) TRIClient * trialClient;                                              //@synthesize trialClient=_trialClient - In the implementation block
@property (nonatomic,retain) TRITrackingId * trialTrackingID;                                      //@synthesize trialTrackingID=_trialTrackingID - In the implementation block
@property (nonatomic,retain) NSString * treatmentID;                                               //@synthesize treatmentID=_treatmentID - In the implementation block
@property (nonatomic,retain) NSString * experimentID;                                              //@synthesize experimentID=_experimentID - In the implementation block
@property (assign,nonatomic) int deploymentID;                                                     //@synthesize deploymentID=_deploymentID - In the implementation block
@property (retain) NSDictionary * bmMiningTaskConfig;                                              //@synthesize bmMiningTaskConfig=_bmMiningTaskConfig - In the implementation block
@property (nonatomic,retain) NSString * trialID;                                                   //@synthesize trialID=_trialID - In the implementation block
@property (assign,nonatomic) BOOL interactionExtractedTopicFromAttachmentFactorInUse;              //@synthesize interactionExtractedTopicFromAttachmentFactorInUse=_interactionExtractedTopicFromAttachmentFactorInUse - In the implementation block
-(id)init;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(void)updateFactorLevels;
-(void)setExperimentID:(NSString *)arg1 ;
-(NSString *)trialID;
-(NSString *)treatmentID;
-(void)registerWithTrial;
-(void)setTrialID:(NSString *)arg1 ;
-(void)setTrialTrackingID:(TRITrackingId *)arg1 ;
-(TRITrackingId *)trialTrackingID;
-(int)deploymentID;
-(void)setDeploymentID:(int)arg1 ;
-(TRIClient *)trialClient;
-(NSString *)experimentID;
-(void)setTreatmentID:(NSString *)arg1 ;
-(void)loadDefaultConfig;
-(void)updateFactorLevelsFromFilePath:(id)arg1 ;
-(NSDictionary *)bmMiningTaskConfig;
-(BOOL)interactionExtractedTopicFromAttachmentFactorInUse;
-(void)setBmMiningTaskConfig:(NSDictionary *)arg1 ;
-(BOOL)loadBMMiningTaskConfig:(id)arg1 ;
-(void)setInteractionExtractedTopicFromAttachmentFactorInUse:(BOOL)arg1 ;
@end

