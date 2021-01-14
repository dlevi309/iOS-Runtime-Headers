/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCFeedItemFeature : NSObject <NSCopying> {

	BOOL _queryable;
	NSString* _key;
	long long _type;

}

@property (nonatomic,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL queryable;                    //@synthesize queryable=_queryable - In the implementation block
@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * topicID; 
+(id)featureForAllArticles;
+(id)featureForTopicID:(id)arg1 ;
-(BOOL)queryable;
-(void)setQueryable:(BOOL)arg1 ;
-(NSString *)topicID;
-(id)initWithType:(long long)arg1 key:(id)arg2 ;
-(NSString *)key;
-(long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

