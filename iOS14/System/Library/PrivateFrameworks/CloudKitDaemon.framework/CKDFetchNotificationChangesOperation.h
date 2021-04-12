/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;

@interface CKDFetchNotificationChangesOperation : CKDOperation {

	BOOL _moreComing;
	BOOL _wantsChanges;
	/*^block*/id _notificationChangedBlock;
	CKServerChangeToken* _resultServerChangeToken;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;

}

@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;                                            //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsChanges;                                                                          //@synthesize wantsChanges=_wantsChanges - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;                                              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                                                            //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,retain) id<CKFetchNotificationChangesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id notificationChangedBlock;                                                                  //@synthesize notificationChangedBlock=_notificationChangedBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)wantsChanges;
-(id)notificationChangedBlock;
-(void)setWantsChanges:(BOOL)arg1 ;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(void)setNotificationChangedBlock:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)main;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
-(void)_handleFetchChangesRequestFinished:(id)arg1 ;
@end

