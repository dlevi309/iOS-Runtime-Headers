/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)stringRepresentation;
-(unsigned long long)valueType;
-(id<NSObject>)defaultValue;
-(id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 ;
-(id)valueFromDictionary:(id)arg1 ;
@end

