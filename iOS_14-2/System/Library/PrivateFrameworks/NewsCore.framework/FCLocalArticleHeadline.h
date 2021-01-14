/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)contentURL;
-(id)thumbnail;
-(id)lastModifiedDate;
-(unsigned long long)contentType;
-(id)topicIDs;
-(id)shortExcerpt;
-(double)videoDuration;
-(NSString *)path;
-(BOOL)isDraft;
-(CGSize)thumbnailSize;
-(BOOL)isFeatureCandidate;
-(id)thumbnailAssetHandle;
-(id)articleID;
-(id)iAdCategories;
-(BOOL)hasThumbnail;
-(id)contentManifestWithContext:(id)arg1 ;
-(id<FCChannelProviding>)channel;
-(id)surfacedByBinID;
-(BOOL)webEmbedsEnabled;
-(BOOL)isDeleted;
-(id)accessoryText;
-(NSDictionary *)dictionary;
-(BOOL)useTransparentNavigationBar;
-(BOOL)isLocalDraft;
-(id)primaryAudience;
-(id)iAdKeywords;
-(id)videoURL;
-(id)publishDate;
-(id)identifier;
-(id)allowedStorefrontIDs;
-(BOOL)isSponsored;
-(BOOL)isPremium;
-(id)blockedStorefrontIDs;
-(id)localDraftPath;
-(id)iAdSectionIDs;
-(id)initWithDictionary:(id)arg1 path:(id)arg2 channel:(id)arg3 ;
-(id)sourceChannel;
-(id)sourceName;
-(id)title;
@end

