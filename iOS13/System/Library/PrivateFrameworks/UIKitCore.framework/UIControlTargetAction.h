/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface UIControlTargetAction : NSObject {

	id _target;
	SEL _action;
	unsigned long long _eventMask;
	BOOL _cancelled;

}

@property (assign,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)description;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
@end

