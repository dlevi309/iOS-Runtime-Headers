/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTObserverRecord : NSObject {

	id _observer;
	SEL _selector;

}

@property (assign,nonatomic,__weak) id observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;                    //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(id)observer;
-(void)setSelector:(SEL)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 selector:(SEL)arg2 ;
@end

