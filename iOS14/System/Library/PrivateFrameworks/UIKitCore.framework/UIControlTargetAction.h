/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIAction;

@interface UIControlTargetAction : NSObject {

	UIAction* _actionHandler;
	id _target;
	SEL _action;
	unsigned long long _eventMask;
	BOOL _cancelled;

}

@property (assign,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(id)description;
@end

