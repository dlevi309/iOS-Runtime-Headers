/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@interface _AFDataStoreEntry : NSObject {

	long long _type;
	id _value;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                    //@synthesize value=_value - In the implementation block
-(id)propertyListRepresentation;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)_propertyListStringForType;
-(long long)_typeForPropertyListString:(id)arg1 ;
-(long long)type;
-(id)initWithPropertyListRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)_valuePropertyListRepresentation;
-(id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2 ;
-(id)value;
@end

