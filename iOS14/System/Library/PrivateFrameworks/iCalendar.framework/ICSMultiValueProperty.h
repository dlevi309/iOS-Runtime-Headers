/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@interface ICSMultiValueProperty : ICSProperty
-(id)values;
-(BOOL)isMultiValued;
-(void)setValue:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(id)value;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setValues:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

