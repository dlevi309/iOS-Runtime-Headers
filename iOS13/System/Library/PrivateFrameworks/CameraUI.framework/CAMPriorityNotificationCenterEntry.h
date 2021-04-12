/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(SEL)selector;
-(id)object;
-(id)observer;
-(void)setObject:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
@end

