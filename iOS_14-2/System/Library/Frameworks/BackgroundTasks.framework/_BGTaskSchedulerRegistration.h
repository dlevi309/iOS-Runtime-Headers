/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface _BGTaskSchedulerRegistration : NSObject {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _launchHandler;

}

@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id launchHandler;                                  //@synthesize launchHandler=_launchHandler - In the implementation block
-(void)setLaunchHandler:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 launchHandler:(/*^block*/id)arg3 ;
-(id)launchHandler;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

