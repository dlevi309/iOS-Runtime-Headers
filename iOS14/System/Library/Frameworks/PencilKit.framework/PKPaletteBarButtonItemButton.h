/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKPaletteButton.h>
#import <libobjc.A.dylib/_UIBarButtonItemViewOwner.h>

@class UIBarButtonItem, UIView, NSString;

@interface PKPaletteBarButtonItemButton : PKPaletteButton <_UIBarButtonItemViewOwner> {

	UIBarButtonItem* _barButtonItem;
	UIView* _customView;
	/*^block*/id _menuProvider;

}

@property (nonatomic,retain) UIView * customView;                            //@synthesize customView=_customView - In the implementation block
@property (nonatomic,copy) id menuProvider;                                  //@synthesize menuProvider=_menuProvider - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_imageByApplyingDefaultImageSymbolConfigurationWithImage:(id)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(UIBarButtonItem *)barButtonItem;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)customView;
-(id)menuProvider;
-(void)setCustomView:(UIView *)arg1 ;
-(id)initWithBarButtonItem:(id)arg1 ;
-(void)setMenuProvider:(id)arg1 ;
-(void)_updateForButtonItemChange;
-(void)_handleTouchUpInside:(id)arg1 event:(id)arg2 ;
-(void)_updateMenu;
-(void)_checkCurrentBarButtonItemState;
@end

