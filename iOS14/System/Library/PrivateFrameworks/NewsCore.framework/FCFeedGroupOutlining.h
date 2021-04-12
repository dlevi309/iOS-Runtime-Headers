/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString, FCColor, NSDate, FCFeedEdition, NSArray;


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
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> cardStyle; 
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> darkCardStyle; 
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
-(NSString *)ctaText;
-(FCColor *)titleColor;
-(FCColor *)darkStyleTitleColor;
-(BOOL)usesPlaceholderHeadlines;
-(NSString *)subtitle;
-(unsigned long long)options;
-(NSArray *)issueIDs;
-(NSArray *)headlines;
-(NSDate *)creationDate;
-(id<FCForYouBridgedFeedGroup>)bridgedGroup;
-(NSString *)eyebrowText;
-(id<FCCardStyleProviding>)darkCardStyle;
-(long long)groupType;
-(id<FCCardStyleProviding>)cardStyle;
-(NSString *)identifier;
-(unsigned long long)mergeID;
-(NSString *)backingTagID;
-(FCFeedEdition *)edition;
-(NSString *)title;
-(NSString *)sourceIdentifier;

@end

