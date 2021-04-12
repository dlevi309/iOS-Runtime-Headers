/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString, FCColor, FCColorGradient, NTPBDiscoverMoreVideosInfo, NSArray, NSDate, FCFeedEdition;


@protocol FCFeedGroupOutlining <NSObject,FCFeedElement>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) long long groupType; 
@property (nonatomic,copy,readonly) NSString * eyebrowText; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * ctaText; 
@property (nonatomic,copy,readonly) FCColor * titleColor; 
@property (nonatomic,copy,readonly) FCColor * darkStyleTitleColor; 
@property (nonatomic,copy,readonly) FCColorGradient * backgroundGradient; 
@property (nonatomic,copy,readonly) FCColorGradient * darkStyleBackgroundGradient; 
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> cardStyle; 
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> darkCardStyle; 
@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo; 
@property (nonatomic,copy,readonly) NSArray * videoPlaylistHeadlines; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) FCFeedEdition * edition; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) unsigned long long mergeID; 
@property (nonatomic,copy,readonly) NSArray * headlines; 
@property (nonatomic,copy,readonly) NSString * backingTagID; 
@property (nonatomic,copy,readonly) NSArray * issueIDs; 
@property (nonatomic,readonly) id<FCForYouBridgedFeedGroup> bridgedGroup; 
@property (nonatomic,readonly) BOOL usesPlaceholderHeadlines; 
@required
-(unsigned long long)options;
-(NSString *)identifier;
-(NSString *)title;
-(NSDate *)creationDate;
-(NSString *)subtitle;
-(FCColor *)titleColor;
-(FCColorGradient *)backgroundGradient;
-(NSString *)sourceIdentifier;
-(FCFeedEdition *)edition;
-(long long)groupType;
-(NSString *)eyebrowText;
-(NSString *)ctaText;
-(FCColor *)darkStyleTitleColor;
-(FCColorGradient *)darkStyleBackgroundGradient;
-(id<FCCardStyleProviding>)cardStyle;
-(id<FCCardStyleProviding>)darkCardStyle;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(NSArray *)issueIDs;
-(unsigned long long)mergeID;
-(BOOL)usesPlaceholderHeadlines;
-(NSArray *)headlines;
-(NSArray *)videoPlaylistHeadlines;
-(NSString *)backingTagID;
-(id<FCForYouBridgedFeedGroup>)bridgedGroup;

@end

