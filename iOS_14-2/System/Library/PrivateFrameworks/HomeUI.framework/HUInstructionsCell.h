/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UILabel, UITextView, NSArray, NSString;

@interface HUInstructionsCell : UITableViewCell <UITextViewDelegate, HUCellProtocol> {

	HFItem* _item;
	double _contentBottomMargin;
	UILabel* _titleLabel;
	UITextView* _descriptionView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * descriptionView;                                     //@synthesize descriptionView=_descriptionView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                            //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) double contentBottomMargin;                                       //@synthesize contentBottomMargin=_contentBottomMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(UILabel *)titleLabel;
-(NSArray *)constraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDescriptionView:(UITextView *)arg1 ;
-(UITextView *)descriptionView;
-(void)setContentBottomMargin:(double)arg1 ;
-(double)contentBottomMargin;
@end

