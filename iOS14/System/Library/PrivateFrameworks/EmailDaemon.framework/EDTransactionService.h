/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)initWithServiceName:(id)arg1 ;
-(void)endTransaction:(id)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)serviceName;
-(BOOL)hasPendingTransactions;
-(void)setServiceName:(NSString *)arg1 ;
-(id)startTransaction;
-(void)resetPendingTransactions;
@end

