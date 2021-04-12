/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <DataAccess/DAAction.h>

@class NSString;

@interface DAEditPropertyAction : DAAction {

	NSString* _propertyName;
	NSString* _value;
	NSString* _propertyNamespace;

}

@property (nonatomic,readonly) NSString * propertyName;                   //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * propertyNamespace;              //@synthesize propertyNamespace=_propertyNamespace - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)propertyNamespace;
-(id)initWithChangedItem:(id)arg1 propertyName:(id)arg2 value:(id)arg3 propertyNamespace:(id)arg4 serverId:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)propertyName;
-(NSString *)value;
@end

