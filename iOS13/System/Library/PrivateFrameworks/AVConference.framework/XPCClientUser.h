/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(int)eventLogLevel;
-(void)setEventLogLevel:(int)arg1 ;
@end

