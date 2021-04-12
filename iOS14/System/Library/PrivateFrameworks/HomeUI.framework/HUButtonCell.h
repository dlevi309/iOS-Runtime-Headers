/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class HFItem, NSString;

@interface HUButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _destructive;
	BOOL _textColorFollowsTintColor;
	BOOL _hideTitle;
	HFItem* _item;
	long long _textAlignment;

}

@property (assign,getter=isDestructive,nonatomic) BOOL destructive;                            //@synthesize destructive=_destructive - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                          //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL textColorFollowsTintColor;                                   //@synthesize textColorFollowsTintColor=_textColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL hideTitle;                                                   //@synthesize hideTitle=_hideTitle - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDestructive;
-(void)tintColorDidChange;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(long long)textAlignment;
-(void)setItem:(HFItem *)arg1 ;
-(void)setHideTitle:(BOOL)arg1 ;
-(BOOL)hideTitle;
-(void)setTextAlignment:(long long)arg1 ;
-(void)updateTitle;
-(void)setDestructive:(BOOL)arg1 ;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)textColorFollowsTintColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

