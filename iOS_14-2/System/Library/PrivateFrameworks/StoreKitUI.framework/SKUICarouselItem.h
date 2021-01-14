/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIArtworkProviding;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString, SKUILink;

@interface SKUICarouselItem : NSObject {

	NSString* _accessibilityLabel;
	long long _carouselItemIdentifier;
	SKUILink* _link;
	id<SKUIArtworkProviding> _artworkProvider;

}

@property (nonatomic,retain) id<SKUIArtworkProviding> artworkProvider;              //@synthesize artworkProvider=_artworkProvider - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityLabel;                       //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) long long carouselItemIdentifier;                    //@synthesize carouselItemIdentifier=_carouselItemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUILink * link;                                     //@synthesize link=_link - In the implementation block
-(SKUILink *)link;
-(NSString *)accessibilityLabel;
-(id)description;
-(id)artworkForSize:(CGSize)arg1 ;
-(id<SKUIArtworkProviding>)artworkProvider;
-(void)_setLinkItem:(id)arg1 ;
-(id)initWithComponentContext:(id)arg1 ;
-(long long)carouselItemIdentifier;
-(void)setArtworkProvider:(id<SKUIArtworkProviding>)arg1 ;
@end

