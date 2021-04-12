/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSDate, NSString, NSNumber, NSData;

@interface TIUserModelDataStoreEntry : NSObject {

	NSDate* _timestamp;
	NSString* _key;
	NSString* _inputMode;
	NSNumber* _value;
	NSNumber* _secondaryValue;
	NSNumber* _realValue;
	NSData* _properties;

}

@property (retain) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (retain) NSString * inputMode;                   //@synthesize inputMode=_inputMode - In the implementation block
@property (retain) NSNumber * value;                       //@synthesize value=_value - In the implementation block
@property (retain) NSNumber * secondaryValue;              //@synthesize secondaryValue=_secondaryValue - In the implementation block
@property (retain) NSNumber * realValue;                   //@synthesize realValue=_realValue - In the implementation block
@property (retain) NSData * properties;                    //@synthesize properties=_properties - In the implementation block
-(NSString *)key;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSData *)properties;
-(void)setProperties:(NSData *)arg1 ;
-(void)setInputMode:(NSString *)arg1 ;
-(NSString *)inputMode;
-(void)setSecondaryValue:(NSNumber *)arg1 ;
-(NSNumber *)secondaryValue;
-(id)initWithTimestamp:(id)arg1 withKey:(id)arg2 withInputMode:(id)arg3 withValue:(id)arg4 withSecondaryValue:(id)arg5 withRealValue:(id)arg6 withProperties:(id)arg7 ;
-(NSNumber *)realValue;
-(void)setRealValue:(NSNumber *)arg1 ;
@end

