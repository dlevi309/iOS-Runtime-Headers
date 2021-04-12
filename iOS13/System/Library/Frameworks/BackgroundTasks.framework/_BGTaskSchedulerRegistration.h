/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)launchHandler;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 launchHandler:(/*^block*/id)arg3 ;
-(void)setLaunchHandler:(id)arg1 ;
@end

