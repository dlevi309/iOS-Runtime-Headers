/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface LUILogFilterPredicateCandidateCollectionViewCell : UICollectionViewCell {

	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)_createTitleLabel;
-(void)_setupUI;
-(void)layoutSubViews;
@end

