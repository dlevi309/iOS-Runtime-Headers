/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


#import <BaseBoard/BaseBoard-Structs.h>
@class NSString;

@interface BSMIGServer : NSObject {

	NSString* _portName;
	unsigned _port;
	opaque_pthread_t* _thread;
	mig_subsystem* _subsystem;
	CFRunLoopObserverRef _entryObserver;
	CFRunLoopObserverRef _exitObserver;

}

@property (assign,nonatomic) int threadPriority; 
@property (nonatomic,copy,readonly) NSString * threadName; 
-(id)init;
-(id)initWithPortName:(id)arg1 subsystem:(mig_subsystem*)arg2 separateThread:(BOOL)arg3 ;
-(int)threadPriority;
-(void)setThreadPriority:(int)arg1 ;
-(NSString *)threadName;
@end

