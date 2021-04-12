/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class MTUIAlarmView;

@interface WFAlarmTableViewCell : UITableViewCell {

	BOOL _enabled;
	MTUIAlarmView* _alarmView;

}

@property (nonatomic,readonly) MTUIAlarmView * alarmView;              //@synthesize alarmView=_alarmView - In the implementation block
@property (assign,nonatomic) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)refreshUI:(id)arg1 animated:(BOOL)arg2 ;
-(MTUIAlarmView *)alarmView;
@end

