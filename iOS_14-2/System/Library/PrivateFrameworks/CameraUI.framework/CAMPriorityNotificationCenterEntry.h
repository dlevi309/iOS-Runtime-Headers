/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMPriorityNotificationCenterEntry : NSObject {

	id _observer;
	SEL _selector;
	id _object;

}

@property (assign,nonatomic,__weak) id observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;                    //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) id object;                       //@synthesize object=_object - In the implementation block
-(SEL)selector;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(void)setSelector:(SEL)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)description;
-(id)initWithObserver:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
@end

