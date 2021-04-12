/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCHeadline.h>

@protocol FCChannelProviding;
@class FCHeadlineThumbnail, NSDictionary, NSString;

@interface FCLocalArticleHeadline : FCHeadline {

	BOOL _webEmbedsEnabled;
	FCHeadlineThumbnail* _thumbnail;
	NSDictionary* _dictionary;
	NSString* _path;
	id<FCChannelProviding> _channel;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                   //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
-(NSDictionary *)dictionary;
-(id)identifier;
-(NSString *)path;
-(id)title;
-(unsigned long long)contentType;
-(BOOL)hasThumbnail;
-(id)contentURL;
-(id<FCChannelProviding>)channel;
-(BOOL)isDeleted;
-(id)thumbnail;
-(id)lastModifiedDate;
-(id)sourceName;
-(CGSize)thumbnailSize;
-(id)publishDate;
-(id)videoURL;
-(double)videoDuration;
-(BOOL)isPremium;
-(BOOL)isDraft;
-(id)accessoryText;
-(id)sourceChannel;
-(id)articleID;
-(id)thumbnailAssetHandle;
-(id)localDraftPath;
-(id)contentManifestWithContext:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 path:(id)arg2 channel:(id)arg3 ;
-(id)primaryAudience;
-(id)shortExcerpt;
-(id)topicIDs;
-(BOOL)isFeatureCandidate;
-(BOOL)isSponsored;
-(id)iAdCategories;
-(id)iAdKeywords;
-(id)iAdSectionIDs;
-(id)blockedStorefrontIDs;
-(id)allowedStorefrontIDs;
-(BOOL)isLocalDraft;
-(id)surfacedByBinID;
-(BOOL)useTransparentNavigationBar;
-(BOOL)webEmbedsEnabled;
@end

