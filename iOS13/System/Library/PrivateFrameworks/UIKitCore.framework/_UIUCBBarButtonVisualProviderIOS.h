/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@class UIButton;

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {

	UIButton* _contentButton;

}
+(id)_defaultTitleAttributes;
-(id)contentView;
-(id)pointerShapeInContainer:(id)arg1 ;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(id)_defaultTitleAttributes;
-(id)_newButton;
-(void)_configureImageOrTitleFromBarItem:(id)arg1 ;
@end

