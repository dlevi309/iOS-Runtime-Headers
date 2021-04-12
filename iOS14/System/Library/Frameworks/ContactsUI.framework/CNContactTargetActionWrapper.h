/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@interface CNContactTargetActionWrapper : NSObject {

	id _target;
	SEL _action;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                    //@synthesize action=_action - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)performActionWithSender:(id)arg1 ;
-(SEL)action;
-(id)description;
-(id)target;
@end

