/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSString;

@interface MCKeyValue : NSObject {

	NSString* _key;
	id _value;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;              //@synthesize valueType=_valueType - In the implementation block
-(unsigned long long)valueType;
-(id)initWithLocalizedString:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithData:(id)arg1 localizedKey:(id)arg2 ;
-(void)setDate:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithDate:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithLocalizedArray:(id)arg1 localizedKey:(id)arg2 ;
-(void)setLocalizedArray:(id)arg1 localizedKey:(id)arg2 ;
-(void)setLocalizedString:(id)arg1 localizedKey:(id)arg2 ;
-(id)initWithValue:(id)arg1 localizedKey:(id)arg2 ;
-(void)setData:(id)arg1 localizedKey:(id)arg2 ;
-(void)setValue:(id)arg1 localizedKey:(id)arg2 ;
-(NSString *)key;
-(id)value;
@end

