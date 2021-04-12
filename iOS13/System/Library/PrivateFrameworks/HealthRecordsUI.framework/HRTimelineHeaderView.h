/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@interface HRTimelineHeaderView : UITableViewHeaderFooterView {

	 delegate;
	 $__lazy_storage_$_titleLabel;
	 $__lazy_storage_$_subtitleLabel;
	 $__lazy_storage_$_backgroundEffectView;
	 $__lazy_storage_$_separatorView;

}

@property (assign,__weak,nonatomic) id<HRTimelineHeaderViewDelegate> delegate; 
@property (assign,nonatomic) BOOL floating; 
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id<HRTimelineHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<HRTimelineHeaderViewDelegate>)arg1 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)floating;
-(void)setFloating:(BOOL)arg1 ;
-(void)applyStyleFromNavigationBar:(id)arg1 ;
-(void)applyTitle:(id)arg1 subtitle:(id)arg2 ;
@end

