/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DataAccess/DATaskManager.h>
#import <libobjc.A.dylib/ASPolicyManagerDelegate.h>

@class ASPolicyManager, NSString, NSError, NSMutableDictionary, ASTask, ASGetOptionsTask, ASProtocol;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate> {

	ASPolicyManager* _policyManager;
	NSString* _easProtocolVersion;
	NSError* _versionError;
	NSMutableDictionary* _taskIDToTask;
	ASTask* _modalGetOptionsTask;
	ASGetOptionsTask* _getOptionsTask;
	ASTask* _modalPolicyKeyUpdateTask;

}

@property (nonatomic,retain) ASPolicyManager * policyManager;                       //@synthesize policyManager=_policyManager - In the implementation block
@property (nonatomic,retain) NSError * versionError;                                //@synthesize versionError=_versionError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * taskIDToTask;                    //@synthesize taskIDToTask=_taskIDToTask - In the implementation block
@property (assign,nonatomic,__weak) ASTask * modalGetOptionsTask;                   //@synthesize modalGetOptionsTask=_modalGetOptionsTask - In the implementation block
@property (nonatomic,retain) ASGetOptionsTask * getOptionsTask;                     //@synthesize getOptionsTask=_getOptionsTask - In the implementation block
@property (assign,nonatomic,__weak) ASTask * modalPolicyKeyUpdateTask;              //@synthesize modalPolicyKeyUpdateTask=_modalPolicyKeyUpdateTask - In the implementation block
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * policyKey; 
@property (nonatomic,readonly) ASProtocol * protocol; 
@property (nonatomic,retain) NSString * easProtocolVersion;                         //@synthesize easProtocolVersion=_easProtocolVersion - In the implementation block
-(void)dealloc;
-(ASProtocol *)protocol;
-(id)_version;
-(NSString *)deviceID;
-(void)cancelAllTasks;
-(void)shutdown;
-(void)cancelTaskWithID:(int)arg1 ;
-(id)stateString;
-(BOOL)shouldCancelTaskDueToOnPowerFetchMode;
-(void)_populateVersionDescriptions;
-(void)taskManagerDidAddTask:(id)arg1 ;
-(void)cancelTask:(id)arg1 ;
-(void)taskManagerWillRemoveTask:(id)arg1 ;
-(BOOL)_hasTasksIndicatingARunningSync;
-(void)taskDidFinish:(id)arg1 ;
-(void)taskRequestModal:(id)arg1 ;
-(void)taskEndModal:(id)arg1 ;
-(BOOL)taskIsModal:(id)arg1 ;
-(ASPolicyManager *)policyManager;
-(NSString *)policyKey;
-(NSString *)easProtocolVersion;
-(id)initWithAccount:(id)arg1 policyManager:(id)arg2 ;
-(void)getOptionsTask:(id)arg1 completedWithStatus:(long long)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5 ;
-(void)policyManagerUpdatedPolicy:(id)arg1 ;
-(void)policyManagerFailedToUpdatePolicy:(id)arg1 ;
-(void)requestEASVersionWithDelegateTask:(id)arg1 ;
-(void)updatePolicyKeyWithDelegateTask:(id)arg1 ;
-(void)setPolicyManager:(ASPolicyManager *)arg1 ;
-(void)setTaskIDToTask:(NSMutableDictionary *)arg1 ;
-(void)setModalGetOptionsTask:(ASTask *)arg1 ;
-(void)setGetOptionsTask:(ASGetOptionsTask *)arg1 ;
-(void)setModalPolicyKeyUpdateTask:(ASTask *)arg1 ;
-(ASTask *)modalGetOptionsTask;
-(ASGetOptionsTask *)getOptionsTask;
-(void)setVersionError:(NSError *)arg1 ;
-(void)setEASProtocolVersion:(id)arg1 ;
-(ASTask *)modalPolicyKeyUpdateTask;
-(void)_finishAllTasksWithError:(id)arg1 ;
-(void)finishTask:(id)arg1 withError:(id)arg2 ;
-(NSMutableDictionary *)taskIDToTask;
-(void)setEasProtocolVersion:(NSString *)arg1 ;
-(NSError *)versionError;
@end

