/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolOrganizationDetails_Proof : RMModelPayloadBase {

	NSString* _detailsIdentityToken;

}

@property (nonatomic,copy) NSString * detailsIdentityToken;              //@synthesize detailsIdentityToken=_detailsIdentityToken - In the implementation block
+(id)buildRequiredOnly;
+(id)allowedDetailsKeys;
+(id)buildWithIdentityToken:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setDetailsIdentityToken:(NSString *)arg1 ;
-(NSString *)detailsIdentityToken;
@end

