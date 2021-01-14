/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface HKWeekdayHeaderPaletteView : UIView {

	NSMutableArray* _weekdayLabels;

}
+(double)preferredHeight;
+(id)weekdayFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFont;
-(id)initWithFrame:(CGRect)arg1 shouldSupportRTL:(BOOL)arg2 ;
-(double)_xOriginForMonthViewWithIndex:(long long)arg1 itemWidth:(double)arg2 leftMargin:(double)arg3 ;
@end

