/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@class SAUIDelayedActionCommand, BKSProcessAssertion;

@interface _AFUIAssertingDelayedActionCommand : NSObject {

	SAUIDelayedActionCommand* _command;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,readonly) SAUIDelayedActionCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BKSProcessAssertion * assertion;                 //@synthesize assertion=_assertion - In the implementation block
-(BKSProcessAssertion *)assertion;
-(SAUIDelayedActionCommand *)command;
-(id)initWithCommand:(id)arg1 assertion:(id)arg2 ;
@end

