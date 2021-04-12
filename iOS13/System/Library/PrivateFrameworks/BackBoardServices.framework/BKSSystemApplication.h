/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BKSSystemApplicationClientDelegate.h>

@protocol OS_dispatch_queue, BKSSystemApplicationDelegate;
@class NSObject, BKSSystemApplicationClient, NSString;

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BKSSystemApplicationClient* _client;
	id<BKSSystemApplicationDelegate> _delegate;
	BOOL _waitForDataMigration;
	double _systemIdleSleepInterval;

}

@property (assign,nonatomic,__weak) id<BKSSystemApplicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL waitForDataMigration;                                     //@synthesize waitForDataMigration=_waitForDataMigration - In the implementation block
@property (assign,nonatomic) double systemIdleSleepInterval;                                //@synthesize systemIdleSleepInterval=_systemIdleSleepInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<BKSSystemApplicationDelegate>)delegate;
-(void)setDelegate:(id<BKSSystemApplicationDelegate>)arg1 ;
-(void)start;
-(id)initWithQueue:(id)arg1 ;
-(void)sendActions:(id)arg1 ;
-(BOOL)clientIsAliveForWatchdog:(id)arg1 ;
-(void)setSystemIdleSleepInterval:(double)arg1 ;
-(void)bootstrap;
-(void)finishBooting;
-(BOOL)waitForDataMigration;
-(void)setWaitForDataMigration:(BOOL)arg1 ;
-(double)systemIdleSleepInterval;
@end

