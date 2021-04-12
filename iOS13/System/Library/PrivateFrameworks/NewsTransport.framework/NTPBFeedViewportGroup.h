/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBColorGradient, NSString, NTPBCardStyle, NTPBDate, NTPBColor, NTPBDiscoverMoreVideosInfo, NSMutableArray;

@interface NTPBFeedViewportGroup : PBCodable <NSCopying> {

	SCD_Struct_NT9* _assetURLStringRefs;
	unsigned long long _mergeID;
	unsigned long long _options;
	NTPBColorGradient* _backgroundGradient;
	NSString* _bridgedGroupIdentifier;
	NTPBCardStyle* _cardStyle;
	NTPBDate* _creationDate;
	int _ctaTextRef;
	NTPBCardStyle* _darkCardStyle;
	NTPBColorGradient* _darkStyleBackgroundGradient;
	NTPBColor* _darkStyleTitleColor;
	NTPBDiscoverMoreVideosInfo* _discoverMoreVideosInfo;
	NTPBDate* _editionFeedEndDate;
	NTPBDate* _editionFeedStartDate;
	NTPBDate* _editionKeyDate;
	int _eyebrowTextRef;
	NSMutableArray* _headlines;
	NSString* _identifier;
	NSMutableArray* _issueIDs;
	int _l2TagIDRef;
	int _sourceIdentifierRef;
	int _subtitleRef;
	NTPBColor* _titleColor;
	int _titleRef;
	int _type;
	NSMutableArray* _videoPlaylistHeadlines;
	BOOL _isFirstFromEdition;
	BOOL _usesPlaceholderHeadlines;
	SCD_Struct_NT29 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasSourceIdentifierRef; 
@property (assign,nonatomic) int sourceIdentifierRef;                                          //@synthesize sourceIdentifierRef=_sourceIdentifierRef - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCreationDate; 
@property (nonatomic,retain) NTPBDate * creationDate;                                          //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasTitleRef; 
@property (assign,nonatomic) int titleRef;                                                     //@synthesize titleRef=_titleRef - In the implementation block
@property (assign,nonatomic) BOOL hasSubtitleRef; 
@property (assign,nonatomic) int subtitleRef;                                                  //@synthesize subtitleRef=_subtitleRef - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleColor; 
@property (nonatomic,retain) NTPBColor * titleColor;                                           //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundGradient; 
@property (nonatomic,retain) NTPBColorGradient * backgroundGradient;                           //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (assign,nonatomic) BOOL hasL2TagIDRef; 
@property (assign,nonatomic) int l2TagIDRef;                                                   //@synthesize l2TagIDRef=_l2TagIDRef - In the implementation block
@property (nonatomic,retain) NSMutableArray * headlines;                                       //@synthesize headlines=_headlines - In the implementation block
@property (assign,nonatomic) BOOL hasMergeID; 
@property (assign,nonatomic) unsigned long long mergeID;                                       //@synthesize mergeID=_mergeID - In the implementation block
@property (assign,nonatomic) BOOL hasOptions; 
@property (assign,nonatomic) unsigned long long options;                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL hasEditionKeyDate; 
@property (nonatomic,retain) NTPBDate * editionKeyDate;                                        //@synthesize editionKeyDate=_editionKeyDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEditionFeedStartDate; 
@property (nonatomic,retain) NTPBDate * editionFeedStartDate;                                  //@synthesize editionFeedStartDate=_editionFeedStartDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEditionFeedEndDate; 
@property (nonatomic,retain) NTPBDate * editionFeedEndDate;                                    //@synthesize editionFeedEndDate=_editionFeedEndDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsFirstFromEdition; 
@property (assign,nonatomic) BOOL isFirstFromEdition;                                          //@synthesize isFirstFromEdition=_isFirstFromEdition - In the implementation block
@property (nonatomic,readonly) BOOL hasDiscoverMoreVideosInfo; 
@property (nonatomic,retain) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo;              //@synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoPlaylistHeadlines;                          //@synthesize videoPlaylistHeadlines=_videoPlaylistHeadlines - In the implementation block
@property (nonatomic,retain) NSMutableArray * issueIDs;                                        //@synthesize issueIDs=_issueIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasBridgedGroupIdentifier; 
@property (nonatomic,retain) NSString * bridgedGroupIdentifier;                                //@synthesize bridgedGroupIdentifier=_bridgedGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasEyebrowTextRef; 
@property (assign,nonatomic) int eyebrowTextRef;                                               //@synthesize eyebrowTextRef=_eyebrowTextRef - In the implementation block
@property (assign,nonatomic) BOOL hasCtaTextRef; 
@property (assign,nonatomic) int ctaTextRef;                                                   //@synthesize ctaTextRef=_ctaTextRef - In the implementation block
@property (nonatomic,readonly) BOOL hasDarkStyleTitleColor; 
@property (nonatomic,retain) NTPBColor * darkStyleTitleColor;                                  //@synthesize darkStyleTitleColor=_darkStyleTitleColor - In the implementation block
@property (nonatomic,readonly) BOOL hasDarkStyleBackgroundGradient; 
@property (nonatomic,retain) NTPBColorGradient * darkStyleBackgroundGradient;                  //@synthesize darkStyleBackgroundGradient=_darkStyleBackgroundGradient - In the implementation block
@property (nonatomic,readonly) BOOL hasCardStyle; 
@property (nonatomic,retain) NTPBCardStyle * cardStyle;                                        //@synthesize cardStyle=_cardStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasDarkCardStyle; 
@property (nonatomic,retain) NTPBCardStyle * darkCardStyle;                                    //@synthesize darkCardStyle=_darkCardStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long assetURLStringRefsCount; 
@property (nonatomic,readonly) int* assetURLStringRefs; 
@property (assign,nonatomic) BOOL hasUsesPlaceholderHeadlines; 
@property (assign,nonatomic) BOOL usesPlaceholderHeadlines;                                    //@synthesize usesPlaceholderHeadlines=_usesPlaceholderHeadlines - In the implementation block
+(Class)issueIDsType;
+(Class)headlinesType;
+(Class)videoPlaylistHeadlinesType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOptions:(unsigned long long)arg1 ;
-(NTPBDate *)creationDate;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCreationDate:(NTPBDate *)arg1 ;
-(BOOL)hasCreationDate;
-(NTPBColor *)titleColor;
-(void)setTitleColor:(NTPBColor *)arg1 ;
-(void)setBackgroundGradient:(NTPBColorGradient *)arg1 ;
-(NTPBColorGradient *)backgroundGradient;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasIdentifier;
-(BOOL)hasOptions;
-(NSString *)bridgedGroupIdentifier;
-(unsigned long long)assetURLStringRefsCount;
-(int)assetURLStringRefAtIndex:(unsigned long long)arg1 ;
-(NTPBColor *)darkStyleTitleColor;
-(NTPBColorGradient *)darkStyleBackgroundGradient;
-(NTPBCardStyle *)cardStyle;
-(NTPBCardStyle *)darkCardStyle;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(BOOL)isFirstFromEdition;
-(NSMutableArray *)issueIDs;
-(unsigned long long)mergeID;
-(BOOL)usesPlaceholderHeadlines;
-(NSMutableArray *)headlines;
-(NSMutableArray *)videoPlaylistHeadlines;
-(BOOL)hasL2TagIDRef;
-(int)l2TagIDRef;
-(void)setIssueIDs:(NSMutableArray *)arg1 ;
-(void)setHeadlines:(NSMutableArray *)arg1 ;
-(NTPBDate *)editionKeyDate;
-(unsigned long long)headlinesCount;
-(void)setSourceIdentifierRef:(int)arg1 ;
-(void)setMergeID:(unsigned long long)arg1 ;
-(void)setEyebrowTextRef:(int)arg1 ;
-(void)setTitleRef:(int)arg1 ;
-(void)setSubtitleRef:(int)arg1 ;
-(void)setCtaTextRef:(int)arg1 ;
-(void)setDarkStyleTitleColor:(NTPBColor *)arg1 ;
-(void)setDarkStyleBackgroundGradient:(NTPBColorGradient *)arg1 ;
-(void)setCardStyle:(NTPBCardStyle *)arg1 ;
-(void)setDarkCardStyle:(NTPBCardStyle *)arg1 ;
-(void)setDiscoverMoreVideosInfo:(NTPBDiscoverMoreVideosInfo *)arg1 ;
-(void)setL2TagIDRef:(int)arg1 ;
-(void)setEditionKeyDate:(NTPBDate *)arg1 ;
-(void)setEditionFeedStartDate:(NTPBDate *)arg1 ;
-(void)setEditionFeedEndDate:(NTPBDate *)arg1 ;
-(void)setIsFirstFromEdition:(BOOL)arg1 ;
-(void)addHeadlines:(id)arg1 ;
-(void)addVideoPlaylistHeadlines:(id)arg1 ;
-(void)setBridgedGroupIdentifier:(NSString *)arg1 ;
-(void)addAssetURLStringRef:(int)arg1 ;
-(void)setUsesPlaceholderHeadlines:(BOOL)arg1 ;
-(BOOL)hasSourceIdentifierRef;
-(int)sourceIdentifierRef;
-(BOOL)hasEyebrowTextRef;
-(int)eyebrowTextRef;
-(BOOL)hasTitleRef;
-(int)titleRef;
-(BOOL)hasSubtitleRef;
-(int)subtitleRef;
-(BOOL)hasCtaTextRef;
-(int)ctaTextRef;
-(BOOL)hasTitleColor;
-(BOOL)hasDarkStyleTitleColor;
-(BOOL)hasBackgroundGradient;
-(BOOL)hasDarkStyleBackgroundGradient;
-(BOOL)hasDiscoverMoreVideosInfo;
-(NTPBDate *)editionFeedStartDate;
-(NTPBDate *)editionFeedEndDate;
-(void)addIssueIDs:(id)arg1 ;
-(void)clearIssueIDs;
-(unsigned long long)issueIDsCount;
-(id)issueIDsAtIndex:(unsigned long long)arg1 ;
-(void)setVideoPlaylistHeadlines:(NSMutableArray *)arg1 ;
-(void)setHasSourceIdentifierRef:(BOOL)arg1 ;
-(void)setHasTitleRef:(BOOL)arg1 ;
-(void)setHasSubtitleRef:(BOOL)arg1 ;
-(void)setHasL2TagIDRef:(BOOL)arg1 ;
-(void)clearHeadlines;
-(id)headlinesAtIndex:(unsigned long long)arg1 ;
-(void)setHasMergeID:(BOOL)arg1 ;
-(BOOL)hasMergeID;
-(void)setHasOptions:(BOOL)arg1 ;
-(BOOL)hasEditionKeyDate;
-(BOOL)hasEditionFeedStartDate;
-(BOOL)hasEditionFeedEndDate;
-(void)setHasIsFirstFromEdition:(BOOL)arg1 ;
-(BOOL)hasIsFirstFromEdition;
-(void)clearVideoPlaylistHeadlines;
-(unsigned long long)videoPlaylistHeadlinesCount;
-(id)videoPlaylistHeadlinesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBridgedGroupIdentifier;
-(void)setHasEyebrowTextRef:(BOOL)arg1 ;
-(void)setHasCtaTextRef:(BOOL)arg1 ;
-(BOOL)hasCardStyle;
-(BOOL)hasDarkCardStyle;
-(int*)assetURLStringRefs;
-(void)clearAssetURLStringRefs;
-(void)setAssetURLStringRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasUsesPlaceholderHeadlines:(BOOL)arg1 ;
-(BOOL)hasUsesPlaceholderHeadlines;
@end

