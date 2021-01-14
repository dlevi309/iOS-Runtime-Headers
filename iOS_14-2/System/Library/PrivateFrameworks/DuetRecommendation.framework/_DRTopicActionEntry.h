/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
*/


@class NSString, NSDate;

@interface _DRTopicActionEntry : NSObject {

	NSString* _topic;
	NSDate* _when;
	unsigned long long _action;

}

@property (retain,readonly) NSString * topic;                //@synthesize topic=_topic - In the implementation block
@property (retain,readonly) NSDate * when;                   //@synthesize when=_when - In the implementation block
@property (readonly) unsigned long long action;              //@synthesize action=_action - In the implementation block
-(NSString *)topic;
-(unsigned long long)action;
-(id)description;
-(NSDate *)when;
-(id)initWithTopic:(id)arg1 when:(id)arg2 action:(unsigned long long)arg3 ;
@end

