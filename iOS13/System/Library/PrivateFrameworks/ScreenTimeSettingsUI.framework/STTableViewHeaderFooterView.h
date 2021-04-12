/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILayoutGuide, NSArray;

@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView {

	UILayoutGuide* _contentLayoutGuide;
	NSArray* _rtlContentLayoutGuideConstraints;

}

@property (nonatomic,copy) NSArray * rtlContentLayoutGuideConstraints;              //@synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;                  //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UILayoutGuide *)contentLayoutGuide;
-(id)initWithReuseIdentifier:(id)arg1 useLayoutMarginsGuide:(BOOL)arg2 ;
-(NSArray *)rtlContentLayoutGuideConstraints;
-(void)setRtlContentLayoutGuideConstraints:(NSArray *)arg1 ;
@end

