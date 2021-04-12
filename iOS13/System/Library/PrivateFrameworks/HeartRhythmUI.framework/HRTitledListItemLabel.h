/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HRListItemLabel, UILabel;

@interface HRTitledListItemLabel : UIView {

	HRListItemLabel* _listItemLabel;
	UILabel* _bodyLabel;
	long long _currentUserInterfaceStyle;

}

@property (nonatomic,retain) HRListItemLabel * listItemLabel;                  //@synthesize listItemLabel=_listItemLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                              //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (assign,nonatomic) long long currentUserInterfaceStyle;              //@synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle - In the implementation block
-(void)layoutSubviews;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateCurrentUserInterfaceStyleIfNeeded;
-(long long)currentUserInterfaceStyle;
-(void)setCurrentUserInterfaceStyle:(long long)arg1 ;
-(id)_bodyLabelFont;
-(id)initWithView:(id)arg1 size:(CGSize)arg2 title:(id)arg3 body:(id)arg4 ;
-(HRListItemLabel *)listItemLabel;
-(double)_listItemLabelToBody;
-(double)_bodyLabelToBottom;
-(void)setListItemLabel:(HRListItemLabel *)arg1 ;
@end

