/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIDatePicker.h>

@interface FIUIHealthSettingsDatePicker : UIDatePicker {

	/*^block*/id _dateUpdateHandler;

}

@property (nonatomic,copy) id dateUpdateHandler;              //@synthesize dateUpdateHandler=_dateUpdateHandler - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)forceUpdate;
-(void)layoutSubviews;
-(void)_dateDidChange:(id)arg1 ;
-(id)dateUpdateHandler;
-(void)setDateUpdateHandler:(id)arg1 ;
@end

