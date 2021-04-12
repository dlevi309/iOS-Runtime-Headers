/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@class UIButton;

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {

	UIButton* _contentButton;
	/*^block*/id _menuProvider;

}
+(id)_defaultTitleAttributes;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)pointerWillExit:(id)arg1 ;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(id)_newButton;
-(id)buttonContextMenuInteractionConfiguration;
-(id)buttonContextMenuStyleFromDefaultStyle:(id)arg1 ;
-(void)_configureImageOrTitleFromBarItem:(id)arg1 ;
-(void)pointerWillEnter:(id)arg1 ;
-(id)contentView;
-(BOOL)canUpdateMenuInPlace;
-(id)pointerShapeInContainer:(id)arg1 ;
-(id)_defaultTitleAttributes;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(id)buttonContextMenuTargetedPreview;
-(CGPoint)menuAnchorPoint;
-(void)updateMenu;
@end

