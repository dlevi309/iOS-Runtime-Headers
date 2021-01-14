/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHandler:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)awakeFromNib;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(id)handler;
-(void)_segmentedControlDidChange:(id)arg1 ;
@end

