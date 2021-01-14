/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <Foundation/NSOperation.h>

@class NSOperation, NSMutableSet, HDClinicalIngestionTask, HDProfile, HDHealthRecordsProfileExtension, NSString, HDHealthRecordsXPCServiceClient;

@interface HDClinicalIngestionOperation : NSOperation {

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
-(HDClinicalIngestionTask *)task;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(NSString *)debugDescription;
-(void)main;
-(HDProfile *)profile;
-(NSOperation *)nextOperation;
-(id)initWithTask:(id)arg1 nextOperation:(id)arg2 ;
-(HDHealthRecordsXPCServiceClient *)healthRecordsServiceClient;
@end

