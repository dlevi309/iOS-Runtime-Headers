/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPlayButtonControl.h>

@class SKUIPlayButtonImageCache, NSString;

@interface SKUIPlayButton : SKUIPlayButtonControl {

	BOOL _showStop;
	SKUIPlayButtonImageCache* _imageCache;
	BOOL _showOnDemand;
	long long _itemIdentifier;
	NSString* _playItemIdentifier;
	long long _style;
	NSString* _mediaURLString;

}

@property (nonatomic,readonly) SKUIPlayButtonImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) long long itemIdentifier;                             //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * playItemIdentifier;                          //@synthesize playItemIdentifier=_playItemIdentifier - In the implementation block
@property (assign,nonatomic) BOOL showOnDemand;                                    //@synthesize showOnDemand=_showOnDemand - In the implementation block
@property (assign,nonatomic) long long style;                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * mediaURLString;                              //@synthesize mediaURLString=_mediaURLString - In the implementation block
@property (assign,nonatomic) BOOL useLargeButton; 
@property (assign,getter=isRadio,nonatomic) BOOL radio; 
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)itemIdentifier;
-(void)setItemIdentifier:(long long)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)images;
-(void)refresh;
-(SKUIPlayButtonImageCache *)imageCache;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(float)buttonCornerRadius;
-(id)defaultBackgroundColor;
-(void)setBackgroundType:(long long)arg1 ;
-(CGSize)buttonSize;
-(void)_updateEnabledState;
-(id)outerBorderColor;
-(id)playImage;
-(NSString *)mediaURLString;
-(void)setMediaURLString:(NSString *)arg1 ;
-(NSString *)playItemIdentifier;
-(BOOL)showOnDemand;
-(void)reloadWithItemStatus:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)showOuterBorder;
-(id)cancelImage;
-(void)playIndicatorDidChange:(BOOL)arg1 ;
-(void)setShowOnDemand:(BOOL)arg1 ;
-(void)setPlayItemIdentifier:(NSString *)arg1 ;
-(void)setRadio:(BOOL)arg1 ;
-(BOOL)isRadio;
-(void)setUseLargeButton:(BOOL)arg1 ;
-(BOOL)useLargeButton;
@end

