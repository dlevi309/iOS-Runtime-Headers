/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@protocol SKUIArtworkProviding;
@class NSString, SKUILink;

@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSString* _accessibilityLabel;
	long long _alignment;
	double _duration;
	SKUILink* _link;
	long long _mediaAppearance;
	long long _mediaIdentifier;
	long long _mediaType;
	NSString* _mediaURLString;
	NSString* _title;
	float _titleFontSize;
	long long _titleFontWeight;
	id<SKUIArtworkProviding> _thumbnailArtworkProvider;

}

@property (nonatomic,readonly) NSString * accessibilityLabel;                                  //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) long long alignment;                                            //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) double duration;                                                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SKUILink * link;                                                //@synthesize link=_link - In the implementation block
@property (nonatomic,readonly) long long mediaIdentifier;                                      //@synthesize mediaIdentifier=_mediaIdentifier - In the implementation block
@property (nonatomic,readonly) long long mediaAppearance;                                      //@synthesize mediaAppearance=_mediaAppearance - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                            //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSString * mediaURLString;                                      //@synthesize mediaURLString=_mediaURLString - In the implementation block
@property (nonatomic,readonly) id<SKUIArtworkProviding> thumbnailArtworkProvider;              //@synthesize thumbnailArtworkProvider=_thumbnailArtworkProvider - In the implementation block
@property (nonatomic,readonly) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) float titleFontSize;                                            //@synthesize titleFontSize=_titleFontSize - In the implementation block
@property (nonatomic,readonly) long long titleFontWeight;                                      //@synthesize titleFontWeight=_titleFontWeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(double)duration;
-(long long)alignment;
-(long long)mediaType;
-(NSString *)accessibilityLabel;
-(SKUILink *)link;
-(long long)componentType;
-(long long)mediaIdentifier;
-(id)valueForMetricsField:(id)arg1 ;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(id)metricsElementName;
-(NSString *)mediaURLString;
-(id)initWithArtworkProvider:(id)arg1 appearance:(long long)arg2 ;
-(id)bestThumbnailForWidth:(double)arg1 ;
-(long long)mediaAppearance;
-(id)bestThumbnailArtwork;
-(id)initWithArtwork:(id)arg1 ;
-(id)initWithArtworkProvider:(id)arg1 ;
-(float)titleFontSize;
-(long long)titleFontWeight;
-(id<SKUIArtworkProviding>)thumbnailArtworkProvider;
@end

