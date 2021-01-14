/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL;

@interface STContactAddress : STSiriModelObject {

	long long _type;
	NSString* _stringValue;
	NSURL* _contactIdentifier;
	NSString* _contactInternalGUID;

}
+(BOOL)supportsSecureCoding;
-(id)contactIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)stringValue;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 ;
-(id)description;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 contactIdentifier:(id)arg3 contactInternalGUID:(id)arg4 ;
-(id)contactInternalGUID;
-(id)_aceContextObjectValue;
-(id)initWithStringValue:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
@end

