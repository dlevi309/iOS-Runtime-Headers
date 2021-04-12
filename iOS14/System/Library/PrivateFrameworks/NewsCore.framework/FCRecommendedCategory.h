/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray;

@interface FCRecommendedCategory : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSArray* _topicTagIDs;
	NSArray* _channelTagIDs;
	NSArray* _subcategories;
	NSArray* _curatedTagIDs;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * topicTagIDs;                //@synthesize topicTagIDs=_topicTagIDs - In the implementation block
@property (nonatomic,readonly) NSArray * channelTagIDs;              //@synthesize channelTagIDs=_channelTagIDs - In the implementation block
@property (nonatomic,readonly) NSArray * subcategories;              //@synthesize subcategories=_subcategories - In the implementation block
@property (nonatomic,readonly) NSArray * curatedTagIDs;              //@synthesize curatedTagIDs=_curatedTagIDs - In the implementation block
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 curatedTagIDs:(id)arg3 recommendedTopicTagIDs:(id)arg4 recommendedChannelTagIDs:(id)arg5 subcategories:(id)arg6 ;
-(NSArray *)curatedTagIDs;
-(NSString *)name;
-(NSArray *)topicTagIDs;
-(id)description;
-(NSArray *)subcategories;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSArray *)channelTagIDs;
-(BOOL)isEqual:(id)arg1 ;
@end

