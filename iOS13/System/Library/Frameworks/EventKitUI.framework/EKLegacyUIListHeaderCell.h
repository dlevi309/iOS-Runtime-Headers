/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class EKLegacyUIListHeaderCellContentView;

@interface EKLegacyUIListHeaderCell : UITableViewHeaderFooterView {

	EKLegacyUIListHeaderCellContentView* _contentView;
	BOOL _showWeekNumber;

}

@property (assign,nonatomic) double date; 
@property (assign,nonatomic) BOOL indentsForDots; 
@property (nonatomic,readonly) BOOL reusable; 
@property (assign,nonatomic) BOOL showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
+(id)_noonLocalizedString;
+(id)_allDayLocalizedString;
+(void)_invalidateWidths;
+(void)_calculateWidths;
+(double)xMidpointForCalendarDot;
+(double)timeWidthIncludingDots:(BOOL)arg1 ;
-(double)date;
-(void)setDate:(double)arg1 ;
-(void)setNeedsDisplay;
-(id)initWithFrame:(CGRect)arg1 date:(double)arg2 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(BOOL)indentsForDots;
-(BOOL)reusable;
-(BOOL)showWeekNumber;
@end

