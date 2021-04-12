/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKFetchNotificationChangesOperationCallbacks.h>

@class CKServerChangeToken, CKFetchNotificationChangesOperationInfo;

@interface CKFetchNotificationChangesOperation : CKOperation <CKFetchNotificationChangesOperationCallbacks> {

	BOOL _moreComing;
	/*^block*/id _notificationChangedBlock;
	/*^block*/id _fetchNotificationChangesCompletionBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;                                                //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                                                              //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,readonly) id<CKFetchNotificationChangesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchNotificationChangesOperationInfo * operationInfo; 
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;                                                //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                                              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) id notificationChangedBlock;                                                                    //@synthesize notificationChangedBlock=_notificationChangedBlock - In the implementation block
@property (nonatomic,copy) id fetchNotificationChangesCompletionBlock;                                                     //@synthesize fetchNotificationChangesCompletionBlock=_fetchNotificationChangesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(BOOL)moreComing;
-(void)performCKOperation;
-(void)setMoreComing:(BOOL)arg1 ;
-(id)init;
-(id)notificationChangedBlock;
-(id)fetchNotificationChangesCompletionBlock;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(void)setFetchNotificationChangesCompletionBlock:(id)arg1 ;
-(void)setNotificationChangedBlock:(id)arg1 ;
-(void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 moreComing:(BOOL)arg2 metrics:(id)arg3 error:(id)arg4 ;
-(void)handleChangedNotification:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)initWithPreviousServerChangeToken:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
@end

