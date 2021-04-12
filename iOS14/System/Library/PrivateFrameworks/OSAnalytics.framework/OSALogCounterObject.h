/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/


@class NSMutableDictionary;

@interface OSALogCounterObject : NSObject {

	unsigned long long _count;
	NSMutableDictionary* _signatures;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (readonly) NSMutableDictionary * signatures;              //@synthesize signatures=_signatures - In the implementation block
+(id)counter;
+(id)masterCounts;
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(NSMutableDictionary *)signatures;
@end

