/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)featureForTopicID:(id)arg1 ;
+(id)featureForAllArticles;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(long long)type;
-(NSString *)topicID;
-(BOOL)queryable;
-(id)initWithType:(long long)arg1 key:(id)arg2 ;
-(void)setQueryable:(BOOL)arg1 ;
@end

