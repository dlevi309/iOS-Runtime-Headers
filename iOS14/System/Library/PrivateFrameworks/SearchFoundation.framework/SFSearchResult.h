/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/WBSCompletionListItem.h>
#import <libobjc.A.dylib/SFJSONSerializable.h>
#import <libobjc.A.dylib/SFSearchResult.h>
@class NSString, SFImage, SFText, NSArray, NSURL, SFActionItem, SFPunchout, NSData, SFCard, SFMoreResults, SFCustom, NSNumber, NSDictionary;


@protocol SFSearchResult
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SFImage * thumbnail; 
@property (assign,nonatomic) BOOL preventThumbnailImageScaling; 
@property (nonatomic,retain) SFText * title; 
@property (nonatomic,copy) NSString * secondaryTitle; 
@property (nonatomic,retain) SFImage * secondaryTitleImage; 
@property (assign,nonatomic) BOOL isSecondaryTitleDetached; 
@property (assign,nonatomic) BOOL isCentered; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,copy) NSString * publishDate; 
@property (nonatomic,copy) NSString * sourceName; 
@property (nonatomic,copy) NSString * completion; 
@property (nonatomic,retain) SFImage * completionImage; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,copy) NSString * auxiliaryTopText; 
@property (nonatomic,copy) NSString * auxiliaryMiddleText; 
@property (nonatomic,copy) NSString * auxiliaryBottomText; 
@property (assign,nonatomic) int auxiliaryBottomTextColor; 
@property (nonatomic,retain) SFActionItem * action; 
@property (nonatomic,retain) SFPunchout * punchout; 
@property (nonatomic,copy) NSString * storeIdentifier; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * calendarIdentifier; 
@property (nonatomic,retain) NSData * mapsData; 
@property (nonatomic,copy) NSString * mapsResultType; 
@property (nonatomic,retain) NSURL * mapsMoreURL; 
@property (nonatomic,copy) NSString * mapsMoreString; 
@property (nonatomic,retain) SFImage * mapsMoreIcon; 
@property (nonatomic,copy) NSString * nearbyBusinessesString; 
@property (nonatomic,copy) NSString * appleReferrer; 
@property (nonatomic,retain) SFCard * card; 
@property (nonatomic,retain) SFCard * inlineCard; 
@property (nonatomic,retain) SFMoreResults * moreResults; 
@property (nonatomic,retain) SFPunchout * moreResultsPunchout; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSString * sectionBundleIdentifier; 
@property (assign,nonatomic) BOOL isLocalApplicationResult; 
@property (nonatomic,copy) NSString * userActivityRequiredString; 
@property (assign,nonatomic) int topHit; 
@property (nonatomic,copy) NSString * sectionHeader; 
@property (nonatomic,copy) NSString * sectionHeaderMore; 
@property (nonatomic,copy) NSURL * sectionHeaderMoreURL; 
@property (assign,nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory; 
@property (assign,nonatomic) double rankingScore; 
@property (assign,nonatomic) int placement; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult; 
@property (nonatomic,copy) NSString * mediaType; 
@property (assign,nonatomic) double serverScore; 
@property (assign,nonatomic) double personalizationScore; 
@property (nonatomic,retain) SFCustom * customProperties; 
@property (nonatomic,copy) NSString * resultType; 
@property (nonatomic,copy) NSString * resultTemplate; 
@property (assign,nonatomic) BOOL isQuickGlance; 
@property (assign,nonatomic) BOOL isStreaming; 
@property (nonatomic,retain) NSNumber * engagementScore; 
@property (nonatomic,retain) NSNumber * queryIndependentScore; 
@property (nonatomic,retain) NSNumber * maxAge; 
@property (nonatomic,copy) NSString * titleNote; 
@property (nonatomic,retain) NSNumber * titleNoteSize; 
@property (nonatomic,copy) NSString * resultBundleId; 
@property (nonatomic,retain) SFImage * icon; 
@property (assign,nonatomic) BOOL isStaticCorrection; 
@property (nonatomic,copy) NSDictionary * localFeatures; 
@property (nonatomic,copy) NSDictionary * serverFeatures; 
@property (nonatomic,copy) NSString * intendedQuery; 
@property (nonatomic,copy) NSString * correctedQuery; 
@property (nonatomic,copy) NSString * completedQuery; 
@property (assign,nonatomic) BOOL noGoTakeover; 
@property (assign,nonatomic) BOOL shouldUseCompactDisplay; 
@property (assign,nonatomic) BOOL preferTopPlatter; 
@property (assign,nonatomic) BOOL wasCompact; 
@property (assign,nonatomic) BOOL didTakeoverGo; 
@property (assign,nonatomic) BOOL usesCompactDisplay; 
@property (nonatomic,retain) SFCard * compactCard; 
@property (nonatomic,copy) NSArray * alternativeURLs; 
@property (assign,nonatomic) unsigned long long queryId; 
@property (assign,nonatomic) BOOL publiclyIndexable; 
@property (nonatomic,copy) NSString * userInput; 
@property (nonatomic,copy) NSArray * itemProviderDataTypes; 
@property (nonatomic,copy) NSArray * itemProviderFileTypes; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSArray * contentTypeTree; 
@property (assign,nonatomic) long long dataOwnerType; 
@property (nonatomic,copy) NSString * fileProviderIdentifier; 
@property (nonatomic,copy) NSString * fileProviderDomainIdentifier; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,copy) NSString * srf; 
@property (assign,nonatomic) BOOL doNotFold; 
@property (assign,nonatomic) unsigned long long blockId; 
@property (nonatomic,retain) NSData * entityData; 
@required
-(NSString *)userActivityRequiredString;
-(void)setPersonalizationScore:(double)arg1;
-(double)personalizationScore;
-(NSString *)fbr;
-(NSString *)srf;
-(SFCard *)card;
-(void)setResultType:(id)arg1;
-(NSString *)contactIdentifier;
-(void)setCompletion:(id)arg1;
-(BOOL)isStreaming;
-(int)placement;
-(void)setAuxiliaryTopText:(id)arg1;
-(void)setAuxiliaryMiddleText:(id)arg1;
-(void)setAuxiliaryBottomText:(id)arg1;
-(void)setAuxiliaryBottomTextColor:(int)arg1;
-(void)setResultBundleId:(id)arg1;
-(void)setFbr:(id)arg1;
-(void)setMediaType:(id)arg1;
-(void)setMapsMoreURL:(id)arg1;
-(void)setMapsMoreString:(id)arg1;
-(void)setMapsMoreIcon:(id)arg1;
-(void)setNearbyBusinessesString:(id)arg1;
-(void)setAppleReferrer:(id)arg1;
-(void)setSectionBundleIdentifier:(id)arg1;
-(void)setCompactCard:(id)arg1;
-(unsigned long long)queryId;
-(void)setSecondaryTitle:(id)arg1;
-(void)setMoreResultsPunchout:(id)arg1;
-(void)setPunchout:(id)arg1;
-(void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1;
-(void)setSectionHeaderMore:(id)arg1;
-(void)setTitleNote:(id)arg1;
-(NSString *)mediaType;
-(void)setSectionHeaderMoreURL:(id)arg1;
-(void)setResultTemplate:(id)arg1;
-(void)setIsQuickGlance:(BOOL)arg1;
-(void)setRenderHorizontallyWithOtherResultsInCategory:(BOOL)arg1;
-(void)setEngagementScore:(id)arg1;
-(void)setQueryIndependentScore:(id)arg1;
-(void)setTitleNoteSize:(id)arg1;
-(SFImage *)thumbnail;
-(void)setCompletedQuery:(id)arg1;
-(void)setIsCentered:(BOOL)arg1;
-(void)setEntityData:(id)arg1;
-(void)setServerFeatures:(id)arg1;
-(void)setNoGoTakeover:(BOOL)arg1;
-(void)setShouldUseCompactDisplay:(BOOL)arg1;
-(void)setPreferTopPlatter:(BOOL)arg1;
-(void)setAlternativeURLs:(id)arg1;
-(void)setIsStreaming:(BOOL)arg1;
-(void)setCard:(id)arg1;
-(NSString *)calendarIdentifier;
-(void)setContentTypeTree:(id)arg1;
-(NSString *)contentType;
-(int)topHit;
-(void)setPlacement:(int)arg1;
-(SFImage *)icon;
-(void)setTitle:(id)arg1;
-(SFCard *)inlineCard;
-(void)setDoNotFold:(BOOL)arg1;
-(NSData *)mapsData;
-(void)setMapsResultType:(id)arg1;
-(NSString *)resultType;
-(void)setMapsData:(id)arg1;
-(void)setIcon:(id)arg1;
-(SFActionItem *)action;
-(NSString *)completion;
-(void)setRankingScore:(double)arg1;
-(void)setType:(int)arg1;
-(void)setAction:(id)arg1;
-(BOOL)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(NSURL *)url;
-(SFCustom *)customProperties;
-(void)setCalendarIdentifier:(id)arg1;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(void)setFootnote:(id)arg1;
-(SFPunchout *)moreResultsPunchout;
-(void)setSrf:(id)arg1;
-(unsigned long long)blockId;
-(void)setDescriptions:(id)arg1;
-(void)setInlineCard:(id)arg1;
-(void)setSourceName:(id)arg1;
-(SFCard *)compactCard;
-(SFImage *)completionImage;
-(NSURL *)mapsMoreURL;
-(NSString *)mapsMoreString;
-(SFImage *)mapsMoreIcon;
-(NSString *)nearbyBusinessesString;
-(NSURL *)sectionHeaderMoreURL;
-(NSString *)resultTemplate;
-(NSNumber *)queryIndependentScore;
-(NSString *)titleNote;
-(NSNumber *)titleNoteSize;
-(void)setUserActivityRequiredString:(id)arg1;
-(NSArray *)itemProviderDataTypes;
-(void)setItemProviderDataTypes:(id)arg1;
-(NSArray *)itemProviderFileTypes;
-(void)setItemProviderFileTypes:(id)arg1;
-(NSString *)fileProviderIdentifier;
-(void)setFileProviderIdentifier:(id)arg1;
-(void)setQueryId:(unsigned long long)arg1;
-(void)setLocalFeatures:(id)arg1;
-(void)setIsStaticCorrection:(BOOL)arg1;
-(void)setIntendedQuery:(id)arg1;
-(void)setCorrectedQuery:(id)arg1;
-(void)setIsLocalApplicationResult:(BOOL)arg1;
-(void)setPubliclyIndexable:(BOOL)arg1;
-(void)setUserInput:(id)arg1;
-(void)setWasCompact:(BOOL)arg1;
-(void)setDidTakeoverGo:(BOOL)arg1;
-(void)setUsesCompactDisplay:(BOOL)arg1;
-(NSDictionary *)localFeatures;
-(BOOL)isStaticCorrection;
-(NSString *)intendedQuery;
-(NSString *)correctedQuery;
-(NSString *)completedQuery;
-(BOOL)isLocalApplicationResult;
-(BOOL)publiclyIndexable;
-(NSString *)resultBundleId;
-(NSData *)entityData;
-(NSString *)sectionBundleIdentifier;
-(BOOL)shouldUseCompactDisplay;
-(BOOL)noGoTakeover;
-(BOOL)preferTopPlatter;
-(BOOL)wasCompact;
-(BOOL)didTakeoverGo;
-(BOOL)usesCompactDisplay;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(NSString *)userInput;
-(NSNumber *)maxAge;
-(SFMoreResults *)moreResults;
-(void)setMoreResults:(id)arg1;
-(NSDictionary *)serverFeatures;
-(void)setSectionHeader:(id)arg1;
-(void)setStoreIdentifier:(id)arg1;
-(NSNumber *)engagementScore;
-(BOOL)isQuickGlance;
-(NSString *)appleReferrer;
-(BOOL)renderHorizontallyWithOtherResultsInCategory;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(NSArray *)alternativeURLs;
-(long long)dataOwnerType;
-(NSString *)sectionHeaderMore;
-(void)setDataOwnerType:(long long)arg1;
-(double)rankingScore;
-(void)setUrl:(id)arg1;
-(SFPunchout *)punchout;
-(int)type;
-(NSArray *)descriptions;
-(void)setContactIdentifier:(id)arg1;
-(void)setFileProviderDomainIdentifier:(id)arg1;
-(NSString *)fileProviderDomainIdentifier;
-(NSString *)mapsResultType;
-(NSString *)footnote;
-(NSArray *)contentTypeTree;
-(void)setContentType:(id)arg1;
-(void)setServerScore:(double)arg1;
-(double)serverScore;
-(void)setTopHit:(int)arg1;
-(NSString *)publishDate;
-(void)setIdentifier:(id)arg1;
-(NSString *)secondaryTitle;
-(NSString *)identifier;
-(void)setMaxAge:(id)arg1;
-(void)setBlockId:(unsigned long long)arg1;
-(BOOL)doNotFold;
-(NSString *)sectionHeader;
-(void)setThumbnail:(id)arg1;
-(NSString *)sourceName;
-(NSString *)storeIdentifier;
-(void)setCustomProperties:(id)arg1;
-(NSString *)applicationBundleIdentifier;
-(void)setPublishDate:(id)arg1;
-(SFText *)title;
-(BOOL)isCentered;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1;
-(void)setSecondaryTitleImage:(id)arg1;
-(void)setCompletionImage:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, WBSQuerySuggestion, SFImage, SFText, NSArray, NSURL, SFActionItem, SFPunchout, NSData, SFCard, SFMoreResults, SFCustom, NSNumber, NSDictionary;

@interface SFSearchResult : NSObject <WBSCompletionListItem, SFJSONSerializable, SFSearchResult, NSSecureCoding, NSCopying> {

	BOOL _preventThumbnailImageScaling;
	BOOL _isSecondaryTitleDetached;
	BOOL _isCentered;
	BOOL _isLocalApplicationResult;
	BOOL _renderHorizontallyWithOtherResultsInCategory;
	BOOL _isQuickGlance;
	BOOL _isStreaming;
	BOOL _isStaticCorrection;
	BOOL _isFuzzyMatch;
	BOOL _noGoTakeover;
	BOOL _shouldUseCompactDisplay;
	BOOL _preferTopPlatter;
	BOOL _wasCompact;
	BOOL _didTakeoverGo;
	BOOL _usesCompactDisplay;
	BOOL _publiclyIndexable;
	BOOL _doNotFold;
	int _auxiliaryBottomTextColor;
	int _topHit;
	int _placement;
	int _type;
	NSString* _identifier;
	SFImage* _thumbnail;
	SFText* _title;
	NSString* _secondaryTitle;
	SFImage* _secondaryTitleImage;
	NSArray* _descriptions;
	NSString* _footnote;
	NSString* _publishDate;
	NSString* _sourceName;
	NSString* _completion;
	SFImage* _completionImage;
	NSURL* _url;
	NSString* _auxiliaryTopText;
	NSString* _auxiliaryMiddleText;
	NSString* _auxiliaryBottomText;
	SFActionItem* _action;
	SFPunchout* _punchout;
	NSString* _storeIdentifier;
	NSString* _contactIdentifier;
	NSString* _calendarIdentifier;
	NSData* _mapsData;
	NSString* _mapsResultType;
	NSURL* _mapsMoreURL;
	NSString* _mapsMoreString;
	SFImage* _mapsMoreIcon;
	NSString* _nearbyBusinessesString;
	NSString* _appleReferrer;
	SFCard* _card;
	SFCard* _inlineCard;
	SFMoreResults* _moreResults;
	SFPunchout* _moreResultsPunchout;
	NSString* _applicationBundleIdentifier;
	NSString* _sectionBundleIdentifier;
	NSString* _userActivityRequiredString;
	NSString* _sectionHeader;
	NSString* _sectionHeaderMore;
	NSURL* _sectionHeaderMoreURL;
	double _rankingScore;
	unsigned long long _minimumRankOfTopHitToSuppressResult;
	NSString* _mediaType;
	double _serverScore;
	double _personalizationScore;
	SFCustom* _customProperties;
	NSString* _resultType;
	NSString* _resultTemplate;
	NSNumber* _engagementScore;
	NSNumber* _queryIndependentScore;
	NSNumber* _maxAge;
	NSString* _titleNote;
	NSNumber* _titleNoteSize;
	NSString* _resultBundleId;
	SFImage* _icon;
	NSDictionary* _localFeatures;
	NSDictionary* _serverFeatures;
	NSString* _intendedQuery;
	NSString* _correctedQuery;
	NSString* _completedQuery;
	SFCard* _compactCard;
	NSArray* _alternativeURLs;
	unsigned long long _queryId;
	NSString* _userInput;
	NSArray* _itemProviderDataTypes;
	NSArray* _itemProviderFileTypes;
	NSString* _contentType;
	NSArray* _contentTypeTree;
	long long _dataOwnerType;
	NSString* _fileProviderIdentifier;
	NSString* _fileProviderDomainIdentifier;
	NSString* _fbr;
	NSString* _srf;
	unsigned long long _blockId;
	NSData* _entityData;

}

@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) NSString * safari_loggingDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (assign,nonatomic) long long parsecQueryID; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                                                 //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL preventThumbnailImageScaling;                                   //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (nonatomic,retain) SFText * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                                             //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,retain) SFImage * secondaryTitleImage;                                       //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (assign,nonatomic) BOOL isSecondaryTitleDetached;                                       //@synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached - In the implementation block
@property (assign,nonatomic) BOOL isCentered;                                                     //@synthesize isCentered=_isCentered - In the implementation block
@property (nonatomic,copy) NSArray * descriptions;                                                //@synthesize descriptions=_descriptions - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                                   //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy) NSString * publishDate;                                                //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                                 //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,copy) NSString * completion;                                                 //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) SFImage * completionImage;                                           //@synthesize completionImage=_completionImage - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryTopText;                                           //@synthesize auxiliaryTopText=_auxiliaryTopText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryMiddleText;                                        //@synthesize auxiliaryMiddleText=_auxiliaryMiddleText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryBottomText;                                        //@synthesize auxiliaryBottomText=_auxiliaryBottomText - In the implementation block
@property (assign,nonatomic) int auxiliaryBottomTextColor;                                        //@synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor - In the implementation block
@property (nonatomic,retain) SFActionItem * action;                                               //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                                               //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                          //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * calendarIdentifier;                                         //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,retain) NSData * mapsData;                                                   //@synthesize mapsData=_mapsData - In the implementation block
@property (nonatomic,copy) NSString * mapsResultType;                                             //@synthesize mapsResultType=_mapsResultType - In the implementation block
@property (nonatomic,retain) NSURL * mapsMoreURL;                                                 //@synthesize mapsMoreURL=_mapsMoreURL - In the implementation block
@property (nonatomic,copy) NSString * mapsMoreString;                                             //@synthesize mapsMoreString=_mapsMoreString - In the implementation block
@property (nonatomic,retain) SFImage * mapsMoreIcon;                                              //@synthesize mapsMoreIcon=_mapsMoreIcon - In the implementation block
@property (nonatomic,copy) NSString * nearbyBusinessesString;                                     //@synthesize nearbyBusinessesString=_nearbyBusinessesString - In the implementation block
@property (nonatomic,copy) NSString * appleReferrer;                                              //@synthesize appleReferrer=_appleReferrer - In the implementation block
@property (nonatomic,retain) SFCard * card;                                                       //@synthesize card=_card - In the implementation block
@property (nonatomic,retain) SFCard * inlineCard;                                                 //@synthesize inlineCard=_inlineCard - In the implementation block
@property (nonatomic,retain) SFMoreResults * moreResults;                                         //@synthesize moreResults=_moreResults - In the implementation block
@property (nonatomic,retain) SFPunchout * moreResultsPunchout;                                    //@synthesize moreResultsPunchout=_moreResultsPunchout - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                                //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sectionBundleIdentifier;                                    //@synthesize sectionBundleIdentifier=_sectionBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isLocalApplicationResult;                                       //@synthesize isLocalApplicationResult=_isLocalApplicationResult - In the implementation block
@property (nonatomic,copy) NSString * userActivityRequiredString;                                 //@synthesize userActivityRequiredString=_userActivityRequiredString - In the implementation block
@property (assign,nonatomic) int topHit;                                                          //@synthesize topHit=_topHit - In the implementation block
@property (nonatomic,copy) NSString * sectionHeader;                                              //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,copy) NSString * sectionHeaderMore;                                          //@synthesize sectionHeaderMore=_sectionHeaderMore - In the implementation block
@property (nonatomic,copy) NSURL * sectionHeaderMoreURL;                                          //@synthesize sectionHeaderMoreURL=_sectionHeaderMoreURL - In the implementation block
@property (assign,nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory;                   //@synthesize renderHorizontallyWithOtherResultsInCategory=_renderHorizontallyWithOtherResultsInCategory - In the implementation block
@property (assign,nonatomic) double rankingScore;                                                 //@synthesize rankingScore=_rankingScore - In the implementation block
@property (assign,nonatomic) int placement;                                                       //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) int type;                                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;              //@synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult - In the implementation block
@property (nonatomic,copy) NSString * mediaType;                                                  //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) double serverScore;                                                  //@synthesize serverScore=_serverScore - In the implementation block
@property (assign,nonatomic) double personalizationScore;                                         //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (nonatomic,retain) SFCustom * customProperties;                                         //@synthesize customProperties=_customProperties - In the implementation block
@property (nonatomic,copy) NSString * resultType;                                                 //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSString * resultTemplate;                                             //@synthesize resultTemplate=_resultTemplate - In the implementation block
@property (assign,nonatomic) BOOL isQuickGlance;                                                  //@synthesize isQuickGlance=_isQuickGlance - In the implementation block
@property (assign,nonatomic) BOOL isStreaming;                                                    //@synthesize isStreaming=_isStreaming - In the implementation block
@property (nonatomic,retain) NSNumber * engagementScore;                                          //@synthesize engagementScore=_engagementScore - In the implementation block
@property (nonatomic,retain) NSNumber * queryIndependentScore;                                    //@synthesize queryIndependentScore=_queryIndependentScore - In the implementation block
@property (nonatomic,retain) NSNumber * maxAge;                                                   //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,copy) NSString * titleNote;                                                  //@synthesize titleNote=_titleNote - In the implementation block
@property (nonatomic,retain) NSNumber * titleNoteSize;                                            //@synthesize titleNoteSize=_titleNoteSize - In the implementation block
@property (nonatomic,copy) NSString * resultBundleId;                                             //@synthesize resultBundleId=_resultBundleId - In the implementation block
@property (nonatomic,retain) SFImage * icon;                                                      //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL isStaticCorrection;                                             //@synthesize isStaticCorrection=_isStaticCorrection - In the implementation block
@property (assign,nonatomic) BOOL isFuzzyMatch;                                                   //@synthesize isFuzzyMatch=_isFuzzyMatch - In the implementation block
@property (nonatomic,copy) NSDictionary * localFeatures;                                          //@synthesize localFeatures=_localFeatures - In the implementation block
@property (nonatomic,copy) NSDictionary * serverFeatures;                                         //@synthesize serverFeatures=_serverFeatures - In the implementation block
@property (nonatomic,copy) NSString * intendedQuery;                                              //@synthesize intendedQuery=_intendedQuery - In the implementation block
@property (nonatomic,copy) NSString * correctedQuery;                                             //@synthesize correctedQuery=_correctedQuery - In the implementation block
@property (nonatomic,copy) NSString * completedQuery;                                             //@synthesize completedQuery=_completedQuery - In the implementation block
@property (assign,nonatomic) BOOL noGoTakeover;                                                   //@synthesize noGoTakeover=_noGoTakeover - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCompactDisplay;                                        //@synthesize shouldUseCompactDisplay=_shouldUseCompactDisplay - In the implementation block
@property (assign,nonatomic) BOOL preferTopPlatter;                                               //@synthesize preferTopPlatter=_preferTopPlatter - In the implementation block
@property (assign,nonatomic) BOOL wasCompact;                                                     //@synthesize wasCompact=_wasCompact - In the implementation block
@property (assign,nonatomic) BOOL didTakeoverGo;                                                  //@synthesize didTakeoverGo=_didTakeoverGo - In the implementation block
@property (assign,nonatomic) BOOL usesCompactDisplay;                                             //@synthesize usesCompactDisplay=_usesCompactDisplay - In the implementation block
@property (nonatomic,retain) SFCard * compactCard;                                                //@synthesize compactCard=_compactCard - In the implementation block
@property (nonatomic,copy) NSArray * alternativeURLs;                                             //@synthesize alternativeURLs=_alternativeURLs - In the implementation block
@property (assign,nonatomic) unsigned long long queryId;                                          //@synthesize queryId=_queryId - In the implementation block
@property (assign,nonatomic) BOOL publiclyIndexable;                                              //@synthesize publiclyIndexable=_publiclyIndexable - In the implementation block
@property (nonatomic,copy) NSString * userInput;                                                  //@synthesize userInput=_userInput - In the implementation block
@property (nonatomic,copy) NSArray * itemProviderDataTypes;                                       //@synthesize itemProviderDataTypes=_itemProviderDataTypes - In the implementation block
@property (nonatomic,copy) NSArray * itemProviderFileTypes;                                       //@synthesize itemProviderFileTypes=_itemProviderFileTypes - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSArray * contentTypeTree;                                             //@synthesize contentTypeTree=_contentTypeTree - In the implementation block
@property (assign,nonatomic) long long dataOwnerType;                                             //@synthesize dataOwnerType=_dataOwnerType - In the implementation block
@property (nonatomic,copy) NSString * fileProviderIdentifier;                                     //@synthesize fileProviderIdentifier=_fileProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * fileProviderDomainIdentifier;                               //@synthesize fileProviderDomainIdentifier=_fileProviderDomainIdentifier - In the implementation block
@property (nonatomic,copy) NSString * fbr;                                                        //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,copy) NSString * srf;                                                        //@synthesize srf=_srf - In the implementation block
@property (assign,nonatomic) BOOL doNotFold;                                                      //@synthesize doNotFold=_doNotFold - In the implementation block
@property (assign,nonatomic) unsigned long long blockId;                                          //@synthesize blockId=_blockId - In the implementation block
@property (nonatomic,retain) NSData * entityData;                                                 //@synthesize entityData=_entityData - In the implementation block
+(id)safari_sfSearchResultWithUniqueIdentifier;
+(BOOL)supportsSecureCoding;
-(long long)parsecQueryID;
-(void)setParsecQueryID:(long long)arg1 ;
-(SFSearchResult *)sfSearchResultValue;
-(NSString *)parsecDomainIdentifier;
-(unsigned long long)engagementDestination;
-(id)_firstCardSectionOfClass:(Class)arg1 ofCard:(id)arg2 outIndex:(unsigned long long*)arg3 ;
-(id)safari_firstCardSectionOfClass:(Class)arg1 ;
-(id)safari_firstInlineCardSectionOfClass:(Class)arg1 ;
-(unsigned long long)safari_indexOfFirstInlineCardSectionOfClass:(Class)arg1 ;
-(NSString *)safari_loggingDescription;
-(NSString *)userActivityRequiredString;
-(void)setPersonalizationScore:(double)arg1 ;
-(double)personalizationScore;
-(NSString *)fbr;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)srf;
-(SFCard *)card;
-(void)setResultType:(NSString *)arg1 ;
-(NSString *)contactIdentifier;
-(void)setCompletion:(NSString *)arg1 ;
-(BOOL)isStreaming;
-(int)placement;
-(void)setAuxiliaryTopText:(NSString *)arg1 ;
-(void)setAuxiliaryMiddleText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomTextColor:(int)arg1 ;
-(void)setResultBundleId:(NSString *)arg1 ;
-(void)setFbr:(NSString *)arg1 ;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setMapsMoreURL:(NSURL *)arg1 ;
-(void)setMapsMoreString:(NSString *)arg1 ;
-(void)setMapsMoreIcon:(SFImage *)arg1 ;
-(void)setNearbyBusinessesString:(NSString *)arg1 ;
-(void)setAppleReferrer:(NSString *)arg1 ;
-(void)setSectionBundleIdentifier:(NSString *)arg1 ;
-(void)setCompactCard:(SFCard *)arg1 ;
-(unsigned long long)queryId;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(void)setMoreResultsPunchout:(SFPunchout *)arg1 ;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1 ;
-(void)setSectionHeaderMore:(NSString *)arg1 ;
-(void)setTitleNote:(NSString *)arg1 ;
-(NSString *)mediaType;
-(void)setSectionHeaderMoreURL:(NSURL *)arg1 ;
-(void)setResultTemplate:(NSString *)arg1 ;
-(void)setIsQuickGlance:(BOOL)arg1 ;
-(void)setRenderHorizontallyWithOtherResultsInCategory:(BOOL)arg1 ;
-(void)setEngagementScore:(NSNumber *)arg1 ;
-(void)setQueryIndependentScore:(NSNumber *)arg1 ;
-(void)setTitleNoteSize:(NSNumber *)arg1 ;
-(SFImage *)thumbnail;
-(void)setCompletedQuery:(NSString *)arg1 ;
-(void)setIsCentered:(BOOL)arg1 ;
-(void)setEntityData:(NSData *)arg1 ;
-(void)setServerFeatures:(NSDictionary *)arg1 ;
-(void)setNoGoTakeover:(BOOL)arg1 ;
-(void)setShouldUseCompactDisplay:(BOOL)arg1 ;
-(void)setPreferTopPlatter:(BOOL)arg1 ;
-(void)setAlternativeURLs:(NSArray *)arg1 ;
-(void)setIsStreaming:(BOOL)arg1 ;
-(void)setCard:(SFCard *)arg1 ;
-(NSString *)calendarIdentifier;
-(void)setContentTypeTree:(NSArray *)arg1 ;
-(NSString *)contentType;
-(int)topHit;
-(void)setPlacement:(int)arg1 ;
-(SFImage *)icon;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(SFText *)arg1 ;
-(SFCard *)inlineCard;
-(void)setDoNotFold:(BOOL)arg1 ;
-(NSData *)mapsData;
-(void)setMapsResultType:(NSString *)arg1 ;
-(NSString *)resultType;
-(void)setMapsData:(NSData *)arg1 ;
-(void)setIcon:(SFImage *)arg1 ;
-(SFActionItem *)action;
-(NSString *)completion;
-(void)setRankingScore:(double)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setAction:(SFActionItem *)arg1 ;
-(BOOL)preventThumbnailImageScaling;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(NSURL *)url;
-(SFCustom *)customProperties;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(void)setFootnote:(NSString *)arg1 ;
-(SFPunchout *)moreResultsPunchout;
-(void)setSrf:(NSString *)arg1 ;
-(unsigned long long)blockId;
-(void)setDescriptions:(NSArray *)arg1 ;
-(void)setInlineCard:(SFCard *)arg1 ;
-(void)setSourceName:(NSString *)arg1 ;
-(SFCard *)compactCard;
-(SFImage *)completionImage;
-(NSURL *)mapsMoreURL;
-(NSString *)mapsMoreString;
-(SFImage *)mapsMoreIcon;
-(NSString *)nearbyBusinessesString;
-(NSURL *)sectionHeaderMoreURL;
-(NSString *)resultTemplate;
-(NSNumber *)queryIndependentScore;
-(NSString *)titleNote;
-(NSNumber *)titleNoteSize;
-(void)setUserActivityRequiredString:(NSString *)arg1 ;
-(NSArray *)itemProviderDataTypes;
-(void)setItemProviderDataTypes:(NSArray *)arg1 ;
-(NSArray *)itemProviderFileTypes;
-(void)setItemProviderFileTypes:(NSArray *)arg1 ;
-(NSString *)fileProviderIdentifier;
-(void)setFileProviderIdentifier:(NSString *)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(void)setLocalFeatures:(NSDictionary *)arg1 ;
-(void)setIsStaticCorrection:(BOOL)arg1 ;
-(void)setIntendedQuery:(NSString *)arg1 ;
-(void)setCorrectedQuery:(NSString *)arg1 ;
-(void)setIsLocalApplicationResult:(BOOL)arg1 ;
-(void)setPubliclyIndexable:(BOOL)arg1 ;
-(void)setUserInput:(NSString *)arg1 ;
-(void)setIsFuzzyMatch:(BOOL)arg1 ;
-(void)setWasCompact:(BOOL)arg1 ;
-(void)setDidTakeoverGo:(BOOL)arg1 ;
-(void)setUsesCompactDisplay:(BOOL)arg1 ;
-(NSDictionary *)localFeatures;
-(BOOL)isStaticCorrection;
-(NSString *)intendedQuery;
-(NSString *)correctedQuery;
-(NSString *)completedQuery;
-(BOOL)isLocalApplicationResult;
-(BOOL)publiclyIndexable;
-(BOOL)isFuzzyMatch;
-(NSString *)resultBundleId;
-(NSData *)entityData;
-(NSString *)sectionBundleIdentifier;
-(BOOL)shouldUseCompactDisplay;
-(BOOL)noGoTakeover;
-(BOOL)preferTopPlatter;
-(BOOL)wasCompact;
-(BOOL)didTakeoverGo;
-(BOOL)usesCompactDisplay;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)userInput;
-(NSNumber *)maxAge;
-(SFMoreResults *)moreResults;
-(void)setMoreResults:(SFMoreResults *)arg1 ;
-(NSDictionary *)serverFeatures;
-(void)setSectionHeader:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSNumber *)engagementScore;
-(BOOL)isQuickGlance;
-(NSString *)appleReferrer;
-(BOOL)renderHorizontallyWithOtherResultsInCategory;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(NSArray *)alternativeURLs;
-(long long)dataOwnerType;
-(NSString *)sectionHeaderMore;
-(void)setDataOwnerType:(long long)arg1 ;
-(BOOL)compareWithResult:(id)arg1 logger:(/*^block*/id)arg2 ;
-(double)rankingScore;
-(void)setUrl:(NSURL *)arg1 ;
-(SFPunchout *)punchout;
-(int)type;
-(NSArray *)descriptions;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setFileProviderDomainIdentifier:(NSString *)arg1 ;
-(NSString *)fileProviderDomainIdentifier;
-(NSString *)mapsResultType;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)footnote;
-(NSArray *)contentTypeTree;
-(void)setContentType:(NSString *)arg1 ;
-(void)setServerScore:(double)arg1 ;
-(double)serverScore;
-(void)setTopHit:(int)arg1 ;
-(NSString *)publishDate;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)secondaryTitle;
-(NSString *)identifier;
-(void)setMaxAge:(NSNumber *)arg1 ;
-(void)setBlockId:(unsigned long long)arg1 ;
-(BOOL)doNotFold;
-(NSString *)sectionHeader;
-(void)setThumbnail:(SFImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sourceName;
-(NSString *)storeIdentifier;
-(void)setCustomProperties:(SFCustom *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(void)setPublishDate:(NSString *)arg1 ;
-(SFText *)title;
-(BOOL)isCentered;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
-(void)setCompletionImage:(SFImage *)arg1 ;
@end

