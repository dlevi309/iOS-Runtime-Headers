/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSArray;

@interface DMFFetchDeclarationsRequest : DMFTaskRequest {

	BOOL _includeInternalState;
	BOOL _includePayloadContents;
	NSString* _organizationIdentifier;
	NSArray* _payloadIdentifiers;

}

@property (assign,nonatomic) BOOL includeInternalState;                    //@synthesize includeInternalState=_includeInternalState - In the implementation block
@property (assign,nonatomic) BOOL includePayloadContents;                  //@synthesize includePayloadContents=_includePayloadContents - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * payloadIdentifiers;                   //@synthesize payloadIdentifiers=_payloadIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)organizationIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)payloadIdentifiers;
-(BOOL)includePayloadContents;
-(BOOL)includeInternalState;
-(void)setPayloadIdentifiers:(NSArray *)arg1 ;
-(void)setIncludeInternalState:(BOOL)arg1 ;
-(void)setIncludePayloadContents:(BOOL)arg1 ;
@end

