/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(NSString *)propertyName;
-(NSString *)propertyNamespace;
-(id)initWithChangedItem:(id)arg1 propertyName:(id)arg2 value:(id)arg3 propertyNamespace:(id)arg4 serverId:(id)arg5 ;
@end

