/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, HUGridLayoutOptions, UILabel, NSArray, NSString;

@interface HUTriggerHeaderCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	HUGridLayoutOptions* _layoutOptions;
	double _contentBottomMargin;
	UILabel* _titleLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) double contentBottomMargin;                                       //@synthesize contentBottomMargin=_contentBottomMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(NSArray *)constraints;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(HUGridLayoutOptions *)layoutOptions;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)_updateTitleLabel;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setContentBottomMargin:(double)arg1 ;
-(double)contentBottomMargin;
@end

