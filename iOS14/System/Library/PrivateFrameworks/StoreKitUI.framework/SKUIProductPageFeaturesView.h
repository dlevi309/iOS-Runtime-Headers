/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, SKUIClientContext, SKUIColorScheme, NSMutableArray, UILabel, NSString;

@interface SKUIProductPageFeaturesView : UIView {

	UIView* _bottomBorderView;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	long long _features;
	NSMutableArray* _featureViews;
	unsigned long long _gameCenterFeatures;
	UILabel* _titleLabel;
	UIView* _topBorderView;

}

@property (assign,nonatomic) long long features;                                 //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) unsigned long long gameCenterFeatures;              //@synthesize gameCenterFeatures=_gameCenterFeatures - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                      //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                  //@synthesize clientContext=_clientContext - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)features;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFeatures:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)setFeatures:(long long)arg1 gameCenterFeatures:(unsigned long long)arg2 ;
-(id)_gameCenterStringWithFeatures:(unsigned long long)arg1 ;
-(void)setGameCenterFeatures:(unsigned long long)arg1 ;
-(unsigned long long)gameCenterFeatures;
@end

