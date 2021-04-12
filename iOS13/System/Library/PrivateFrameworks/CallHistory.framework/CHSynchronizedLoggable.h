/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject {

	CHLogger* _logger;
	CHSynchronizable* _synchronizable;

}
-(id)queue;
-(id)initWithName:(const char*)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(id)logHandle;
-(id)initWithName:(const char*)arg1 queue:(id)arg2 ;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1 ;
@end

