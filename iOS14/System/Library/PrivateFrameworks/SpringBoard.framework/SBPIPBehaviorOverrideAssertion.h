/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSSimpleAssertion.h>

@class NSString;

@interface SBPIPBehaviorOverrideAssertion : BSSimpleAssertion {

	NSString* _cameraSensorAttributionBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * cameraSensorAttributionBundleIdentifier;              //@synthesize cameraSensorAttributionBundleIdentifier=_cameraSensorAttributionBundleIdentifier - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithReason:(long long)arg1 identifier:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(NSString *)cameraSensorAttributionBundleIdentifier;
-(id)initWithReason:(long long)arg1 invalidationBlock:(/*^block*/id)arg2 ;
-(id)initWithReason:(long long)arg1 identifier:(id)arg2 cameraSensorAttributionBundleIdentifier:(id)arg3 invalidationBlock:(/*^block*/id)arg4 ;
-(long long)behaviorOverrideReason;
@end

