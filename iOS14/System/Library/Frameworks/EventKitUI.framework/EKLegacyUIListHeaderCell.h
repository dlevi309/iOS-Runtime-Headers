/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNeedsDisplay;
-(void)setDate:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 date:(double)arg2 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(BOOL)indentsForDots;
-(BOOL)showWeekNumber;
-(double)date;
-(BOOL)reusable;
@end

