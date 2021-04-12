/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation : CKOperation {

	BOOL _moreComing;
	/*^block*/id _notificationChangedBlock;
	/*^block*/id _fetchNotificationChangesCompletionBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                            //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) id notificationChangedBlock;                                  //@synthesize notificationChangedBlock=_notificationChangedBlock - In the implementation block
@property (nonatomic,copy) id fetchNotificationChangesCompletionBlock;                   //@synthesize fetchNotificationChangesCompletionBlock=_fetchNotificationChangesCompletionBlock - In the implementation block
-(id)init;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)initWithPreviousServerChangeToken:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)notificationChangedBlock;
-(id)fetchNotificationChangesCompletionBlock;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(void)setFetchNotificationChangesCompletionBlock:(id)arg1 ;
-(void)setNotificationChangedBlock:(id)arg1 ;
@end

