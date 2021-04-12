/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isLocked;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)didAddSubview:(id)arg1 ;
-(id)_popNavigationItemWithTransition:(int)arg1 ;
-(void)pushNavigationItem:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(SearchUISeparatorView *)topDividerView;
-(void)setTopDividerView:(SearchUISeparatorView *)arg1 ;
-(void)showSeparator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateBackgroundViewVisibility;
-(void)performShowSeparator:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

