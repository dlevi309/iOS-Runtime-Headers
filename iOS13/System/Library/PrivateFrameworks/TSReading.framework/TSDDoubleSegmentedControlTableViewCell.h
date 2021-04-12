/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UITableViewCell.h>

@class TSKSegmentedControl;

@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell {

	TSKSegmentedControl* mLeftSegmentedControl;
	TSKSegmentedControl* mRightSegmentedControl;

}

@property (nonatomic,readonly) TSKSegmentedControl * leftSegmentedControl; 
@property (nonatomic,readonly) TSKSegmentedControl * rightSegmentedControl; 
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithLeftSegmentedControl:(id)arg1 rightSegmentedControl:(id)arg2 ;
-(TSKSegmentedControl *)leftSegmentedControl;
-(TSKSegmentedControl *)rightSegmentedControl;
@end

