/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MTUIAlarmView *)alarmView;
-(void)refreshUI:(id)arg1 animated:(BOOL)arg2 ;
@end

