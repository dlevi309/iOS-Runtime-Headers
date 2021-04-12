/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@interface HULockIconStateTransition : NSObject {

	unsigned long long _fromState;
	unsigned long long _toState;

}

@property (nonatomic,readonly) unsigned long long fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,readonly) unsigned long long toState;                //@synthesize toState=_toState - In the implementation block
+(id)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(unsigned long long)fromState;
-(unsigned long long)toState;
@end

