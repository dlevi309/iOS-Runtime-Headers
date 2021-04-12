/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateFont;
-(id)initWithFrame:(CGRect)arg1 shouldSupportRTL:(BOOL)arg2 ;
-(double)_xOriginForMonthViewWithIndex:(long long)arg1 itemWidth:(double)arg2 leftMargin:(double)arg3 ;
@end

