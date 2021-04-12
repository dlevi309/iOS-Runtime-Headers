/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIView, NSString;

@interface SKUIScrollingTabBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _bottomHairlineView;
	UIView* _topHairlineView;
	BOOL _showsBackdrop;
	BOOL _showsBottomHairline;
	BOOL _showsTopHairline;
	BOOL _usesOpaqueColorForTopHairline;
	NSString* _backdropBarGroupName;

}

@property (nonatomic,copy) NSString * backdropBarGroupName;                   //@synthesize backdropBarGroupName=_backdropBarGroupName - In the implementation block
@property (assign,nonatomic) BOOL showsBackdrop;                              //@synthesize showsBackdrop=_showsBackdrop - In the implementation block
@property (assign,nonatomic) BOOL showsBottomHairline;                        //@synthesize showsBottomHairline=_showsBottomHairline - In the implementation block
@property (assign,nonatomic) BOOL showsTopHairline;                           //@synthesize showsTopHairline=_showsTopHairline - In the implementation block
@property (assign,nonatomic) BOOL usesOpaqueColorForTopHairline;              //@synthesize usesOpaqueColorForTopHairline=_usesOpaqueColorForTopHairline - In the implementation block
-(void)layoutSubviews;
-(BOOL)showsBottomHairline;
-(void)setShowsBottomHairline:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBackdropBarGroupName:(NSString *)arg1 ;
-(void)setShowsBackdrop:(BOOL)arg1 ;
-(void)setShowsTopHairline:(BOOL)arg1 ;
-(void)setUsesOpaqueColorForTopHairline:(BOOL)arg1 ;
-(void)_updateTopHairlineColor;
-(NSString *)backdropBarGroupName;
-(BOOL)showsBackdrop;
-(BOOL)showsTopHairline;
-(BOOL)usesOpaqueColorForTopHairline;
@end

