/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCHeadlineProviding, FCCardStyleProviding;
@class NSString, FCColor, NSDate;

@interface FCSpotlightOperationResult : NSObject {

	id<FCHeadlineProviding> _headline;
	NSString* _channelID;
	NSString* _eyebrowTitle;
	NSString* _titleText;
	NSString* _subTitleText;
	NSString* _ctaText;
	FCColor* _titleColor;
	NSDate* _publishDate;
	id<FCCardStyleProviding> _spotlightItemStyle;
	id<FCCardStyleProviding> _spotlightItemDarkStyle;

}

@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                                  //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                                         //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eyebrowTitle;                                      //@synthesize eyebrowTitle=_eyebrowTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                                         //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * subTitleText;                                      //@synthesize subTitleText=_subTitleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaText;                                           //@synthesize ctaText=_ctaText - In the implementation block
@property (nonatomic,copy,readonly) FCColor * titleColor;                                         //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publishDate;                                         //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> spotlightItemStyle;                  //@synthesize spotlightItemStyle=_spotlightItemStyle - In the implementation block
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> spotlightItemDarkStyle;              //@synthesize spotlightItemDarkStyle=_spotlightItemDarkStyle - In the implementation block
-(NSString *)ctaText;
-(id<FCCardStyleProviding>)spotlightItemDarkStyle;
-(FCColor *)titleColor;
-(id<FCHeadlineProviding>)headline;
-(NSString *)subTitleText;
-(NSString *)titleText;
-(NSString *)channelID;
-(NSString *)eyebrowTitle;
-(id)initWithSpotlightGroupConfig:(id)arg1 headline:(id)arg2 ;
-(id<FCCardStyleProviding>)spotlightItemStyle;
-(NSDate *)publishDate;
@end

