/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class UIMenu, NSString;

@interface MKMenuPresentingControl : UIControl <UIContextMenuInteractionDelegate> {

	BOOL _selected;
	BOOL _highlighted;
	UIMenu* _menu;

}

@property (nonatomic,retain) UIMenu * menu;                         //@synthesize menu=_menu - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIMenu *)menu;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)setMenu:(UIMenu *)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)_updateBackgroundColor:(BOOL)arg1 ;
-(id)initWithMenu:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

