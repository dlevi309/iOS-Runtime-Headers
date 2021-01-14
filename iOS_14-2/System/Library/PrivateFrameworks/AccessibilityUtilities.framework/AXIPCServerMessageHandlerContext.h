/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@interface AXIPCServerMessageHandlerContext : NSObject {

	BOOL _async;
	/*^block*/id _handler;
	id _target;
	SEL _selector;

}

@property (nonatomic,readonly) id handler;                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) BOOL async;                    //@synthesize async=_async - In the implementation block
-(SEL)selector;
-(BOOL)async;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)target;
-(id)handler;
@end

