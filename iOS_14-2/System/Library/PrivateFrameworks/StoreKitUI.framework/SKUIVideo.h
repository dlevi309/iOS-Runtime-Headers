/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIArtworkProviding;
@class NSURL;

@interface SKUIVideo : NSObject {

	id<SKUIArtworkProviding> _artworks;
	NSURL* _url;

}

@property (nonatomic,readonly) id<SKUIArtworkProviding> artworks;              //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
-(id<SKUIArtworkProviding>)artworks;
-(NSURL *)URL;
-(id)initWithVideoDictionary:(id)arg1 ;
@end

