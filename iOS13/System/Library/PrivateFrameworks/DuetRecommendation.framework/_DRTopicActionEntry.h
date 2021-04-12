/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)action;
-(NSString *)topic;
-(NSDate *)when;
-(id)initWithTopic:(id)arg1 when:(id)arg2 action:(unsigned long long)arg3 ;
@end

