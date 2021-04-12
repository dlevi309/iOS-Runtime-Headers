/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


#import <Pegasus/Pegasus-Structs.h>
@interface PGRunLoopObserver : NSObject {

	/*^block*/id _actions;
	CFRunLoopObserverRef _runLoopObserver;

}

@property (assign,nonatomic) CFRunLoopObserverRef runLoopObserver;              //@synthesize runLoopObserver=_runLoopObserver - In the implementation block
@property (nonatomic,copy) id actions;                                          //@synthesize actions=_actions - In the implementation block
-(void)setActions:(id)arg1 ;
-(id)actions;
-(CFRunLoopObserverRef)runLoopObserver;
-(void)dealloc;
-(void)setRunLoopObserver:(CFRunLoopObserverRef)arg1 ;
@end

