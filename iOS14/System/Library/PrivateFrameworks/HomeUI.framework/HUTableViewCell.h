/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class HFItem, NSString;

@interface HUTableViewCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _titleColorFollowsTintColor;
	BOOL _valueColorFollowsTintColor;
	HFItem* _item;

}

@property (assign,nonatomic) BOOL titleColorFollowsTintColor;                                  //@synthesize titleColorFollowsTintColor=_titleColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL valueColorFollowsTintColor;                                  //@synthesize valueColorFollowsTintColor=_valueColorFollowsTintColor - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
-(void)_updateTitle;
-(void)setDisabled:(BOOL)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setValueColorFollowsTintColor:(BOOL)arg1 ;
-(void)setTitleColorFollowsTintColor:(BOOL)arg1 ;
-(void)_updateDetailTextLabel;
-(BOOL)titleColorFollowsTintColor;
-(BOOL)valueColorFollowsTintColor;
@end

