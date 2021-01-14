/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
#import <UIKitCore/UINavigationBar.h>

@class SearchUISeparatorView;

@interface SPUINavigationBar : UINavigationBar {

	SearchUISeparatorView* _topDividerView;

}

@property (retain) SearchUISeparatorView * topDividerView;              //@synthesize topDividerView=_topDividerView - In the implementation block
+(BOOL)_supportsCanvasView;
-(void)setTopDividerView:(SearchUISeparatorView *)arg1 ;
-(BOOL)isLocked;
-(SearchUISeparatorView *)topDividerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)showSeparator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)updateBackgroundViewVisibility;
-(void)didMoveToWindow;
-(id)_popNavigationItemWithTransition:(int)arg1 ;
-(void)pushNavigationItem:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)performShowSeparator:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

