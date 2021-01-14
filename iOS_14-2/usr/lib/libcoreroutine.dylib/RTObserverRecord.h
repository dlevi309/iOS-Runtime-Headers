/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTObserverRecord : NSObject {

	id _observer;
	SEL _selector;

}

@property (assign,nonatomic,__weak) id observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;                    //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(void)setSelector:(SEL)arg1 ;
-(id)initWithObserver:(id)arg1 selector:(SEL)arg2 ;
@end

