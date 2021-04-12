/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCHIDEventSource.h>

@class NSDictionary, NSString;

@interface _GCHIDEventSubject : NSObject <_GCHIDEventSource> {

	os_unfair_lock_s _lock;
	NSDictionary* _handlersByService;
	AB _stopped;

}

@property (getter=isStopped) BOOL stopped; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isStopped;
-(void)setStopped:(BOOL)arg1 ;
-(id)observeHIDEvents:(/*^block*/id)arg1 forService:(id)arg2 ;
-(id)observeHIDEvents:(/*^block*/id)arg1 ;
-(void)publishHIDEvent:(IOHIDEventRef)arg1 ;
@end

