/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)properties;
-(NSString *)authenticationScheme;
-(id)initWithAuthenticationScheme:(id)arg1 properties:(id)arg2 ;
-(BOOL)isEqualToAuthenticationCredential:(id)arg1 ;
@end

