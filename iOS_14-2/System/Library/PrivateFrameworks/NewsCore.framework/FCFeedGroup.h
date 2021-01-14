/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedElement.h>
#import <libobjc.A.dylib/FCFeedGroupOutlining.h>

@protocol FCCardStyleProviding, FCForYouBridgedFeedGroup;
@class NSString, FCColor, NSDate, FCFeedEdition, NSArray, FCHeadlineClusteringRules, FCFeedDescriptor;

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {

	BOOL _isFirstFromEdition;
	NSString* _identifier;
	NSString* _sourceIdentifier;
	FCColor* _titleColor;
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
	FCFeedDescriptor* _L2FeedDescriptor;
	FCFeedEdition* _edition;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long groupType;                                           //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * elements;                                       //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * headlines;                                      //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * debugHeadlines;                                 //@synthesize debugHeadlines=_debugHeadlines - In the implementation block
@property (nonatomic,copy,readonly) FCHeadlineClusteringRules * clusteringRules;              //@synthesize clusteringRules=_clusteringRules - In the implementation block
@property (nonatomic,copy,readonly) NSString * eyebrowText;                                   //@synthesize eyebrowText=_eyebrowText - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaText;                                       //@synthesize ctaText=_ctaText - In the implementation block
@property (nonatomic,copy,readonly) FCColor * titleColor;                                     //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy,readonly) FCColor * darkStyleTitleColor;                            //@synthesize darkStyleTitleColor=_darkStyleTitleColor - In the implementation block
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> cardStyle;                       //@synthesize cardStyle=_cardStyle - In the implementation block
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> darkCardStyle;                   //@synthesize darkCardStyle=_darkCardStyle - In the implementation block
@property (nonatomic,copy,readonly) FCFeedDescriptor * L2FeedDescriptor;                      //@synthesize L2FeedDescriptor=_L2FeedDescriptor - In the implementation block
@property (nonatomic,copy,readonly) FCFeedEdition * edition;                                  //@synthesize edition=_edition - In the implementation block
@property (nonatomic,readonly) BOOL isFirstFromEdition;                                       //@synthesize isFirstFromEdition=_isFirstFromEdition - In the implementation block
@property (nonatomic,readonly) BOOL canBeExtended; 
@property (nonatomic,readonly) BOOL hasStrictHeadlineOrder; 
@property (getter=isTopStories,nonatomic,readonly) BOOL topStories; 
@property (nonatomic,copy,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) BOOL usesPlaceholderHeadlines; 
@property (nonatomic,readonly) long long feedElementType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long mergeID;                                    //@synthesize mergeID=_mergeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * backingTagID;                                  //@synthesize backingTagID=_backingTagID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * issueIDs;                                       //@synthesize issueIDs=_issueIDs - In the implementation block
@property (nonatomic,readonly) id<FCForYouBridgedFeedGroup> bridgedGroup;                     //@synthesize bridgedGroup=_bridgedGroup - In the implementation block
+(id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2 ;
+(id)_pbHeadlinesFromHeadlines:(id)arg1 sharedStringIndex:(id)arg2 ;
-(NSString *)ctaText;
-(NSArray *)elements;
-(id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleColor:(id)arg6 darkStyleTitleColor:(id)arg7 L2FeedDescriptor:(id)arg8 elements:(id)arg9 debugHeadlines:(id)arg10 clusteringRules:(id)arg11 options:(unsigned long long)arg12 ;
-(FCColor *)titleColor;
-(id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 title:(id)arg5 subtitle:(id)arg6 eyebrowText:(id)arg7 ctaText:(id)arg8 titleColor:(id)arg9 darkStyleTitleColor:(id)arg10 cardStyle:(id)arg11 darkCardStyle:(id)arg12 L2FeedDescriptor:(id)arg13 backingTagID:(id)arg14 edition:(id)arg15 isFirstFromEdition:(BOOL)arg16 elements:(id)arg17 debugHeadlines:(id)arg18 clusteringRules:(id)arg19 issueIDs:(id)arg20 bridgedGroup:(id)arg21 options:(unsigned long long)arg22 mergeID:(unsigned long long)arg23 ;
-(FCColor *)darkStyleTitleColor;
-(id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleColor:(id)arg5 darkStyleTitleColor:(id)arg6 L2FeedDescriptor:(id)arg7 elements:(id)arg8 debugHeadlines:(id)arg9 clusteringRules:(id)arg10 options:(unsigned long long)arg11 ;
-(BOOL)isTopStories;
-(BOOL)usesPlaceholderHeadlines;
-(NSString *)subtitle;
-(BOOL)hasStrictHeadlineOrder;
-(BOOL)containsHeadlineIdenticalTo:(id)arg1 ;
-(id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 elements:(id)arg3 debugHeadlines:(id)arg4 options:(unsigned long long)arg5 ;
-(id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 L2FeedDescriptor:(id)arg4 bridgedGroup:(id)arg5 ;
-(unsigned long long)options;
-(id)equivalentTopicIDs;
-(FCFeedDescriptor *)L2FeedDescriptor;
-(NSArray *)debugHeadlines;
-(FCHeadlineClusteringRules *)clusteringRules;
-(NSString *)contentIdentifier;
-(id)copyWithElements:(id)arg1 ;
-(NSArray *)issueIDs;
-(BOOL)isFirstFromEdition;
-(NSArray *)headlines;
-(id)copyWithMergeID:(unsigned long long)arg1 ;
-(id)copyWithEdition:(id)arg1 isFirst:(BOOL)arg2 ;
-(BOOL)canBeExtended;
-(NSString *)description;
-(id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 eyebrowText:(id)arg5 ctaText:(id)arg6 cardStyle:(id)arg7 darkCardStyle:(id)arg8 elements:(id)arg9 debugHeadlines:(id)arg10 options:(unsigned long long)arg11 ;
-(NSDate *)creationDate;
-(id<FCForYouBridgedFeedGroup>)bridgedGroup;
-(NSString *)eyebrowText;
-(long long)feedElementType;
-(id<FCCardStyleProviding>)darkCardStyle;
-(id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 L2FeedDescriptor:(id)arg4 issueIDs:(id)arg5 ;
-(long long)groupType;
-(unsigned long long)hash;
-(id<FCCardStyleProviding>)cardStyle;
-(id)copyWithOptions:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(unsigned long long)mergeID;
-(BOOL)isGap;
-(NSString *)backingTagID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCFeedEdition *)edition;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

