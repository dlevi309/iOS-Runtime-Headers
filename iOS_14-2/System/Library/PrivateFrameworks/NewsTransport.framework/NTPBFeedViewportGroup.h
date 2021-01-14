/*
* Generated on Thursday, January 14, 2021 at 2:23:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBCardStyle, NTPBDate, NTPBColor, NSMutableArray;

@interface NTPBFeedViewportGroup : PBCodable <NSCopying> {

	SCD_Struct_NT10* _assetURLStringRefs;
	unsigned long long _mergeID;
	unsigned long long _options;
	NSString* _bridgedGroupIdentifier;
	NTPBCardStyle* _cardStyle;
	NTPBDate* _creationDate;
	int _ctaTextRef;
	NTPBCardStyle* _darkCardStyle;
	NTPBColor* _darkStyleTitleColor;
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
	BOOL _isFirstFromEdition;
	BOOL _usesPlaceholderHeadlines;
	SCD_Struct_NT28 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasSourceIdentifierRef; 
@property (assign,nonatomic) int sourceIdentifierRef;                                   //@synthesize sourceIdentifierRef=_sourceIdentifierRef - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCreationDate; 
@property (nonatomic,retain) NTPBDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasTitleRef; 
@property (assign,nonatomic) int titleRef;                                              //@synthesize titleRef=_titleRef - In the implementation block
@property (assign,nonatomic) BOOL hasSubtitleRef; 
@property (assign,nonatomic) int subtitleRef;                                           //@synthesize subtitleRef=_subtitleRef - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleColor; 
@property (nonatomic,retain) NTPBColor * titleColor;                                    //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) BOOL hasL2TagIDRef; 
@property (assign,nonatomic) int l2TagIDRef;                                            //@synthesize l2TagIDRef=_l2TagIDRef - In the implementation block
@property (nonatomic,retain) NSMutableArray * headlines;                                //@synthesize headlines=_headlines - In the implementation block
@property (assign,nonatomic) BOOL hasMergeID; 
@property (assign,nonatomic) unsigned long long mergeID;                                //@synthesize mergeID=_mergeID - In the implementation block
@property (assign,nonatomic) BOOL hasOptions; 
@property (assign,nonatomic) unsigned long long options;                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL hasEditionKeyDate; 
@property (nonatomic,retain) NTPBDate * editionKeyDate;                                 //@synthesize editionKeyDate=_editionKeyDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEditionFeedStartDate; 
@property (nonatomic,retain) NTPBDate * editionFeedStartDate;                           //@synthesize editionFeedStartDate=_editionFeedStartDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEditionFeedEndDate; 
@property (nonatomic,retain) NTPBDate * editionFeedEndDate;                             //@synthesize editionFeedEndDate=_editionFeedEndDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsFirstFromEdition; 
@property (assign,nonatomic) BOOL isFirstFromEdition;                                   //@synthesize isFirstFromEdition=_isFirstFromEdition - In the implementation block
@property (nonatomic,retain) NSMutableArray * issueIDs;                                 //@synthesize issueIDs=_issueIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasBridgedGroupIdentifier; 
@property (nonatomic,retain) NSString * bridgedGroupIdentifier;                         //@synthesize bridgedGroupIdentifier=_bridgedGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasEyebrowTextRef; 
@property (assign,nonatomic) int eyebrowTextRef;                                        //@synthesize eyebrowTextRef=_eyebrowTextRef - In the implementation block
@property (assign,nonatomic) BOOL hasCtaTextRef; 
@property (assign,nonatomic) int ctaTextRef;                                            //@synthesize ctaTextRef=_ctaTextRef - In the implementation block
@property (nonatomic,readonly) BOOL hasDarkStyleTitleColor; 
@property (nonatomic,retain) NTPBColor * darkStyleTitleColor;                           //@synthesize darkStyleTitleColor=_darkStyleTitleColor - In the implementation block
@property (nonatomic,readonly) BOOL hasCardStyle; 
@property (nonatomic,retain) NTPBCardStyle * cardStyle;                                 //@synthesize cardStyle=_cardStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasDarkCardStyle; 
@property (nonatomic,retain) NTPBCardStyle * darkCardStyle;                             //@synthesize darkCardStyle=_darkCardStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long assetURLStringRefsCount; 
@property (nonatomic,readonly) int* assetURLStringRefs; 
@property (assign,nonatomic) BOOL hasUsesPlaceholderHeadlines; 
@property (assign,nonatomic) BOOL usesPlaceholderHeadlines;                             //@synthesize usesPlaceholderHeadlines=_usesPlaceholderHeadlines - In the implementation block
+(Class)issueIDsType;
+(Class)headlinesType;
-(void)setTitleRef:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDarkCardStyle:(NTPBCardStyle *)arg1 ;
-(BOOL)hasDarkStyleTitleColor;
-(int)titleRef;
-(void)setL2TagIDRef:(int)arg1 ;
-(NTPBColor *)titleColor;
-(void)setHasType:(BOOL)arg1 ;
-(NTPBColor *)darkStyleTitleColor;
-(void)setEditionFeedStartDate:(NTPBDate *)arg1 ;
-(void)addIssueIDs:(id)arg1 ;
-(BOOL)hasIdentifier;
-(int)sourceIdentifierRef;
-(BOOL)hasMergeID;
-(void)setHasTitleRef:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(BOOL)usesPlaceholderHeadlines;
-(void)setHeadlines:(NSMutableArray *)arg1 ;
-(void)setHasL2TagIDRef:(BOOL)arg1 ;
-(void)setHasSourceIdentifierRef:(BOOL)arg1 ;
-(void)setHasCtaTextRef:(BOOL)arg1 ;
-(unsigned long long)assetURLStringRefsCount;
-(void)setCreationDate:(NTPBDate *)arg1 ;
-(void)setAssetURLStringRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasType;
-(void)setCardStyle:(NTPBCardStyle *)arg1 ;
-(BOOL)hasEditionFeedEndDate;
-(unsigned long long)options;
-(void)mergeFrom:(id)arg1 ;
-(int)eyebrowTextRef;
-(void)setDarkStyleTitleColor:(NTPBColor *)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setSourceIdentifierRef:(int)arg1 ;
-(int)subtitleRef;
-(int)ctaTextRef;
-(void)setHasEyebrowTextRef:(BOOL)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setUsesPlaceholderHeadlines:(BOOL)arg1 ;
-(NSMutableArray *)issueIDs;
-(BOOL)hasSourceIdentifierRef;
-(void)setCtaTextRef:(int)arg1 ;
-(void)addAssetURLStringRef:(int)arg1 ;
-(BOOL)hasEditionKeyDate;
-(BOOL)isFirstFromEdition;
-(void)setBridgedGroupIdentifier:(NSString *)arg1 ;
-(unsigned long long)headlinesCount;
-(BOOL)hasEditionFeedStartDate;
-(NSMutableArray *)headlines;
-(id)description;
-(void)clearAssetURLStringRefs;
-(NTPBDate *)creationDate;
-(NTPBDate *)editionKeyDate;
-(int)l2TagIDRef;
-(int*)assetURLStringRefs;
-(void)setHasMergeID:(BOOL)arg1 ;
-(BOOL)hasIsFirstFromEdition;
-(unsigned long long)issueIDsCount;
-(void)setHasIsFirstFromEdition:(BOOL)arg1 ;
-(BOOL)hasCtaTextRef;
-(int)type;
-(NTPBCardStyle *)darkCardStyle;
-(BOOL)hasTitleColor;
-(BOOL)hasUsesPlaceholderHeadlines;
-(BOOL)hasEyebrowTextRef;
-(BOOL)hasSubtitleRef;
-(unsigned long long)hash;
-(NTPBCardStyle *)cardStyle;
-(void)setEditionFeedEndDate:(NTPBDate *)arg1 ;
-(int)assetURLStringRefAtIndex:(unsigned long long)arg1 ;
-(void)setHasUsesPlaceholderHeadlines:(BOOL)arg1 ;
-(NSString *)bridgedGroupIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubtitleRef:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIsFirstFromEdition:(BOOL)arg1 ;
-(void)setEditionKeyDate:(NTPBDate *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(void)setHasSubtitleRef:(BOOL)arg1 ;
-(unsigned long long)mergeID;
-(void)setHasOptions:(BOOL)arg1 ;
-(BOOL)hasTitleRef;
-(void)clearHeadlines;
-(BOOL)hasDarkCardStyle;
-(void)addHeadlines:(id)arg1 ;
-(BOOL)hasL2TagIDRef;
-(id)headlinesAtIndex:(unsigned long long)arg1 ;
-(void)setMergeID:(unsigned long long)arg1 ;
-(id)issueIDsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEyebrowTextRef:(int)arg1 ;
-(NTPBDate *)editionFeedStartDate;
-(BOOL)hasCardStyle;
-(NTPBDate *)editionFeedEndDate;
-(void)setIssueIDs:(NSMutableArray *)arg1 ;
-(void)clearIssueIDs;
-(BOOL)hasBridgedGroupIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasOptions;
-(void)setTitleColor:(NTPBColor *)arg1 ;
@end

