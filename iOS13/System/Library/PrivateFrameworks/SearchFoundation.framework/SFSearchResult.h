/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
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
-(int)type;
-(void)setType:(int)arg1;
-(NSString *)calendarIdentifier;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSURL *)url;
-(SFText *)title;
-(void)setTitle:(id)arg1;
-(NSString *)contentType;
-(void)setContentType:(id)arg1;
-(NSString *)resultType;
-(SFActionItem *)action;
-(NSString *)mediaType;
-(NSString *)userActivityRequiredString;
-(void)setResultType:(id)arg1;
-(NSString *)contactIdentifier;
-(NSArray *)contentTypeTree;
-(void)setCompletion:(id)arg1;
-(NSString *)completion;
-(void)setUrl:(id)arg1;
-(SFCustom *)customProperties;
-(SFImage *)icon;
-(void)setAction:(id)arg1;
-(void)setIcon:(id)arg1;
-(void)setSectionHeader:(id)arg1;
-(int)placement;
-(void)setPlacement:(int)arg1;
-(NSString *)userInput;
-(NSString *)sectionHeader;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(NSString *)applicationBundleIdentifier;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(id)arg1;
-(SFImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(NSString *)sourceName;
-(void)setSourceName:(id)arg1;
-(NSData *)mapsData;
-(SFCard *)card;
-(NSNumber *)maxAge;
-(void)setMapsData:(id)arg1;
-(void)setContactIdentifier:(id)arg1;
-(void)setMediaType:(id)arg1;
-(void)setCustomProperties:(id)arg1;
-(BOOL)isCentered;
-(void)setIsCentered:(BOOL)arg1;
-(SFPunchout *)punchout;
-(void)setPunchout:(id)arg1;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(NSString *)footnote;
-(void)setFootnote:(id)arg1;
-(void)setQueryId:(unsigned long long)arg1;
-(unsigned long long)queryId;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1;
-(void)setSecondaryTitle:(id)arg1;
-(void)setSecondaryTitleImage:(id)arg1;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1;
-(BOOL)preventThumbnailImageScaling;
-(NSString *)secondaryTitle;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(NSArray *)descriptions;
-(void)setDescriptions:(id)arg1;
-(void)setAuxiliaryTopText:(id)arg1;
-(void)setAuxiliaryMiddleText:(id)arg1;
-(void)setAuxiliaryBottomText:(id)arg1;
-(void)setAuxiliaryBottomTextColor:(int)arg1;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(double)personalizationScore;
-(void)setPersonalizationScore:(double)arg1;
-(double)rankingScore;
-(NSString *)completedQuery;
-(NSString *)correctedQuery;
-(NSString *)intendedQuery;
-(NSString *)srf;
-(BOOL)isLocalApplicationResult;
-(BOOL)isStaticCorrection;
-(NSDictionary *)localFeatures;
-(BOOL)publiclyIndexable;
-(NSString *)resultBundleId;
-(NSString *)sectionBundleIdentifier;
-(int)topHit;
-(SFCard *)inlineCard;
-(BOOL)doNotFold;
-(unsigned long long)blockId;
-(void)setRankingScore:(double)arg1;
-(void)setCard:(id)arg1;
-(void)setTopHit:(int)arg1;
-(void)setLocalFeatures:(id)arg1;
-(NSDictionary *)serverFeatures;
-(void)setServerFeatures:(id)arg1;
-(void)setResultBundleId:(id)arg1;
-(void)setSectionBundleIdentifier:(id)arg1;
-(void)setIntendedQuery:(id)arg1;
-(void)setCompletedQuery:(id)arg1;
-(void)setCorrectedQuery:(id)arg1;
-(void)setIsStaticCorrection:(BOOL)arg1;
-(void)setIsLocalApplicationResult:(BOOL)arg1;
-(void)setPubliclyIndexable:(BOOL)arg1;
-(void)setUserInput:(id)arg1;
-(void)setSrf:(id)arg1;
-(void)setDoNotFold:(BOOL)arg1;
-(void)setBlockId:(unsigned long long)arg1;
-(NSData *)entityData;
-(void)setEntityData:(id)arg1;
-(NSString *)publishDate;
-(void)setPublishDate:(id)arg1;
-(SFImage *)completionImage;
-(void)setCompletionImage:(id)arg1;
-(void)setCalendarIdentifier:(id)arg1;
-(NSString *)mapsResultType;
-(void)setMapsResultType:(id)arg1;
-(NSURL *)mapsMoreURL;
-(void)setMapsMoreURL:(id)arg1;
-(NSString *)mapsMoreString;
-(void)setMapsMoreString:(id)arg1;
-(SFImage *)mapsMoreIcon;
-(void)setMapsMoreIcon:(id)arg1;
-(NSString *)nearbyBusinessesString;
-(void)setNearbyBusinessesString:(id)arg1;
-(NSString *)appleReferrer;
-(void)setAppleReferrer:(id)arg1;
-(void)setInlineCard:(id)arg1;
-(SFMoreResults *)moreResults;
-(void)setMoreResults:(id)arg1;
-(SFPunchout *)moreResultsPunchout;
-(void)setMoreResultsPunchout:(id)arg1;
-(void)setUserActivityRequiredString:(id)arg1;
-(NSString *)sectionHeaderMore;
-(void)setSectionHeaderMore:(id)arg1;
-(NSURL *)sectionHeaderMoreURL;
-(void)setSectionHeaderMoreURL:(id)arg1;
-(BOOL)renderHorizontallyWithOtherResultsInCategory;
-(void)setRenderHorizontallyWithOtherResultsInCategory:(BOOL)arg1;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1;
-(double)serverScore;
-(void)setServerScore:(double)arg1;
-(NSString *)resultTemplate;
-(void)setResultTemplate:(id)arg1;
-(BOOL)isQuickGlance;
-(void)setIsQuickGlance:(BOOL)arg1;
-(BOOL)isStreaming;
-(void)setIsStreaming:(BOOL)arg1;
-(NSNumber *)engagementScore;
-(void)setEngagementScore:(id)arg1;
-(NSNumber *)queryIndependentScore;
-(void)setQueryIndependentScore:(id)arg1;
-(void)setMaxAge:(id)arg1;
-(NSString *)titleNote;
-(void)setTitleNote:(id)arg1;
-(NSNumber *)titleNoteSize;
-(void)setTitleNoteSize:(id)arg1;
-(NSArray *)itemProviderDataTypes;
-(void)setItemProviderDataTypes:(id)arg1;
-(NSArray *)itemProviderFileTypes;
-(void)setItemProviderFileTypes:(id)arg1;
-(void)setContentTypeTree:(id)arg1;
-(long long)dataOwnerType;
-(void)setDataOwnerType:(long long)arg1;
-(NSString *)fileProviderIdentifier;
-(void)setFileProviderIdentifier:(id)arg1;
-(NSString *)fileProviderDomainIdentifier;
-(void)setFileProviderDomainIdentifier:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SFImage, SFText, NSArray, NSURL, SFActionItem, SFPunchout, NSData, SFCard, SFMoreResults, SFCustom, NSNumber, NSDictionary;

@interface SFSearchResult : NSObject <SFJSONSerializable, SFSearchResult, NSSecureCoding, NSCopying> {

	BOOL _preventThumbnailImageScaling;
	BOOL _isSecondaryTitleDetached;
	BOOL _isCentered;
	BOOL _isLocalApplicationResult;
	BOOL _renderHorizontallyWithOtherResultsInCategory;
	BOOL _isQuickGlance;
	BOOL _isStreaming;
	BOOL _isStaticCorrection;
	BOOL _isFuzzyMatch;
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
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)url;
-(SFText *)title;
-(void)setTitle:(SFText *)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)resultType;
-(SFActionItem *)action;
-(NSString *)mediaType;
-(NSString *)userActivityRequiredString;
-(void)setResultType:(NSString *)arg1 ;
-(NSString *)contactIdentifier;
-(NSArray *)contentTypeTree;
-(void)setCompletion:(NSString *)arg1 ;
-(NSString *)completion;
-(void)setUrl:(NSURL *)arg1 ;
-(SFCustom *)customProperties;
-(SFImage *)icon;
-(void)setAction:(SFActionItem *)arg1 ;
-(void)setIcon:(SFImage *)arg1 ;
-(void)setSectionHeader:(NSString *)arg1 ;
-(int)placement;
-(void)setPlacement:(int)arg1 ;
-(NSString *)userInput;
-(NSString *)sectionHeader;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(SFImage *)thumbnail;
-(void)setThumbnail:(SFImage *)arg1 ;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(NSData *)mapsData;
-(SFCard *)card;
-(NSNumber *)maxAge;
-(void)setMapsData:(NSData *)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setCustomProperties:(SFCustom *)arg1 ;
-(NSData *)jsonData;
-(BOOL)isCentered;
-(void)setIsCentered:(BOOL)arg1 ;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(unsigned long long)queryId;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(void)setSecondaryTitleImage:(SFImage *)arg1 ;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1 ;
-(BOOL)preventThumbnailImageScaling;
-(NSString *)secondaryTitle;
-(SFImage *)secondaryTitleImage;
-(BOOL)isSecondaryTitleDetached;
-(NSArray *)descriptions;
-(void)setDescriptions:(NSArray *)arg1 ;
-(void)setAuxiliaryTopText:(NSString *)arg1 ;
-(void)setAuxiliaryMiddleText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomTextColor:(int)arg1 ;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(double)personalizationScore;
-(void)setPersonalizationScore:(double)arg1 ;
-(double)rankingScore;
-(NSString *)completedQuery;
-(NSString *)correctedQuery;
-(NSString *)intendedQuery;
-(NSString *)srf;
-(BOOL)isLocalApplicationResult;
-(BOOL)isStaticCorrection;
-(BOOL)isFuzzyMatch;
-(NSDictionary *)localFeatures;
-(BOOL)publiclyIndexable;
-(NSString *)resultBundleId;
-(NSString *)sectionBundleIdentifier;
-(int)topHit;
-(SFCard *)inlineCard;
-(BOOL)doNotFold;
-(unsigned long long)blockId;
-(void)setRankingScore:(double)arg1 ;
-(void)setCard:(SFCard *)arg1 ;
-(void)setTopHit:(int)arg1 ;
-(void)setLocalFeatures:(NSDictionary *)arg1 ;
-(NSDictionary *)serverFeatures;
-(void)setServerFeatures:(NSDictionary *)arg1 ;
-(void)setResultBundleId:(NSString *)arg1 ;
-(void)setSectionBundleIdentifier:(NSString *)arg1 ;
-(void)setIntendedQuery:(NSString *)arg1 ;
-(void)setCompletedQuery:(NSString *)arg1 ;
-(void)setCorrectedQuery:(NSString *)arg1 ;
-(void)setIsStaticCorrection:(BOOL)arg1 ;
-(void)setIsFuzzyMatch:(BOOL)arg1 ;
-(void)setIsLocalApplicationResult:(BOOL)arg1 ;
-(void)setPubliclyIndexable:(BOOL)arg1 ;
-(void)setUserInput:(NSString *)arg1 ;
-(void)setSrf:(NSString *)arg1 ;
-(void)setDoNotFold:(BOOL)arg1 ;
-(void)setBlockId:(unsigned long long)arg1 ;
-(NSData *)entityData;
-(void)setEntityData:(NSData *)arg1 ;
-(NSString *)publishDate;
-(void)setPublishDate:(NSString *)arg1 ;
-(SFImage *)completionImage;
-(void)setCompletionImage:(SFImage *)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(NSString *)mapsResultType;
-(void)setMapsResultType:(NSString *)arg1 ;
-(NSURL *)mapsMoreURL;
-(void)setMapsMoreURL:(NSURL *)arg1 ;
-(NSString *)mapsMoreString;
-(void)setMapsMoreString:(NSString *)arg1 ;
-(SFImage *)mapsMoreIcon;
-(void)setMapsMoreIcon:(SFImage *)arg1 ;
-(NSString *)nearbyBusinessesString;
-(void)setNearbyBusinessesString:(NSString *)arg1 ;
-(NSString *)appleReferrer;
-(void)setAppleReferrer:(NSString *)arg1 ;
-(void)setInlineCard:(SFCard *)arg1 ;
-(SFMoreResults *)moreResults;
-(void)setMoreResults:(SFMoreResults *)arg1 ;
-(SFPunchout *)moreResultsPunchout;
-(void)setMoreResultsPunchout:(SFPunchout *)arg1 ;
-(void)setUserActivityRequiredString:(NSString *)arg1 ;
-(NSString *)sectionHeaderMore;
-(void)setSectionHeaderMore:(NSString *)arg1 ;
-(NSURL *)sectionHeaderMoreURL;
-(void)setSectionHeaderMoreURL:(NSURL *)arg1 ;
-(BOOL)renderHorizontallyWithOtherResultsInCategory;
-(void)setRenderHorizontallyWithOtherResultsInCategory:(BOOL)arg1 ;
-(unsigned long long)minimumRankOfTopHitToSuppressResult;
-(void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1 ;
-(double)serverScore;
-(void)setServerScore:(double)arg1 ;
-(NSString *)resultTemplate;
-(void)setResultTemplate:(NSString *)arg1 ;
-(BOOL)isQuickGlance;
-(void)setIsQuickGlance:(BOOL)arg1 ;
-(BOOL)isStreaming;
-(void)setIsStreaming:(BOOL)arg1 ;
-(NSNumber *)engagementScore;
-(void)setEngagementScore:(NSNumber *)arg1 ;
-(NSNumber *)queryIndependentScore;
-(void)setQueryIndependentScore:(NSNumber *)arg1 ;
-(void)setMaxAge:(NSNumber *)arg1 ;
-(NSString *)titleNote;
-(void)setTitleNote:(NSString *)arg1 ;
-(NSNumber *)titleNoteSize;
-(void)setTitleNoteSize:(NSNumber *)arg1 ;
-(NSArray *)itemProviderDataTypes;
-(void)setItemProviderDataTypes:(NSArray *)arg1 ;
-(NSArray *)itemProviderFileTypes;
-(void)setItemProviderFileTypes:(NSArray *)arg1 ;
-(void)setContentTypeTree:(NSArray *)arg1 ;
-(long long)dataOwnerType;
-(void)setDataOwnerType:(long long)arg1 ;
-(NSString *)fileProviderIdentifier;
-(void)setFileProviderIdentifier:(NSString *)arg1 ;
-(NSString *)fileProviderDomainIdentifier;
-(void)setFileProviderDomainIdentifier:(NSString *)arg1 ;
@end

