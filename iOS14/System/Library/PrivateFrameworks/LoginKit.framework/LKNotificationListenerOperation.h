/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <Foundation/NSOperation.h>

@interface LKNotificationListenerOperation : NSOperation {

	BOOL _operationExecuting;
	BOOL _operationFinished;
	BOOL _operationCancelled;
	BOOL _operationReady;
	int _notifyToken;
	/*^block*/id _listenerStartedBlock;
	unsigned long long _notificationType;
	double _timeOutPeriod;
	/*^block*/id _notificationListenerCompletionBlock;

}

@property (assign,nonatomic) unsigned long long notificationType;               //@synthesize notificationType=_notificationType - In the implementation block
@property (assign,nonatomic) double timeOutPeriod;                              //@synthesize timeOutPeriod=_timeOutPeriod - In the implementation block
@property (nonatomic,copy) id notificationListenerCompletionBlock;              //@synthesize notificationListenerCompletionBlock=_notificationListenerCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL operationExecuting;                           //@synthesize operationExecuting=_operationExecuting - In the implementation block
@property (assign,nonatomic) BOOL operationFinished;                            //@synthesize operationFinished=_operationFinished - In the implementation block
@property (assign,nonatomic) BOOL operationCancelled;                           //@synthesize operationCancelled=_operationCancelled - In the implementation block
@property (assign,nonatomic) BOOL operationReady;                               //@synthesize operationReady=_operationReady - In the implementation block
@property (assign,nonatomic) int notifyToken;                                   //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,copy) id listenerStartedBlock;                             //@synthesize listenerStartedBlock=_listenerStartedBlock - In the implementation block
-(void)setNotifyToken:(int)arg1 ;
-(void)start;
-(void)setNotificationType:(unsigned long long)arg1 ;
-(BOOL)isFinished;
-(int)notifyToken;
-(BOOL)isExecuting;
-(unsigned long long)notificationType;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setOperationExecuting:(BOOL)arg1 ;
-(BOOL)operationExecuting;
-(void)_endOperation;
-(id)notificationListenerCompletionBlock;
-(double)timeOutPeriod;
-(id)_errorForNotificationType:(unsigned long long)arg1 ;
-(id)_notificationForNotificationType:(unsigned long long)arg1 ;
-(id)listenerStartedBlock;
-(void)setListenerStartedBlock:(id)arg1 ;
-(void)setOperationFinished:(BOOL)arg1 ;
-(id)initWithNotificationType:(unsigned long long)arg1 timeOutPeriod:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setOperationReady:(BOOL)arg1 ;
-(void)setOperationCancelled:(BOOL)arg1 ;
-(void)setTimeOutPeriod:(double)arg1 ;
-(void)setNotificationListenerCompletionBlock:(id)arg1 ;
-(BOOL)operationFinished;
-(BOOL)operationCancelled;
-(BOOL)operationReady;
@end

