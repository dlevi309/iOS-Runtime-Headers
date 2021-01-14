/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFloating:(BOOL)arg1 ;
-(BOOL)floating;
-(id<HRTimelineHeaderViewDelegate>)delegate;
-(void)applyStyleFromNavigationBar:(id)arg1 ;
-(void)prepareForReuse;
-(void)setDelegate:(id<HRTimelineHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)applyTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

