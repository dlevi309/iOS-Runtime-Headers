/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface XPCClientUser : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;
	int _eventLogLevel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
@property (assign,nonatomic) int eventLogLevel;                               //@synthesize eventLogLevel=_eventLogLevel - In the implementation block
-(id)block;
-(id)init;
-(void)setBlock:(id)arg1 ;
-(void)setEventLogLevel:(int)arg1 ;
-(int)eventLogLevel;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

