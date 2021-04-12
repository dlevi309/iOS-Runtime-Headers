/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WKFormPeripheralBase.h>

@class NSString;

@interface WKDateTimeInputControl : WKFormPeripheralBase

@property (nonatomic,readonly) NSString * dateTimePickerCalendarType; 
@property (nonatomic,readonly) double timePickerValueHour; 
@property (nonatomic,readonly) double timePickerValueMinute; 
-(double)timePickerValueHour;
-(double)timePickerValueMinute;
-(void)setTimePickerHour:(long long)arg1 minute:(long long)arg2 ;
-(NSString *)dateTimePickerCalendarType;
-(id)initWithView:(id)arg1 ;
@end

