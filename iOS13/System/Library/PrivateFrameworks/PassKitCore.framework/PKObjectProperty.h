/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(unsigned long long)type;
-(id)initWithProperty:(objc_propertyRef)arg1 ;
-(NSString *)valueGetter;
-(NSString *)variableName;
-(Class)aClass;
@end

