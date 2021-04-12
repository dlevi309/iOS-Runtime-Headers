/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

@class NSString, NSDate, NSURL, NSArray, SFSearchResult;


@protocol NTHeadlineProviding <NSObject,NFCopying,NSSecureCoding,NTTodayItem>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * titleCompact; 
@property (nonatomic,copy,readonly) NSString * shortExcerpt; 
@property (nonatomic,copy,readonly) NSDate * ageDisplayDate; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,copy,readonly) NSString * compactSourceName; 
@property (nonatomic,copy,readonly) NSString * sourceTagID; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,copy,readonly) NSURL * sourceNameImageRemoteURL; 
@property (nonatomic,readonly) double sourceNameImageScale; 
@property (nonatomic,copy,readonly) NSURL * compactSourceNameImageRemoteURL; 
@property (nonatomic,copy,readonly) NSURL * thumbnailRemoteURL; 
@property (nonatomic,copy) NSString * thumbnailIdentifier; 
@property (nonatomic,readonly) unsigned long long thumbnailSizePreset; 
@property (nonatomic,readonly) CGRect thumbnailFocalFrame; 
@property (nonatomic,copy,readonly) NSURL * webURL; 
@property (nonatomic,copy,readonly) NSURL * NewsURL; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * storyType; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,copy,readonly) SFSearchResult * searchResult; 
@property (nonatomic,copy,readonly) NSURL * videoURL; 
@property (nonatomic,readonly) double videoDuration; 
@property (nonatomic,readonly) BOOL displaysWithLeadingCellAppearance; 
@property (nonatomic,readonly) BOOL supportsSavingForLater; 
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext; 
@property (nonatomic,copy,readonly) NSObject*<NTHeadlineAnalyticsElementProviding> analyticsElement; 
@property (nonatomic,copy,readonly) NSObject*<NTHeadlineAdElement> adElement; 
@property (nonatomic,copy,readonly) NSObject*<NTHeadlinePersonalizationMetadata> personalizationMetadata; 
@property (nonatomic,copy,readonly) NSObject*<NTHeadlineBackingElement> backingElement; 
@property (nonatomic,copy,readonly) NSURL * flintDocumentURL; 
@property (nonatomic,copy,readonly) NSString * videoCallToActionTitle; 
@property (nonatomic,copy,readonly) NSURL * videoCallToActionURL; 
@required
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)language;
-(NSURL *)webURL;
-(SFSearchResult *)searchResult;
-(NSString *)sourceName;
-(NSString *)thumbnailIdentifier;
-(void)setThumbnailIdentifier:(id)arg1;
-(NSURL *)videoURL;
-(double)videoDuration;
-(NSString *)shortExcerpt;
-(NSArray *)topicIDs;
-(NSURL *)flintDocumentURL;
-(NSString *)storyType;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isHiddenFromAutoFavorites;
-(CGRect)thumbnailFocalFrame;
-(BOOL)isBoundToContext;
-(NSString *)titleCompact;
-(NSString *)videoCallToActionTitle;
-(NSURL *)videoCallToActionURL;
-(NSString *)sourceTagID;
-(NSObject*<NTHeadlinePersonalizationMetadata>)personalizationMetadata;
-(NSURL *)sourceNameImageRemoteURL;
-(NSDate *)ageDisplayDate;
-(NSString *)compactSourceName;
-(double)sourceNameImageScale;
-(NSURL *)compactSourceNameImageRemoteURL;
-(NSURL *)thumbnailRemoteURL;
-(unsigned long long)thumbnailSizePreset;
-(NSURL *)NewsURL;
-(NSObject*<NTHeadlineAnalyticsElementProviding>)analyticsElement;
-(NSObject*<NTHeadlineAdElement>)adElement;
-(BOOL)displaysWithLeadingCellAppearance;
-(BOOL)supportsSavingForLater;
-(NSObject*<NTHeadlineBackingElement>)backingElement;

@end

