/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class NSString, WKContentView;

@interface WKDateTimePicker : NSObject <WKFormControl> {

	RetainPtr<UIDatePicker>* _datePicker;
	NSString* _formatString;
	BOOL _shouldRemoveTimeZoneInformation;
	BOOL _isTimeInput;
	WKContentView* _view;

}
-(void)dealloc;
-(long long)_timeZoneOffsetFromGMT:(id)arg1 ;
-(void)_dateChangedSetAsString;
-(void)_dateChangedSetAsNumber;
-(void)_dateChanged;
-(void)_dateChangeHandler:(id)arg1 ;
-(id)_sanitizeInputValueForFormatter:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)datePicker;
-(BOOL)shouldPresentGregorianCalendar:(const FocusedElementInformation*)arg1 ;
-(RetainPtr<NSDateFormatter>*)dateFormatterForPicker;
-(id)initWithView:(id)arg1 datePickerMode:(long long)arg2 ;
-(id)calendarType;
@end

