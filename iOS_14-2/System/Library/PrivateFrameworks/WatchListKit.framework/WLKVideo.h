/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, WLKArtworkVariantListing, WLKVideoAsset;

@interface WLKVideo : NSObject {

	NSString* _ID;
	NSString* _externalID;
	NSString* _title;
	unsigned long long _duration;
	WLKArtworkVariantListing* _images;
	WLKVideoAsset* _asset;

}

@property (nonatomic,copy,readonly) NSString * ID;                             //@synthesize ID=_ID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                     //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * images;              //@synthesize images=_images - In the implementation block
@property (nonatomic,readonly) WLKVideoAsset * asset;                          //@synthesize asset=_asset - In the implementation block
+(id)videosWithDictionaries:(id)arg1 ;
-(NSString *)ID;
-(WLKVideoAsset *)asset;
-(NSString *)externalID;
-(id)initWithDictionary:(id)arg1 ;
-(WLKArtworkVariantListing *)images;
-(unsigned long long)duration;
-(NSString *)title;
@end

