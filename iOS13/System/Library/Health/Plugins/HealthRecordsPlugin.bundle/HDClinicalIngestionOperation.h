/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDOperation.h>

@class NSOperation, NSMutableSet, HDClinicalIngestionTask, HDProfile, HDHealthRecordsProfileExtension, NSString, HDHealthRecordsXPCServiceClient;

@interface HDClinicalIngestionOperation : HDOperation {

	NSOperation* _nextOperation;
	NSMutableSet* _cancellingDependencies;
	NSMutableSet* _groupCancellingDependencies;
	HDClinicalIngestionTask* _task;
	HDProfile* _profile;
	HDHealthRecordsProfileExtension* _profileExtension;

}

@property (readonly) HDClinicalIngestionTask * task;                                                      //@synthesize task=_task - In the implementation block
@property (readonly) NSOperation * nextOperation; 
@property (readonly) HDProfile * profile;                                                                 //@synthesize profile=_profile - In the implementation block
@property (readonly) HDHealthRecordsProfileExtension * profileExtension;                                  //@synthesize profileExtension=_profileExtension - In the implementation block
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HDHealthRecordsXPCServiceClient * healthRecordsServiceClient; 
-(NSString *)debugDescription;
-(void)main;
-(HDProfile *)profile;
-(HDClinicalIngestionTask *)task;
-(NSOperation *)nextOperation;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(id)initWithTask:(id)arg1 nextOperation:(id)arg2 ;
-(HDHealthRecordsXPCServiceClient *)healthRecordsServiceClient;
@end

