/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class HFItem, UIButton, NSString;

@interface HUFootnoteButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	HFItem* _item;
	UIButton* _titleButton;

}

@property (nonatomic,retain) UIButton * titleButton;                                           //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)_updateTextColor;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIButton *)titleButton;
-(void)setTitleButton:(UIButton *)arg1 ;
@end

