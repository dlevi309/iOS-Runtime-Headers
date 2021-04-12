/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSArray;

@interface DMFSetDeclarationsRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSString* _syncToken;
	NSArray* _declarations;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * syncToken;                           //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,copy) NSArray * declarations;                         //@synthesize declarations=_declarations - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)organizationIdentifier;
-(void)setSyncToken:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)setDeclarations:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)syncToken;
-(NSArray *)declarations;
@end

