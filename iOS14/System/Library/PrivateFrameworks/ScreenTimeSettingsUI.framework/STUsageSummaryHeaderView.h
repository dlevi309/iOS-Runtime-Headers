/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UISegmentedControl;

@interface STUsageSummaryHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView> {

	UISegmentedControl* _segmentedControl;

}

@property (nonatomic,readonly) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

