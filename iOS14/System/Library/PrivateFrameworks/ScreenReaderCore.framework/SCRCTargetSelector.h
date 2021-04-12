/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

