/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, PSTopic;

@interface PSSubscription : HMFObject {

	NSSet* _filters;
	NSSet* _conditionals;
	PSTopic* _topic;

}

@property (__weak,readonly) PSTopic * topic;                 //@synthesize topic=_topic - In the implementation block
@property (copy,readonly) NSSet * filters;                   //@synthesize filters=_filters - In the implementation block
@property (copy,readonly) NSSet * conditionals;              //@synthesize conditionals=_conditionals - In the implementation block
-(void)unsubscribe;
-(PSTopic *)topic;
-(NSSet *)filters;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)conditionals;
-(id)initWithTopic:(id)arg1 filters:(id)arg2 conditionals:(id)arg3 ;
@end

