/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject {

	CHLogger* _logger;
	CHSynchronizable* _synchronizable;

}
-(void)execute:(/*^block*/id)arg1 ;
-(id)initWithName:(const char*)arg1 queue:(id)arg2 ;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1 ;
-(id)initWithName:(const char*)arg1 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(id)logHandle;
-(id)queue;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
@end

