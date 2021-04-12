/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)port;
-(int)threadPriority;
-(void)setThreadPriority:(int)arg1 ;
-(void*)_start;
-(void)setThreadName:(NSString *)arg1 ;
-(unsigned)_createPortNamed:(id)arg1 ;
-(void)_installAutoreleasePoolsIfNecessaryForMode:(CFStringRef)arg1 ;
-(id)initWithPortName:(id)arg1 subsystem:(mig_subsystem*)arg2 separateThread:(BOOL)arg3 ;
-(NSString *)threadName;
@end

