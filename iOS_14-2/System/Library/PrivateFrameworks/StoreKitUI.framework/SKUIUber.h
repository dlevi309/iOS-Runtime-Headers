/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIArtworkProviding;
@class SKUIColorScheme, NSString;

@interface SKUIUber : NSObject {

	SKUIColorScheme* _colorScheme;
	NSString* _text;
	id<SKUIArtworkProviding> _artworkProvider;

}

@property (nonatomic,readonly) id<SKUIArtworkProviding> artworkProvider;              //@synthesize artworkProvider=_artworkProvider - In the implementation block
@property (nonatomic,readonly) SKUIColorScheme * colorScheme;                         //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) NSString * text;                                       //@synthesize text=_text - In the implementation block
-(NSString *)text;
-(SKUIColorScheme *)colorScheme;
-(id<SKUIArtworkProviding>)artworkProvider;
-(id)initWithUberDictionary:(id)arg1 ;
@end

