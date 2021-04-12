/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@interface ICSMultiValueProperty : ICSProperty
-(id)values;
-(id)value;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isMultiValued;
-(void)setValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setValues:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

