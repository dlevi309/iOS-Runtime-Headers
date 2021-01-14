/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol NSObject;
@class NSArray;

@interface SSBagKey : NSObject {

	id<NSObject> _defaultValue;
	NSArray* _stringRepresentation;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) id<NSObject> defaultValue;                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) NSArray * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;                //@synthesize valueType=_valueType - In the implementation block
-(unsigned long long)valueType;
-(NSArray *)stringRepresentation;
-(id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id<NSObject>)defaultValue;
-(id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 ;
-(id)valueFromDictionary:(id)arg1 ;
@end

