/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(BOOL)isHidden;
-(void)setIsHidden:(BOOL)arg1 ;
-(NSString *)tagID;
-(id)initWithTagID:(id)arg1 ;
-(BOOL)isEligibleForGrouping;
-(void)setIsEligibleForGrouping:(BOOL)arg1 ;
-(BOOL)isEligibleForGroupingIfFavorited;
-(void)setIsEligibleForGroupingIfFavorited:(BOOL)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(id)initWithLanguageBucket:(id)arg1 ;
-(NTPBArticleTopic *)articleTopic;
-(void)setArticleTopic:(NTPBArticleTopic *)arg1 ;
@end

