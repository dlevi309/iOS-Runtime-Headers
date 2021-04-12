/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKDatePickerInternalImplementationProtocol, PKDatePickerDelegate;
@class UIView, NSLocale, NSCalendar, NSDate;

@interface PKDatePicker : UIView {

	UIView*<PKDatePickerInternalImplementationProtocol> _internalPicker;
	BOOL _showsDay;
	BOOL _showsMonth;
	BOOL _showsYear;
	BOOL _usesDarkAppearance;
	unsigned long long _style;
	NSLocale* _locale;
	NSCalendar* _calendar;
	NSDate* _date;
	id<PKDatePickerDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL showsDay;                                       //@synthesize showsDay=_showsDay - In the implementation block
@property (nonatomic,readonly) BOOL showsMonth;                                     //@synthesize showsMonth=_showsMonth - In the implementation block
@property (nonatomic,readonly) BOOL showsYear;                                      //@synthesize showsYear=_showsYear - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                               //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDate * date;                                         //@synthesize date=_date - In the implementation block
@property (assign,nonatomic,__weak) id<PKDatePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesDarkAppearance;                               //@synthesize usesDarkAppearance=_usesDarkAppearance - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(NSLocale *)locale;
-(CGSize)intrinsicContentSize;
-(Class)_classForDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 style:(unsigned long long)arg4 ;
-(void)_dateValueChanged:(id)arg1 ;
-(void)_forceReloadInternalPicker;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PKDatePickerDelegate>)delegate;
-(void)reconfigureToShowDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 style:(unsigned long long)arg4 locale:(id)arg5 calendar:(id)arg6 ;
-(NSCalendar *)calendar;
-(void)setDate:(NSDate *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<PKDatePickerDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)showsYear;
-(BOOL)showsDay;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)usesDarkAppearance;
-(id)initWithCoder:(id)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setUsesDarkAppearance:(BOOL)arg1 ;
-(NSDate *)date;
-(BOOL)showsMonth;
-(unsigned long long)style;
-(void)dealloc;
@end

