/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKListItemLabel, UILabel;

@interface HKTitledListItemLabel : UIView {

	HKListItemLabel* _listItemLabel;
	UILabel* _bodyLabel;
	long long _currentUserInterfaceStyle;

}

@property (nonatomic,retain) HKListItemLabel * listItemLabel;                  //@synthesize listItemLabel=_listItemLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                              //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (assign,nonatomic) long long currentUserInterfaceStyle;              //@synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle - In the implementation block
+(id)createTitledListItem:(id)arg1 listBody:(id)arg2 itemNumber:(int)arg3 ;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)_setUpConstraints;
-(void)setCurrentUserInterfaceStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)currentUserInterfaceStyle;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)_setUpUI;
-(HKListItemLabel *)listItemLabel;
-(void)_updateCurrentUserInterfaceStyleIfNeeded;
-(id)initWithView:(id)arg1 size:(CGSize)arg2 title:(id)arg3 body:(id)arg4 ;
-(id)_bodyLabelFont;
-(double)_listItemLabelToBody;
-(double)_bodyLabelToBottom;
-(void)setListItemLabel:(HKListItemLabel *)arg1 ;
@end

