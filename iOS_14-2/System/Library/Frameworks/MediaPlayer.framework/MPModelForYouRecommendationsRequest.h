/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest {

	BOOL _withSocial;
	BOOL _withPlainEditorialNotes;
	BOOL _withRecentlyPlayed;
	long long _filteringPolicy;
	long long _requestEndpoint;
	long long _mode;
	long long _types;
	long long _displayFilterKinds;
	NSURL* _customForYouURL;

}

@property (assign,nonatomic) long long filteringPolicy;                 //@synthesize filteringPolicy=_filteringPolicy - In the implementation block
@property (assign,nonatomic) long long requestEndpoint;                 //@synthesize requestEndpoint=_requestEndpoint - In the implementation block
@property (assign,nonatomic) long long mode;                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long types;                           //@synthesize types=_types - In the implementation block
@property (assign,nonatomic) BOOL withSocial;                           //@synthesize withSocial=_withSocial - In the implementation block
@property (assign,nonatomic) BOOL withPlainEditorialNotes;              //@synthesize withPlainEditorialNotes=_withPlainEditorialNotes - In the implementation block
@property (assign,nonatomic) long long displayFilterKinds;              //@synthesize displayFilterKinds=_displayFilterKinds - In the implementation block
@property (assign,nonatomic) BOOL withRecentlyPlayed;                   //@synthesize withRecentlyPlayed=_withRecentlyPlayed - In the implementation block
@property (nonatomic,copy) NSURL * customForYouURL;                     //@synthesize customForYouURL=_customForYouURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(long long)types;
-(long long)mode;
-(void)setWithRecentlyPlayed:(BOOL)arg1 ;
-(id)init;
-(long long)displayFilterKinds;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setWithSocial:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)setCustomForYouURL:(NSURL *)arg1 ;
-(BOOL)withRecentlyPlayed;
-(BOOL)withSocial;
-(void)setRequestEndpoint:(long long)arg1 ;
-(void)setFilteringPolicy:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)filteringPolicy;
-(BOOL)withPlainEditorialNotes;
-(void)setTypes:(long long)arg1 ;
-(void)setDisplayFilterKinds:(long long)arg1 ;
-(long long)requestEndpoint;
-(void)setWithPlainEditorialNotes:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)customForYouURL;
@end

