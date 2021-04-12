/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNTimeProvider, CNTaskTimeProfileLogging;
@class CNTask;

@interface _CNTimeProfilingTask : CNTask {

	CNTask* _task;
	id<CNTimeProvider> _timeProvider;
	id<CNTaskTimeProfileLogging> _logger;

}

@property (readonly) CNTask * task;                                    //@synthesize task=_task - In the implementation block
@property (readonly) id<CNTimeProvider> timeProvider;                  //@synthesize timeProvider=_timeProvider - In the implementation block
@property (readonly) id<CNTaskTimeProfileLogging> logger;              //@synthesize logger=_logger - In the implementation block
-(id)run;
-(CNTask *)task;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(id<CNTaskTimeProfileLogging>)logger;
-(id)initWithTask:(id)arg1 timeProvider:(id)arg2 os_log:(id)arg3 ;
-(id)initWithTask:(id)arg1 timeProvider:(id)arg2 logger:(id)arg3 ;
-(id<CNTimeProvider>)timeProvider;
@end

