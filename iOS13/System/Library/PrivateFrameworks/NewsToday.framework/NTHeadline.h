/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTHeadlineProviding.h>

@class NSString, NSDate, NSURL, NSArray, SFSearchResult, NTPBHeadlineAnalyticsElement, NTPBHeadlineAdElement, NTHeadlinePersonalizationMetadata, NTPBHeadlineBackingElement;

@interface NTHeadline : NSObject <NTHeadlineProviding> {

	BOOL _needsSeenStateTracking;
	BOOL _displaysWithLeadingCellAppearance;
	BOOL _supportsSavingForLater;
	BOOL _boundToContext;
	BOOL _hiddenFromFeeds;
	BOOL _hiddenFromAutoFavorites;
	NSString* _title;
	NSString* _titleCompact;
	NSString* _shortExcerpt;
	NSDate* _ageDisplayDate;
	NSString* _sourceName;
	NSString* _compactSourceName;
	NSString* _sourceTagID;
	NSString* _language;
	NSURL* _sourceNameImageRemoteURL;
	double _sourceNameImageScale;
	NSURL* _compactSourceNameImageRemoteURL;
	NSURL* _thumbnailRemoteURL;
	NSString* _thumbnailIdentifier;
	unsigned long long _thumbnailSizePreset;
	NSURL* _webURL;
	NSURL* _NewsURL;
	NSString* _storyType;
	NSArray* _topicIDs;
	SFSearchResult* _searchResult;
	NSURL* _videoURL;
	double _videoDuration;
	NTPBHeadlineAnalyticsElement* _analyticsElement;
	NTPBHeadlineAdElement* _adElement;
	NTHeadlinePersonalizationMetadata* _personalizationMetadata;
	NTPBHeadlineBackingElement* _backingElement;
	NSString* _videoCallToActionTitle;
	NSURL* _videoCallToActionURL;
	NSURL* _flintDocumentURL;
	NSString* _identifier;
	CGRect _thumbnailFocalFrame;

}

@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleCompact;                                                      //@synthesize titleCompact=_titleCompact - In the implementation block
@property (nonatomic,copy) NSString * shortExcerpt;                                                      //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,copy) NSDate * ageDisplayDate;                                                      //@synthesize ageDisplayDate=_ageDisplayDate - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                                        //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,copy) NSString * compactSourceName;                                                 //@synthesize compactSourceName=_compactSourceName - In the implementation block
@property (nonatomic,copy) NSString * sourceTagID;                                                       //@synthesize sourceTagID=_sourceTagID - In the implementation block
@property (nonatomic,copy) NSString * language;                                                          //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSURL * sourceNameImageRemoteURL;                                             //@synthesize sourceNameImageRemoteURL=_sourceNameImageRemoteURL - In the implementation block
@property (assign,nonatomic) double sourceNameImageScale;                                                //@synthesize sourceNameImageScale=_sourceNameImageScale - In the implementation block
@property (nonatomic,copy) NSURL * compactSourceNameImageRemoteURL;                                      //@synthesize compactSourceNameImageRemoteURL=_compactSourceNameImageRemoteURL - In the implementation block
@property (nonatomic,copy) NSURL * thumbnailRemoteURL;                                                   //@synthesize thumbnailRemoteURL=_thumbnailRemoteURL - In the implementation block
@property (nonatomic,copy) NSString * thumbnailIdentifier;                                               //@synthesize thumbnailIdentifier=_thumbnailIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long thumbnailSizePreset;                                     //@synthesize thumbnailSizePreset=_thumbnailSizePreset - In the implementation block
@property (assign,nonatomic) CGRect thumbnailFocalFrame;                                                 //@synthesize thumbnailFocalFrame=_thumbnailFocalFrame - In the implementation block
@property (nonatomic,copy) NSURL * webURL;                                                               //@synthesize webURL=_webURL - In the implementation block
@property (nonatomic,copy) NSURL * NewsURL;                                                              //@synthesize NewsURL=_NewsURL - In the implementation block
@property (nonatomic,copy) NSString * storyType;                                                         //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,copy) NSArray * topicIDs;                                                           //@synthesize topicIDs=_topicIDs - In the implementation block
@property (nonatomic,copy) SFSearchResult * searchResult;                                                //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;                                                             //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) double videoDuration;                                                       //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,nonatomic) BOOL needsSeenStateTracking;                                                //@synthesize needsSeenStateTracking=_needsSeenStateTracking - In the implementation block
@property (assign,nonatomic) BOOL displaysWithLeadingCellAppearance;                                     //@synthesize displaysWithLeadingCellAppearance=_displaysWithLeadingCellAppearance - In the implementation block
@property (assign,nonatomic) BOOL supportsSavingForLater;                                                //@synthesize supportsSavingForLater=_supportsSavingForLater - In the implementation block
@property (assign,getter=isBoundToContext,nonatomic) BOOL boundToContext;                                //@synthesize boundToContext=_boundToContext - In the implementation block
@property (assign,getter=isHiddenFromFeeds,nonatomic) BOOL hiddenFromFeeds;                              //@synthesize hiddenFromFeeds=_hiddenFromFeeds - In the implementation block
@property (assign,getter=isHiddenFromAutoFavorites,nonatomic) BOOL hiddenFromAutoFavorites;              //@synthesize hiddenFromAutoFavorites=_hiddenFromAutoFavorites - In the implementation block
@property (nonatomic,copy) NTPBHeadlineAnalyticsElement * analyticsElement;                              //@synthesize analyticsElement=_analyticsElement - In the implementation block
@property (nonatomic,copy) NTPBHeadlineAdElement * adElement;                                            //@synthesize adElement=_adElement - In the implementation block
@property (nonatomic,copy) NTHeadlinePersonalizationMetadata * personalizationMetadata;                  //@synthesize personalizationMetadata=_personalizationMetadata - In the implementation block
@property (nonatomic,copy) NTPBHeadlineBackingElement * backingElement;                                  //@synthesize backingElement=_backingElement - In the implementation block
@property (nonatomic,copy) NSString * videoCallToActionTitle;                                            //@synthesize videoCallToActionTitle=_videoCallToActionTitle - In the implementation block
@property (nonatomic,copy) NSURL * videoCallToActionURL;                                                 //@synthesize videoCallToActionURL=_videoCallToActionURL - In the implementation block
@property (nonatomic,copy) NSURL * flintDocumentURL;                                                     //@synthesize flintDocumentURL=_flintDocumentURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long itemType; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(SFSearchResult *)searchResult;
-(void)setSearchResult:(SFSearchResult *)arg1 ;
-(unsigned long long)itemType;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(NSString *)thumbnailIdentifier;
-(void)setThumbnailIdentifier:(NSString *)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(double)videoDuration;
-(void)setVideoDuration:(double)arg1 ;
-(NSString *)shortExcerpt;
-(NSArray *)topicIDs;
-(NSURL *)flintDocumentURL;
-(NSString *)storyType;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isHiddenFromAutoFavorites;
-(CGRect)thumbnailFocalFrame;
-(void)setThumbnailFocalFrame:(CGRect)arg1 ;
-(void)setShortExcerpt:(NSString *)arg1 ;
-(void)setTopicIDs:(NSArray *)arg1 ;
-(void)setStoryType:(NSString *)arg1 ;
-(BOOL)isBoundToContext;
-(void)setTitleCompact:(NSString *)arg1 ;
-(void)setFlintDocumentURL:(NSURL *)arg1 ;
-(void)setVideoCallToActionTitle:(NSString *)arg1 ;
-(void)setVideoCallToActionURL:(NSURL *)arg1 ;
-(NSString *)titleCompact;
-(NSString *)videoCallToActionTitle;
-(NSURL *)videoCallToActionURL;
-(void)setNeedsSeenStateTracking:(BOOL)arg1 ;
-(BOOL)needsSeenStateTracking;
-(NSString *)sourceTagID;
-(void)setThumbnailRemoteURL:(NSURL *)arg1 ;
-(void)setAgeDisplayDate:(NSDate *)arg1 ;
-(void)setNewsURL:(NSURL *)arg1 ;
-(void)setThumbnailSizePreset:(unsigned long long)arg1 ;
-(void)setAnalyticsElement:(NTPBHeadlineAnalyticsElement *)arg1 ;
-(NTHeadlinePersonalizationMetadata *)personalizationMetadata;
-(void)setSourceNameImageRemoteURL:(NSURL *)arg1 ;
-(void)setSourceNameImageScale:(double)arg1 ;
-(void)setCompactSourceNameImageRemoteURL:(NSURL *)arg1 ;
-(void)setCompactSourceName:(NSString *)arg1 ;
-(void)setSourceTagID:(NSString *)arg1 ;
-(void)setAdElement:(NTPBHeadlineAdElement *)arg1 ;
-(void)setBackingElement:(NTPBHeadlineBackingElement *)arg1 ;
-(void)setDisplaysWithLeadingCellAppearance:(BOOL)arg1 ;
-(void)setSupportsSavingForLater:(BOOL)arg1 ;
-(void)setHiddenFromFeeds:(BOOL)arg1 ;
-(void)setHiddenFromAutoFavorites:(BOOL)arg1 ;
-(void)setBoundToContext:(BOOL)arg1 ;
-(void)setPersonalizationMetadata:(NTHeadlinePersonalizationMetadata *)arg1 ;
-(NSURL *)sourceNameImageRemoteURL;
-(NSDate *)ageDisplayDate;
-(NSString *)compactSourceName;
-(double)sourceNameImageScale;
-(NSURL *)compactSourceNameImageRemoteURL;
-(NSURL *)thumbnailRemoteURL;
-(unsigned long long)thumbnailSizePreset;
-(NSURL *)NewsURL;
-(NTPBHeadlineAnalyticsElement *)analyticsElement;
-(NTPBHeadlineAdElement *)adElement;
-(BOOL)displaysWithLeadingCellAppearance;
-(BOOL)supportsSavingForLater;
-(NTPBHeadlineBackingElement *)backingElement;
@end

