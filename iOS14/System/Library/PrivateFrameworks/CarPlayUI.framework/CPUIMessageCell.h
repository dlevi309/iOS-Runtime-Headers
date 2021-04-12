/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/_CPUIBaseTableCell.h>

@class UIImageView, UILabel, NSArray;

@interface CPUIMessageCell : _CPUIBaseTableCell {

	UIImageView* _unreadImageView;
	UIImageView* _leadingGlyphView;
	UIImageView* _primaryImageView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _trailingLabel;
	UIImageView* _trailingImageView;
	UIImageView* _trailingGlyphView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIImageView * unreadImageView;                //@synthesize unreadImageView=_unreadImageView - In the implementation block
@property (nonatomic,retain) UIImageView * leadingGlyphView;               //@synthesize leadingGlyphView=_leadingGlyphView - In the implementation block
@property (nonatomic,retain) UIImageView * primaryImageView;               //@synthesize primaryImageView=_primaryImageView - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                       //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                     //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * trailingLabel;                      //@synthesize trailingLabel=_trailingLabel - In the implementation block
@property (nonatomic,retain) UIImageView * trailingImageView;              //@synthesize trailingImageView=_trailingImageView - In the implementation block
@property (nonatomic,retain) UIImageView * trailingGlyphView;              //@synthesize trailingGlyphView=_trailingGlyphView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                        //@synthesize constraints=_constraints - In the implementation block
+(double)minimumHeight;
+(double)rowHeight;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setUnread:(BOOL)arg1 ;
-(UILabel *)primaryLabel;
-(UIImageView *)trailingImageView;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setTrailingImageView:(UIImageView *)arg1 ;
-(UILabel *)secondaryLabel;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)applyConfiguration:(id)arg1 ;
-(void)configureCell;
-(UILabel *)trailingLabel;
-(UIImageView *)primaryImageView;
-(UIImageView *)trailingGlyphView;
-(UIImageView *)leadingGlyphView;
-(UIImageView *)unreadImageView;
-(void)setUnreadImageView:(UIImageView *)arg1 ;
-(void)setLeadingGlyphView:(UIImageView *)arg1 ;
-(void)setPrimaryImageView:(UIImageView *)arg1 ;
-(void)setTrailingLabel:(UILabel *)arg1 ;
-(void)setTrailingGlyphView:(UIImageView *)arg1 ;
@end

