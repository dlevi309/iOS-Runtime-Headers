/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedElement.h>
#import <libobjc.A.dylib/FCFeedGroupOutlining.h>

@protocol FCCardStyleProviding, FCForYouBridgedFeedGroup;
@class NSString, FCColor, FCColorGradient, NTPBDiscoverMoreVideosInfo, NSArray, NSDate, FCFeedEdition, FCHeadlineClusteringRules, FCFeedDescriptor;

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {

	BOOL _isFirstFromEdition;
	NSString* _identifier;
	NSString* _sourceIdentifier;
	FCColor* _titleColor;
	FCColorGradient* _backgroundGradient;
	FCColorGradient* _darkStyleBackgroundGradient;
	id<FCCardStyleProviding> _cardStyle;
	id<FCCardStyleProviding> _darkCardStyle;
	NSDate* _creationDate;
	NSArray* _issueIDs;
	NSString* _backingTagID;
	id<FCForYouBridgedFeedGroup> _bridgedGroup;
	unsigned long long _options;
	unsigned long long _mergeID;
	long long _groupType;
	NSArray* _elements;
	NSArray* _headlines;
	NSArray* _debugHeadlines;
	FCHeadlineClusteringRules* _clusteringRules;
	NSString* _eyebrowText;
	NSString* _title;
	NSString* _subtitle;
	NSString* _ctaText;
	FCColor* _darkStyleTitleColor;
	NTPBDiscoverMoreVideosInfo* _discoverMoreVideosInfo;
	NSArray* _videoPlaylistHeadlines;
	FCFeedDescriptor* _L2FeedDescriptor;
	FCFeedEdition* _edition;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long groupType;                                                   //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * elements;                                               //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * headlines;                                              //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * debugHeadlines;                                         //@synthesize debugHeadlines=_debugHeadlines - In the implementation block
@property (nonatomic,copy,readonly) FCHeadlineClusteringRules * clusteringRules;                      //@synthesize clusteringRules=_clusteringRules - In the implementation block
@property (nonatomic,copy,readonly) NSString * eyebrowText;                                           //@synthesize eyebrowText=_eyebrowText - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaText;                                               //@synthesize ctaText=_ctaText - In the implementation block
@property (nonatomic,copy,readonly) FCColor * titleColor;                                             //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy,readonly) FCColor * darkStyleTitleColor;                                    //@synthesize darkStyleTitleColor=_darkStyleTitleColor - In the implementation block
@property (nonatomic,copy,readonly) FCColorGradient * backgroundGradient;                             //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,copy,readonly) FCColorGradient * darkStyleBackgroundGradient;                    //@synthesize darkStyleBackgroundGradient=_darkStyleBackgroundGradient - In the implementation block
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> cardStyle;                               //@synthesize cardStyle=_cardStyle - In the implementation block
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> darkCardStyle;                           //@synthesize darkCardStyle=_darkCardStyle - In the implementation block
@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo;              //@synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoPlaylistHeadlines;                                 //@synthesize videoPlaylistHeadlines=_videoPlaylistHeadlines - In the implementation block
@property (nonatomic,copy,readonly) FCFeedDescriptor * L2FeedDescriptor;                              //@synthesize L2FeedDescriptor=_L2FeedDescriptor - In the implementation block
@property (nonatomic,copy,readonly) FCFeedEdition * edition;                                          //@synthesize edition=_edition - In the implementation block
@property (nonatomic,readonly) BOOL isFirstFromEdition;                                               //@synthesize isFirstFromEdition=_isFirstFromEdition - In the implementation block
@property (nonatomic,readonly) BOOL canBeExtended; 
@property (nonatomic,readonly) BOOL hasStrictHeadlineOrder; 
@property (nonatomic,readonly) BOOL shouldPresentCollapsed; 
@property (getter=isTopStories,nonatomic,readonly) BOOL topStories; 
@property (nonatomic,copy,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) BOOL usesPlaceholderHeadlines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                                      //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long mergeID;                                            //@synthesize mergeID=_mergeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * backingTagID;                                          //@synthesize backingTagID=_backingTagID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * issueIDs;                                               //@synthesize issueIDs=_issueIDs - In the implementation block
@property (nonatomic,readonly) id<FCForYouBridgedFeedGroup> bridgedGroup;                             //@synthesize bridgedGroup=_bridgedGroup - In the implementation block
+(id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2 ;
+(id)_pbHeadlinesFromHeadlines:(id)arg1 sharedStringIndex:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(NSString *)identifier;
-(NSString *)title;
-(NSArray *)elements;
-(NSDate *)creationDate;
-(NSString *)subtitle;
-(FCColor *)titleColor;
-(FCColorGradient *)backgroundGradient;
-(NSString *)sourceIdentifier;
-(FCFeedEdition *)edition;
-(long long)groupType;
-(id)copyWithOptions:(unsigned long long)arg1 ;
-(NSString *)contentIdentifier;
-(NSString *)eyebrowText;
-(NSString *)ctaText;
-(FCColor *)darkStyleTitleColor;
-(FCColorGradient *)darkStyleBackgroundGradient;
-(id<FCCardStyleProviding>)cardStyle;
-(id<FCCardStyleProviding>)darkCardStyle;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(BOOL)isFirstFromEdition;
-(NSArray *)issueIDs;
-(unsigned long long)mergeID;
-(id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 title:(id)arg5 subtitle:(id)arg6 eyebrowText:(id)arg7 ctaText:(id)arg8 titleColor:(id)arg9 darkStyleTitleColor:(id)arg10 backgroundGradient:(id)arg11 darkStyleBackgroundGradient:(id)arg12 cardStyle:(id)arg13 darkCardStyle:(id)arg14 discoverMoreVideosInfo:(id)arg15 videoPlaylistHeadlines:(id)arg16 L2FeedDescriptor:(id)arg17 backingTagID:(id)arg18 edition:(id)arg19 isFirstFromEdition:(BOOL)arg20 elements:(id)arg21 debugHeadlines:(id)arg22 clusteringRules:(id)arg23 issueIDs:(id)arg24 bridgedGroup:(id)arg25 options:(unsigned long long)arg26 mergeID:(unsigned long long)arg27 ;
-(BOOL)usesPlaceholderHeadlines;
-(NSArray *)headlines;
-(NSArray *)videoPlaylistHeadlines;
-(id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleColor:(id)arg5 darkStyleTitleColor:(id)arg6 backgroundGradient:(id)arg7 darkStyleBackgroundGradient:(id)arg8 discoverMoreVideosInfo:(id)arg9 videoPlaylistHeadlines:(id)arg10 L2FeedDescriptor:(id)arg11 elements:(id)arg12 debugHeadlines:(id)arg13 clusteringRules:(id)arg14 options:(unsigned long long)arg15 ;
-(NSString *)backingTagID;
-(id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 bridgedGroup:(id)arg4 ;
-(long long)feedElementType;
-(FCFeedDescriptor *)L2FeedDescriptor;
-(NSArray *)debugHeadlines;
-(FCHeadlineClusteringRules *)clusteringRules;
-(id<FCForYouBridgedFeedGroup>)bridgedGroup;
-(id)copyWithEdition:(id)arg1 isFirst:(BOOL)arg2 ;
-(id)copyWithMergeID:(unsigned long long)arg1 ;
-(BOOL)canBeExtended;
-(id)copyWithElements:(id)arg1 ;
-(BOOL)isTopStories;
-(id)equivalentTopicIDs;
-(BOOL)isGap;
-(id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 eyebrowText:(id)arg5 ctaText:(id)arg6 cardStyle:(id)arg7 darkCardStyle:(id)arg8 elements:(id)arg9 debugHeadlines:(id)arg10 options:(unsigned long long)arg11 ;
-(id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 L2FeedDescriptor:(id)arg4 issueIDs:(id)arg5 ;
-(id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleColor:(id)arg6 darkStyleTitleColor:(id)arg7 backgroundGradient:(id)arg8 darkStyleBackgroundGradient:(id)arg9 discoverMoreVideosInfo:(id)arg10 videoPlaylistHeadlines:(id)arg11 L2FeedDescriptor:(id)arg12 elements:(id)arg13 debugHeadlines:(id)arg14 clusteringRules:(id)arg15 options:(unsigned long long)arg16 ;
-(BOOL)hasStrictHeadlineOrder;
-(BOOL)shouldPresentCollapsed;
-(id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 elements:(id)arg3 debugHeadlines:(id)arg4 options:(unsigned long long)arg5 ;
-(BOOL)containsHeadlineIdenticalTo:(id)arg1 ;
@end

