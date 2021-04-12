/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString, SKUIArtwork, SKUICountdown, SKUIEditorialComponent, SKUILink;

@interface SKUIBrickItem : NSObject {

	NSString* _accessibilityLabel;
	SKUIArtwork* _artwork;
	long long _brickIdentifier;
	SKUICountdown* _countdown;
	SKUIEditorialComponent* _editorial;
	SKUILink* _link;

}

@property (nonatomic,readonly) NSString * accessibilityLabel;                   //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * artwork;                           //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) long long brickIdentifier;                       //@synthesize brickIdentifier=_brickIdentifier - In the implementation block
@property (nonatomic,readonly) SKUICountdown * countdown;                       //@synthesize countdown=_countdown - In the implementation block
@property (nonatomic,readonly) SKUIEditorialComponent * editorial;              //@synthesize editorial=_editorial - In the implementation block
@property (nonatomic,readonly) SKUILink * link;                                 //@synthesize link=_link - In the implementation block
-(id)description;
-(NSString *)accessibilityLabel;
-(SKUILink *)link;
-(SKUIArtwork *)artwork;
-(id)initWithCustomPageContext:(id)arg1 ;
-(SKUICountdown *)countdown;
-(id)initWithBannerRoomContext:(id)arg1 ;
-(SKUIEditorialComponent *)editorial;
-(void)_setLinkItem:(id)arg1 ;
-(id)initWithComponentContext:(id)arg1 ;
-(long long)brickIdentifier;
-(void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2 ;
@end

