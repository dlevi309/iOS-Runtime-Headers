/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUTableCell.h>
#import <libobjc.A.dylib/SUCellConfigurationView.h>

@class UIButton, NSString;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {

	UIButton* _leftButton;
	UIButton* _rightButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id)_newButton;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)setConfiguration:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)reloadView;
-(void)_reloadButtons;
@end

