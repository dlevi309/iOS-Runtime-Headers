/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableSet, NSMutableDictionary;

@interface HDSessionAssertionGroup : NSObject {

	NSMutableSet* _allAssertions;
	NSMutableDictionary* _assertionsForState;
	long long _state;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
-(id)init;
-(void)invalidate;
-(long long)state;
-(void)transitionToState:(long long)arg1 ;
-(void)_transitionToNewAssertions:(id)arg1 ;
-(void)setupState:(long long)arg1 withAssertions:(id)arg2 ;
@end

