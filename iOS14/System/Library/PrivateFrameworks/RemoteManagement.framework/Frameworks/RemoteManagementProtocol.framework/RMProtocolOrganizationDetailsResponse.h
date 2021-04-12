/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails;

@interface RMProtocolOrganizationDetailsResponse : RMModelPayloadBase {

	NSString* _responseOrganizationDetailsToken;
	RMProtocolOrganizationDetails* _responseOrganizationDetails;

}

@property (nonatomic,copy) NSString * responseOrganizationDetailsToken;                              //@synthesize responseOrganizationDetailsToken=_responseOrganizationDetailsToken - In the implementation block
@property (nonatomic,copy) RMProtocolOrganizationDetails * responseOrganizationDetails;              //@synthesize responseOrganizationDetails=_responseOrganizationDetails - In the implementation block
+(id)requestWithOrganizationDetailsToken:(id)arg1 organizationDetails:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseOrganizationDetailsToken:(NSString *)arg1 ;
-(void)setResponseOrganizationDetails:(RMProtocolOrganizationDetails *)arg1 ;
-(NSString *)responseOrganizationDetailsToken;
-(RMProtocolOrganizationDetails *)responseOrganizationDetails;
@end

