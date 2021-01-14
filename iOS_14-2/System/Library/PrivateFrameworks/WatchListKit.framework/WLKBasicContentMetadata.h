/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)contentType;
-(NSArray *)categories;
-(NSString *)canonicalID;
-(NSArray *)genres;
-(BOOL)isEvod;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(WLKContentRating *)contentRating;
-(NSString *)descriptiveText;
-(NSURL *)tvAppDeeplinkURL;
-(NSString *)shortTitle;
-(WLKArtworkVariantListing *)images;
-(NSString *)title;
-(NSNumber *)commonSenseRecommendedAge;
-(BOOL)isAppleOriginal;
-(WLKVideo *)backgroundVideo;
-(NSArray *)trailers;
-(NSDictionary *)rolesSummary;
@end

