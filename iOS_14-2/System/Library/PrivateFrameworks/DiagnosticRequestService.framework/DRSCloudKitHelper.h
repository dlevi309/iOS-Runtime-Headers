/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/


@class CKContainer;

@interface DRSCloudKitHelper : NSObject {

	CKContainer* __targetContainer;

}

@property (nonatomic,retain) CKContainer * _targetContainer;              //@synthesize _targetContainer=__targetContainer - In the implementation block
+(id)_sandboxContainer;
+(id)_productionContainerName;
+(id)_prodContainer;
+(id)sandboxContainerHelper;
+(id)prodContainerHelper;
-(id)initWithContainer:(id)arg1 ;
-(CKContainer *)_targetContainer;
-(void)_configureOperation:(id)arg1 xpcActivity:(id)arg2 ;
-(id)_requestsPassingUploadSizeCap:(id)arg1 remainingQuota:(unsigned long long)arg2 ;
-(void)_uploadRecords:(id)arg1 xpcActivity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)shouldUploadRequests:(id)arg1 xpcActivity:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)_sendDecisionServerRequests:(id)arg1 xpcActivity:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)uploadRequests:(id)arg1 contactDecisionServer:(BOOL)arg2 xpcActivity:(id)arg3 remainingUploadQuota:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)shouldEnableDataGathering:(id)arg1 xpcActivity:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)reportTerminalRequestStats:(id)arg1 xpcActivity:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)set_targetContainer:(CKContainer *)arg1 ;
@end

