/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIDatePickerCalendarTimeFormat;

@interface _UIDatePickerCalendarTimeValueStore : NSObject {

	unsigned long long* _inputBuffer;
	_UIDatePickerCalendarTimeFormat* _timeFormat;

}

@property (nonatomic,readonly) unsigned long long* inputBuffer;                           //@synthesize inputBuffer=_inputBuffer - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeFormat * timeFormat;              //@synthesize timeFormat=_timeFormat - In the implementation block
@property (assign,nonatomic) unsigned long long hourValue; 
@property (assign,nonatomic) unsigned long long minuteValue; 
-(unsigned long long)hourValue;
-(_UIDatePickerCalendarTimeFormat *)timeFormat;
-(unsigned long long)minuteValue;
-(unsigned long long*)inputBuffer;
-(void)setDigits:(unsigned long long)arg1 count:(unsigned long long)arg2 inScope:(long long)arg3 append:(BOOL)arg4 ;
-(void)setHourValue:(unsigned long long)arg1 ;
-(void)setMinuteValue:(unsigned long long)arg1 ;
-(unsigned long long)digitsInScope:(long long)arg1 ;
-(unsigned long long)__integerInBufferWithRange:(NSRange)arg1 ;
-(void)__setIntegerInBuffer:(unsigned long long)arg1 range:(NSRange)arg2 ;
-(void)_setDigits:(unsigned long long)arg1 count:(unsigned long long)arg2 inRange:(NSRange)arg3 append:(BOOL)arg4 ;
-(void)_verifyInputWithScope:(long long)arg1 ;
-(void)_removeLastDigitInRange:(NSRange)arg1 ;
-(id)initWithTimeFormat:(id)arg1 ;
-(void)removeLastDigitInScope:(long long)arg1 ;
-(void)dealloc;
@end

