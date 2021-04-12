/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NTPBArticleTopic;

@interface FCTopicTranslation : NSObject {

	BOOL _isHidden;
	BOOL _isEligibleForGrouping;
	BOOL _isEligibleForGroupingIfFavorited;
	NSString* _tagID;
	NTPBArticleTopic* _articleTopic;

}

@property (nonatomic,retain) NTPBArticleTopic * articleTopic;                    //@synthesize articleTopic=_articleTopic - In the implementation block
@property (nonatomic,retain) NSString * tagID;                                   //@synthesize tagID=_tagID - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                                      //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL isEligibleForGrouping;                         //@synthesize isEligibleForGrouping=_isEligibleForGrouping - In the implementation block
@property (assign,nonatomic) BOOL isEligibleForGroupingIfFavorited;              //@synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited - In the implementation block
-(NSString *)tagID;
-(BOOL)isHidden;
-(id)init;
-(BOOL)isEligibleForGrouping;
-(id)description;
-(id)initWithTagID:(id)arg1 ;
-(void)setIsEligibleForGroupingIfFavorited:(BOOL)arg1 ;
-(BOOL)isEligibleForGroupingIfFavorited;
-(NTPBArticleTopic *)articleTopic;
-(void)setIsEligibleForGrouping:(BOOL)arg1 ;
-(id)initWithLanguageBucket:(id)arg1 ;
-(void)setArticleTopic:(NTPBArticleTopic *)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
@end

