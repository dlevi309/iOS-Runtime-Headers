/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILayoutGuide *)contentLayoutGuide;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 useLayoutMarginsGuide:(BOOL)arg2 ;
-(NSArray *)rtlContentLayoutGuideConstraints;
-(void)setRtlContentLayoutGuideConstraints:(NSArray *)arg1 ;
@end

