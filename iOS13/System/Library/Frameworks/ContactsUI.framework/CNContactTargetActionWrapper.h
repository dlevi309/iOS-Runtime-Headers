/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@interface CNContactTargetActionWrapper : NSObject {

	id _target;
	SEL _action;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                    //@synthesize action=_action - In the implementation block
-(id)description;
-(id)target;
-(SEL)action;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)performActionWithSender:(id)arg1 ;
@end

