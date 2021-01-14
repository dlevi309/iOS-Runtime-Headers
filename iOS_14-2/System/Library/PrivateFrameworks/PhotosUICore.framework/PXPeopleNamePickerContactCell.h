/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPeopleNamePickerCell.h>

@class CNAvatarView, UILabel, UIView, NSArray;

@interface PXPeopleNamePickerContactCell : PXPeopleNamePickerCell {

	CNAvatarView* _contactAvatarView;
	UILabel* _subtitleLabel;
	UIView* _labelsContainer;
	NSArray* _constraintsForVisibleSubtitle;
	NSArray* _constraintsForHiddenSubtitle;

}

@property (assign,nonatomic,__weak) UIView * labelsContainer;                        //@synthesize labelsContainer=_labelsContainer - In the implementation block
@property (nonatomic,retain) NSArray * constraintsForVisibleSubtitle;                //@synthesize constraintsForVisibleSubtitle=_constraintsForVisibleSubtitle - In the implementation block
@property (nonatomic,retain) NSArray * constraintsForHiddenSubtitle;                 //@synthesize constraintsForHiddenSubtitle=_constraintsForHiddenSubtitle - In the implementation block
@property (nonatomic,__weak,readonly) CNAvatarView * contactAvatarView;              //@synthesize contactAvatarView=_contactAvatarView - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * subtitleLabel;                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(CNAvatarView *)contactAvatarView;
-(UILabel *)subtitleLabel;
-(void)updateConstraints;
-(UIView *)labelsContainer;
-(void)setLabelsContainer:(UIView *)arg1 ;
-(NSArray *)constraintsForVisibleSubtitle;
-(void)setConstraintsForVisibleSubtitle:(NSArray *)arg1 ;
-(NSArray *)constraintsForHiddenSubtitle;
-(void)setConstraintsForHiddenSubtitle:(NSArray *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

