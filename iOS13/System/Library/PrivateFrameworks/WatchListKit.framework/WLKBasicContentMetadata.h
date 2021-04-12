/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, NSURL, WLKArtworkVariantListing, NSNumber, NSArray, WLKVideo, NSDictionary, WLKContentRating;

@interface WLKBasicContentMetadata : NSObject {

	NSString* _contentTypeString;
	BOOL _isEvod;
	BOOL _appleOriginal;
	unsigned long long _contentType;
	NSString* _canonicalID;
	NSURL* _tvAppDeeplinkURL;
	NSString* _title;
	NSString* _shortTitle;
	NSString* _descriptiveText;
	WLKArtworkVariantListing* _images;
	NSNumber* _commonSenseRecommendedAge;
	NSArray* _categories;
	NSArray* _genres;
	WLKVideo* _backgroundVideo;
	NSArray* _trailers;
	NSDictionary* _rolesSummary;
	WLKContentRating* _contentRating;

}

@property (nonatomic,readonly) unsigned long long contentType;                         //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                            //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * tvAppDeeplinkURL;                          //@synthesize tvAppDeeplinkURL=_tvAppDeeplinkURL - In the implementation block
@property (nonatomic,readonly) BOOL isEvod;                                            //@synthesize isEvod=_isEvod - In the implementation block
@property (getter=isAppleOriginal,nonatomic,readonly) BOOL appleOriginal;              //@synthesize appleOriginal=_appleOriginal - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortTitle;                             //@synthesize shortTitle=_shortTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveText;                        //@synthesize descriptiveText=_descriptiveText - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * images;                      //@synthesize images=_images - In the implementation block
@property (nonatomic,readonly) NSNumber * commonSenseRecommendedAge;                   //@synthesize commonSenseRecommendedAge=_commonSenseRecommendedAge - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categories;                              //@synthesize categories=_categories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * genres;                                  //@synthesize genres=_genres - In the implementation block
@property (nonatomic,readonly) WLKVideo * backgroundVideo;                             //@synthesize backgroundVideo=_backgroundVideo - In the implementation block
@property (nonatomic,readonly) NSArray * trailers;                                     //@synthesize trailers=_trailers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * rolesSummary;                       //@synthesize rolesSummary=_rolesSummary - In the implementation block
@property (nonatomic,readonly) WLKContentRating * contentRating;                       //@synthesize contentRating=_contentRating - In the implementation block
+(unsigned long long)contentTypeForString:(id)arg1 ;
+(Class)_classForContentType:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(unsigned long long)contentType;
-(WLKArtworkVariantListing *)images;
-(NSArray *)categories;
-(NSString *)shortTitle;
-(NSString *)descriptiveText;
-(WLKContentRating *)contentRating;
-(NSArray *)genres;
-(BOOL)isEvod;
-(NSString *)canonicalID;
-(NSURL *)tvAppDeeplinkURL;
-(NSNumber *)commonSenseRecommendedAge;
-(BOOL)isAppleOriginal;
-(WLKVideo *)backgroundVideo;
-(NSArray *)trailers;
-(NSDictionary *)rolesSummary;
@end

