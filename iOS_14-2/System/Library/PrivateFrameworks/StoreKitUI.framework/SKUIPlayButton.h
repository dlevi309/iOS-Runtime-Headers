/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)itemIdentifier;
-(void)refresh;
-(void)tintColorDidChange;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)buttonSize;
-(void)setItemIdentifier:(long long)arg1 ;
-(void)layoutSubviews;
-(void)_updateEnabledState;
-(id)outerBorderColor;
-(BOOL)isRadio;
-(id)defaultBackgroundColor;
-(void)setBackgroundType:(long long)arg1 ;
-(SKUIPlayButtonImageCache *)imageCache;
-(id)images;
-(void)setStyle:(long long)arg1 ;
-(id)playImage;
-(float)buttonCornerRadius;
-(long long)style;
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
-(void)setUseLargeButton:(BOOL)arg1 ;
-(BOOL)useLargeButton;
@end

