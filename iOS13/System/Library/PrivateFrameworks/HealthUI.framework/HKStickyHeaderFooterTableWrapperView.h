/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UITableView, NSArray, NSLayoutConstraint;

@interface HKStickyHeaderFooterTableWrapperView : UIView {

	UIView* _headerView;
	long long _headerBehavior;
	UIView* _footerView;
	long long _footerBehavior;
	UITableView* _tableView;
	NSArray* _headerConstraints;
	NSArray* _footerConstraints;
	NSLayoutConstraint* _headerPinningConstraint;
	NSLayoutConstraint* _footerPinningConstraint;
	CGSize _previousHeaderSize;
	CGSize _previousFooterSize;

}

@property (nonatomic,retain) NSArray * headerConstraints;                               //@synthesize headerConstraints=_headerConstraints - In the implementation block
@property (nonatomic,retain) NSArray * footerConstraints;                               //@synthesize footerConstraints=_footerConstraints - In the implementation block
@property (assign,nonatomic) CGSize previousHeaderSize;                                 //@synthesize previousHeaderSize=_previousHeaderSize - In the implementation block
@property (assign,nonatomic) CGSize previousFooterSize;                                 //@synthesize previousFooterSize=_previousFooterSize - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerPinningConstraint;              //@synthesize headerPinningConstraint=_headerPinningConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footerPinningConstraint;              //@synthesize footerPinningConstraint=_footerPinningConstraint - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                       //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) long long headerBehavior;                                  //@synthesize headerBehavior=_headerBehavior - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                       //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) long long footerBehavior;                                  //@synthesize footerBehavior=_footerBehavior - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)safeAreaInsetsDidChange;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(NSArray *)headerConstraints;
-(void)setHeaderConstraints:(NSArray *)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
-(void)setHeaderBehavior:(long long)arg1 ;
-(void)setFooterBehavior:(long long)arg1 ;
-(CGSize)previousHeaderSize;
-(void)setPreviousHeaderSize:(CGSize)arg1 ;
-(CGSize)previousFooterSize;
-(void)setPreviousFooterSize:(CGSize)arg1 ;
-(void)_updatePinningConstraintConstantsForCurrentSafeArea;
-(id)_createHeaderConstraintsForBehavior:(long long)arg1 ;
-(long long)headerBehavior;
-(void)_addHeaderConstraintsForBehavior:(long long)arg1 ;
-(NSArray *)footerConstraints;
-(id)_createFooterConstraintsForBehavior:(long long)arg1 ;
-(void)setFooterConstraints:(NSArray *)arg1 ;
-(long long)footerBehavior;
-(void)_addFooterConstraintsForBehavior:(long long)arg1 ;
-(void)setHeaderPinningConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFooterPinningConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)headerPinningConstraint;
-(NSLayoutConstraint *)footerPinningConstraint;
-(void)_updateHeaderConstraintsWithPreviousBehavior:(long long)arg1 ;
-(void)_updateFooterConstraintsWithPreviousBehavior:(long long)arg1 ;
@end

