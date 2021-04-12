/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIToolbar, NSString, UIView;

@interface _UIToolbarVisualProvider : NSObject {

	UIToolbar* _toolbar;
	NSString* _backdropGroupName;
	UIView* _customBackgroundView;
	UIView* _currentBackgroundView;

}

@property (nonatomic,readonly) UIToolbar * toolbar;                                                //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIView * customBackgroundView;                                        //@synthesize customBackgroundView=_customBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * currentBackgroundView;                                     //@synthesize currentBackgroundView=_currentBackgroundView - In the implementation block
@property (nonatomic,readonly) CGRect backgroundFrame; 
@property (nonatomic,readonly) BOOL toolbarIsSmall; 
@property (assign,nonatomic) long long itemDistribution; 
@property (nonatomic,copy) NSString * backdropGroupName;                                           //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) BOOL useModernAppearance; 
@property (nonatomic,readonly) id<_UIBarAppearanceChangeObserver> appearanceObserver; 
-(void)layoutSubviews;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(UIView *)customBackgroundView;
-(void)setItemDistribution:(long long)arg1 ;
-(long long)itemDistribution;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(id<_UIBarAppearanceChangeObserver>)appearanceObserver;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)updateBackgroundGroupName;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(BOOL)useModernAppearance;
-(CGRect)backgroundFrame;
-(id)initWithToolbar:(id)arg1 ;
-(UIView *)currentBackgroundView;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)updateItemsForNewFrame:(id)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(void)customViewChangedForButtonItem:(id)arg1 ;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1 ;
-(BOOL)toolbarIsSmall;
-(void)updateBarBackgroundSize;
-(void)updateBarBackground;
-(void)drawBackgroundViewInRect:(CGRect)arg1 ;
-(void)updateAppearance;
-(UIToolbar *)toolbar;
@end

