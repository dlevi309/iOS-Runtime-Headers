/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@interface _AFDataStoreEntry : NSObject {

	long long _type;
	id _value;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                    //@synthesize value=_value - In the implementation block
-(long long)type;
-(id)value;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)propertyListRepresentation;
-(id)_propertyListStringForType;
-(long long)_typeForPropertyListString:(id)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)_valuePropertyListRepresentation;
-(id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2 ;
@end

