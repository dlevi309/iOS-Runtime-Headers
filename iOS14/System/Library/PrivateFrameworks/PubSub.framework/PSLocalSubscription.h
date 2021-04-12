/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

#import <PubSub/PSSubscription.h>

@protocol PSEventInvocation;
@interface PSLocalSubscription : PSSubscription {

	id<PSEventInvocation> _invocation;

}
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)invokeWithEvent:(id)arg1 forTopicWithName:(id)arg2 ;
-(id)initWithTopic:(id)arg1 filters:(id)arg2 conditionals:(id)arg3 invocation:(id)arg4 ;
@end

