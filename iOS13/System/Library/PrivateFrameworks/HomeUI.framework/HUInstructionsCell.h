/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)constraints;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setDescriptionView:(UITextView *)arg1 ;
-(UITextView *)descriptionView;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setContentBottomMargin:(double)arg1 ;
-(double)contentBottomMargin;
@end

