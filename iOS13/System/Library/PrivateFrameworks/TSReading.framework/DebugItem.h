/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSString;

@interface DebugItem : NSObject {

	NSString* _title;
	id _target;
	SEL _action;

}

@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id target;                     //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                    //@synthesize action=_action - In the implementation block
-(void)dealloc;
-(id)target;
-(NSString *)title;
-(SEL)action;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

