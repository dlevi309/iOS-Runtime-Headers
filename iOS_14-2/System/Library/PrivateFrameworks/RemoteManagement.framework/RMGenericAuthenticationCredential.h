/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <RemoteManagement/RMAuthenticationCredential.h>

@class NSString, NSDictionary;

@interface RMGenericAuthenticationCredential : RMAuthenticationCredential {

	NSString* _authenticationScheme;
	NSDictionary* _properties;

}

@property (nonatomic,copy,readonly) NSString * authenticationScheme;              //@synthesize authenticationScheme=_authenticationScheme - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;                    //@synthesize properties=_properties - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)properties;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)authenticationScheme;
-(id)initWithAuthenticationScheme:(id)arg1 properties:(id)arg2 ;
-(BOOL)isEqualToAuthenticationCredential:(id)arg1 ;
@end

