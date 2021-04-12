/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface LUILogFilterPredicateCandidateCollectionViewCell : UICollectionViewCell {

	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setupUI;
-(id)_createTitleLabel;
-(void)layoutSubViews;
@end

