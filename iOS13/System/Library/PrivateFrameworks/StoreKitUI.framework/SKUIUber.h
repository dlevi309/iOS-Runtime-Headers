/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

