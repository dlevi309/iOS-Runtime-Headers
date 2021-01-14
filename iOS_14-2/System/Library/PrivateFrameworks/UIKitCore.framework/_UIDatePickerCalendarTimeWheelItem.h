/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIDatePickerCalendarTimeWheelItem : NSObject {

	NSString* _stringRepresentation;
	long long _rawValue;
	unsigned long long _cycle;

}

@property (nonatomic,readonly) long long rawValue;                           //@synthesize rawValue=_rawValue - In the implementation block
@property (nonatomic,readonly) NSString * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long cycle;                     //@synthesize cycle=_cycle - In the implementation block
-(unsigned long long)cycle;
-(NSString *)stringRepresentation;
-(long long)rawValue;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRawValue:(long long)arg1 stringRepresentation:(id)arg2 cycle:(unsigned long long)arg3 ;
@end

