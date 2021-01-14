/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString;

@interface PKObjectProperty : NSObject {

	NSString* _name;
	NSString* _variableName;
	Class _aClass;
	unsigned long long _type;
	NSString* _valueGetter;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * variableName;              //@synthesize variableName=_variableName - In the implementation block
@property (nonatomic,copy,readonly) Class aClass;                         //@synthesize aClass=_aClass - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * valueGetter;               //@synthesize valueGetter=_valueGetter - In the implementation block
-(id)initWithProperty:(objc_propertyRef)arg1 ;
-(Class)aClass;
-(NSString *)variableName;
-(NSString *)name;
-(NSString *)valueGetter;
-(unsigned long long)type;
@end

