/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SchoolTimeSettingsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SCLUnlockHistoryItemFormatter, SCLTimeIntervalsFormatter, SCLHistoryGroup, NSArray, UILabel;

@interface SCLHistoryItemView : UIView {

	SCLUnlockHistoryItemFormatter* _historyItemFormatter;
	SCLTimeIntervalsFormatter* _intervalsFormatter;
	SCLHistoryGroup* _historyGroup;
	NSArray* _verticalLayoutConstraints;
	NSArray* _unconditionalConstraints;
	UILabel* _intervalLabel;
	UILabel* _label;

}

@property (nonatomic,retain) NSArray * verticalLayoutConstraints;                               //@synthesize verticalLayoutConstraints=_verticalLayoutConstraints - In the implementation block
@property (nonatomic,retain) NSArray * unconditionalConstraints;                                //@synthesize unconditionalConstraints=_unconditionalConstraints - In the implementation block
@property (nonatomic,retain) UILabel * intervalLabel;                                           //@synthesize intervalLabel=_intervalLabel - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) SCLUnlockHistoryItemFormatter * historyItemFormatter;              //@synthesize historyItemFormatter=_historyItemFormatter - In the implementation block
@property (nonatomic,retain) SCLTimeIntervalsFormatter * intervalsFormatter;                    //@synthesize intervalsFormatter=_intervalsFormatter - In the implementation block
@property (nonatomic,copy) SCLHistoryGroup * historyGroup;                                      //@synthesize historyGroup=_historyGroup - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)updateConstraints;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(SCLUnlockHistoryItemFormatter *)historyItemFormatter;
-(SCLTimeIntervalsFormatter *)intervalsFormatter;
-(void)setHistoryGroup:(SCLHistoryGroup *)arg1 ;
-(void)setHistoryItemFormatter:(SCLUnlockHistoryItemFormatter *)arg1 ;
-(void)setIntervalsFormatter:(SCLTimeIntervalsFormatter *)arg1 ;
-(SCLHistoryGroup *)historyGroup;
-(NSArray *)verticalLayoutConstraints;
-(void)setVerticalLayoutConstraints:(NSArray *)arg1 ;
-(NSArray *)unconditionalConstraints;
-(void)setUnconditionalConstraints:(NSArray *)arg1 ;
-(UILabel *)intervalLabel;
-(void)setIntervalLabel:(UILabel *)arg1 ;
@end

