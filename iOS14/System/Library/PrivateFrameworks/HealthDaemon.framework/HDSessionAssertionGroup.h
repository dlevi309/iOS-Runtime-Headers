/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)transitionToState:(long long)arg1 ;
-(long long)state;
-(void)invalidate;
-(void)_transitionToNewAssertions:(id)arg1 ;
-(void)setupState:(long long)arg1 withAssertions:(id)arg2 ;
@end

