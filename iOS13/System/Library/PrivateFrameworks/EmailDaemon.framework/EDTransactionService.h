/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface EDTransactionService : NSObject {

	NSString* _serviceName;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSString * serviceName;                                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)endTransaction:(id)arg1 ;
-(id)startTransaction;
-(BOOL)hasPendingTransactions;
-(void)resetPendingTransactions;
@end

