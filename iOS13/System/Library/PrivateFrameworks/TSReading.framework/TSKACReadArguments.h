/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@interface TSKACReadArguments : NSObject {

	SEL _selector;
	id _target;
	void* _argument;
	id _argument2;

}

@property (nonatomic,readonly) SEL selector;                //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) id target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) void* argument;              //@synthesize argument=_argument - In the implementation block
@property (nonatomic,readonly) id argument2;                //@synthesize argument2=_argument2 - In the implementation block
-(void)dealloc;
-(SEL)selector;
-(id)target;
-(void*)argument;
-(id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void*)arg3 ;
-(id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void*)arg3 argument2:(id)arg4 ;
-(id)argument2;
@end

