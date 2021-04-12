/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)declarations;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)setDeclarations:(NSArray *)arg1 ;
@end

