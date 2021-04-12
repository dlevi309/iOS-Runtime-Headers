/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UISegmentedControl;

@interface WFSegmentedCell : UITableViewCell {

	UISegmentedControl* _segmentedControl;
	/*^block*/id _handler;

}

@property (assign,nonatomic,__weak) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (copy) id handler;                                                            //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)awakeFromNib;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)_segmentedControlDidChange:(id)arg1 ;
@end

