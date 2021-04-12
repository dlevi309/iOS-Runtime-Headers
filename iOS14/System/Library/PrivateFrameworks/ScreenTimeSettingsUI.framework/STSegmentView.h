/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSLayoutConstraint, UIImageView, STSegmentItem;

@interface STSegmentView : UIView {

	BOOL _useVibrancy;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSLayoutConstraint* _detailLabelLeadingConstraint;
	UIImageView* _detailImageView;
	NSLayoutConstraint* _detailImageWidthConstraint;
	NSLayoutConstraint* _detailImageHeightConstraint;
	STSegmentItem* _item;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                                          //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * detailLabelLeadingConstraint;              //@synthesize detailLabelLeadingConstraint=_detailLabelLeadingConstraint - In the implementation block
@property (nonatomic,readonly) UIImageView * detailImageView;                                  //@synthesize detailImageView=_detailImageView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * detailImageWidthConstraint;                //@synthesize detailImageWidthConstraint=_detailImageWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * detailImageHeightConstraint;               //@synthesize detailImageHeightConstraint=_detailImageHeightConstraint - In the implementation block
@property (nonatomic,retain) STSegmentItem * item;                                             //@synthesize item=_item - In the implementation block
@property (readonly) BOOL useVibrancy;                                                         //@synthesize useVibrancy=_useVibrancy - In the implementation block
-(UILabel *)titleLabel;
-(STSegmentItem *)item;
-(void)setItem:(STSegmentItem *)arg1 ;
-(BOOL)useVibrancy;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)detailLabel;
-(UIImageView *)detailImageView;
-(NSLayoutConstraint *)detailLabelLeadingConstraint;
-(NSLayoutConstraint *)detailImageWidthConstraint;
-(NSLayoutConstraint *)detailImageHeightConstraint;
-(id)initWithItem:(id)arg1 useVibrancy:(BOOL)arg2 truncateLabels:(BOOL)arg3 ;
@end

