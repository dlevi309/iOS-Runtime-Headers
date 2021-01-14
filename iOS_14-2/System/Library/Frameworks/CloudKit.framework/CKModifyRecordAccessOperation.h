/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKModifyRecordAccessOperationCallbacks.h>

@class NSArray, NSMutableDictionary, NSMutableArray, CKModifyRecordAccessOperationInfo;

@interface CKModifyRecordAccessOperation : CKDatabaseOperation <CKModifyRecordAccessOperationCallbacks> {

	/*^block*/id _recordAccessGrantedBlock;
	/*^block*/id _recordAccessRevokedBlock;
	/*^block*/id _recordAccessCompletionBlock;
	NSArray* _recordIDsToGrant;
	NSArray* _recordIDsToRevoke;
	NSMutableDictionary* _recordErrors;
	NSMutableArray* _grantedRecordIDs;
	NSMutableArray* _revokedRecordIDs;

}

@property (nonatomic,readonly) id<CKModifyRecordAccessOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKModifyRecordAccessOperationInfo * operationInfo; 
@property (nonatomic,retain) NSArray * recordIDsToGrant;                                                             //@synthesize recordIDsToGrant=_recordIDsToGrant - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToRevoke;                                                            //@synthesize recordIDsToRevoke=_recordIDsToRevoke - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                                     //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * grantedRecordIDs;                                                      //@synthesize grantedRecordIDs=_grantedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * revokedRecordIDs;                                                      //@synthesize revokedRecordIDs=_revokedRecordIDs - In the implementation block
@property (nonatomic,copy) id recordAccessGrantedBlock;                                                              //@synthesize recordAccessGrantedBlock=_recordAccessGrantedBlock - In the implementation block
@property (nonatomic,copy) id recordAccessRevokedBlock;                                                              //@synthesize recordAccessRevokedBlock=_recordAccessRevokedBlock - In the implementation block
@property (nonatomic,copy) id recordAccessCompletionBlock;                                                           //@synthesize recordAccessCompletionBlock=_recordAccessCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSArray *)recordIDsToGrant;
-(void)setRecordIDsToGrant:(NSArray *)arg1 ;
-(NSArray *)recordIDsToRevoke;
-(void)setRecordIDsToRevoke:(NSArray *)arg1 ;
-(id)recordAccessGrantedBlock;
-(id)recordAccessRevokedBlock;
-(id)recordAccessCompletionBlock;
-(NSMutableArray *)grantedRecordIDs;
-(NSMutableArray *)revokedRecordIDs;
-(void)setRecordAccessCompletionBlock:(id)arg1 ;
-(void)setRecordAccessGrantedBlock:(id)arg1 ;
-(void)setRecordAccessRevokedBlock:(id)arg1 ;
-(void)handleRecordAccessInitiationForRecordID:(id)arg1 accessToken:(id)arg2 referenceIdentifier:(id)arg3 error:(id)arg4 ;
-(void)handleRecordAccessRevocationForRecordID:(id)arg1 error:(id)arg2 ;
-(void)setRevokedRecordIDs:(NSMutableArray *)arg1 ;
-(id)initWithRecordIDsToGrantAccess:(id)arg1 recordIDsToRevokeAccess:(id)arg2 ;
-(void)setGrantedRecordIDs:(NSMutableArray *)arg1 ;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
@end

