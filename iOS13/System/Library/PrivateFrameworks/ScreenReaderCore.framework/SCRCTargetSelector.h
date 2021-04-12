/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@interface SCRCTargetSelector : NSObject {

	id _target;
	SEL _selector;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
+(id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(SEL)selector;
-(id)target;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end

