/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)features;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setFeatures:(long long)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)setFeatures:(long long)arg1 gameCenterFeatures:(unsigned long long)arg2 ;
-(id)_gameCenterStringWithFeatures:(unsigned long long)arg1 ;
-(void)setGameCenterFeatures:(unsigned long long)arg1 ;
-(unsigned long long)gameCenterFeatures;
@end

