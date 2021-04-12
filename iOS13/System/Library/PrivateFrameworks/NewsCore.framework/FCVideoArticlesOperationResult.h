/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSString, FCColor, FCColorGradient, NTPBDiscoverMoreVideosInfo;

@interface FCVideoArticlesOperationResult : NSObject {

	NSArray* _headlines;
	NSString* _channelID;
	NSString* _titleText;
	FCColor* _titleColor;
	FCColor* _darkStyleTitleColor;
	NSString* _subtitleText;
	FCColorGradient* _backgroundColorGradient;
	FCColorGradient* _darkStyleBackgroundColorGradient;
	NTPBDiscoverMoreVideosInfo* _discoverMoreVideosInfo;
	NSString* _mutingChannelID;

}

@property (nonatomic,readonly) NSArray * headlines;                                                   //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                                             //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                                             //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) FCColor * titleColor;                                             //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy,readonly) FCColor * darkStyleTitleColor;                                    //@synthesize darkStyleTitleColor=_darkStyleTitleColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleText;                                          //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy,readonly) FCColorGradient * backgroundColorGradient;                        //@synthesize backgroundColorGradient=_backgroundColorGradient - In the implementation block
@property (nonatomic,copy,readonly) FCColorGradient * darkStyleBackgroundColorGradient;               //@synthesize darkStyleBackgroundColorGradient=_darkStyleBackgroundColorGradient - In the implementation block
@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo;              //@synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * mutingChannelID;                                       //@synthesize mutingChannelID=_mutingChannelID - In the implementation block
-(FCColor *)titleColor;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(NSString *)channelID;
-(FCColor *)darkStyleTitleColor;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(NSArray *)headlines;
-(NSString *)mutingChannelID;
-(FCColorGradient *)backgroundColorGradient;
-(FCColorGradient *)darkStyleBackgroundColorGradient;
-(id)initWithVideoGroupConfig:(id)arg1 headlines:(id)arg2 ;
@end

