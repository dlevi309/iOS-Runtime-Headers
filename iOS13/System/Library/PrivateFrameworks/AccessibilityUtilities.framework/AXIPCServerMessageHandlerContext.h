/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)handler;
-(id)target;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 ;
-(BOOL)async;
@end

