/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)URL;
-(id<SKUIArtworkProviding>)artworks;
-(id)initWithVideoDictionary:(id)arg1 ;
@end

