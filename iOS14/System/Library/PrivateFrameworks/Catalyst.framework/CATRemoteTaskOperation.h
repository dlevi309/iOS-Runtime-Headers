/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATTaskOperation.h>

@class NSError, CATTaskClient, NSNumber;

@interface CATRemoteTaskOperation : CATTaskOperation {

	NSError* mClientError;
	CATTaskClient* _client;
	NSNumber* _remotePhase;

}

@property (nonatomic,copy) NSNumber * remotePhase;                  //@synthesize remotePhase=_remotePhase - In the implementation block
@property (nonatomic,readonly) CATTaskClient * client;              //@synthesize client=_client - In the implementation block
+(BOOL)isCancelable;
+(id)invalidRemoteTaskWithRequest:(id)arg1 error:(id)arg2 ;
-(void)processMessage:(id)arg1 ;
-(void)cancelOperationIfNeeded;
-(CATTaskClient *)client;
-(void)setRemotePhase:(NSNumber *)arg1 ;
-(BOOL)isAsynchronous;
-(void)processNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)fetchProgress;
-(void)main;
-(id)initWithRequest:(id)arg1 client:(id)arg2 ;
-(NSNumber *)remotePhase;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)updateCompletedUnitCount:(long long)arg1 andTotalUnitCount:(long long)arg2 ;
-(void)operationWillFinish;
-(void)cancel;
-(void)clientFailedWithError:(id)arg1 ;
-(id)initWithRequest:(id)arg1 clientError:(id)arg2 ;
-(void)updateProgressWithRemoteProgress:(id)arg1 ;
@end

