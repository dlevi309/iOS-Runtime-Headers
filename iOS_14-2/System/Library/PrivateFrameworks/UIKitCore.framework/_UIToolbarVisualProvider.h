/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateBarBackgroundSize;
-(BOOL)useModernAppearance;
-(void)updateBarBackground;
-(void)updateAppearance;
-(id)initWithToolbar:(id)arg1 ;
-(CGRect)backgroundFrame;
-(UIView *)customBackgroundView;
-(void)updateItemsForNewFrame:(id)arg1 ;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1 ;
-(long long)itemDistribution;
-(void)customViewChangedForButtonItem:(id)arg1 ;
-(UIView *)currentBackgroundView;
-(void)setItemDistribution:(long long)arg1 ;
-(void)drawBackgroundViewInRect:(CGRect)arg1 ;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(BOOL)toolbarIsSmall;
-(UIToolbar *)toolbar;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)layoutSubviews;
-(NSString *)backdropGroupName;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)prepare;
-(void)updateBackgroundGroupName;
-(id<_UIBarAppearanceChangeObserver>)appearanceObserver;
@end

