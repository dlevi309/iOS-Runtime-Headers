/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails_Proof;

@interface RMProtocolOrganizationDetails : RMModelPayloadBase {

	NSString* _detailsName;
	NSString* _detailsEmail;
	NSString* _detailsURL;
	RMProtocolOrganizationDetails_Proof* _detailsProof;

}

@property (nonatomic,copy) NSString * detailsName;                                          //@synthesize detailsName=_detailsName - In the implementation block
@property (nonatomic,copy) NSString * detailsEmail;                                         //@synthesize detailsEmail=_detailsEmail - In the implementation block
@property (nonatomic,copy) NSString * detailsURL;                                           //@synthesize detailsURL=_detailsURL - In the implementation block
@property (nonatomic,copy) RMProtocolOrganizationDetails_Proof * detailsProof;              //@synthesize detailsProof=_detailsProof - In the implementation block
+(id)requestWithName:(id)arg1 email:(id)arg2 URL:(id)arg3 proof:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setDetailsName:(NSString *)arg1 ;
-(void)setDetailsEmail:(NSString *)arg1 ;
-(void)setDetailsURL:(NSString *)arg1 ;
-(void)setDetailsProof:(RMProtocolOrganizationDetails_Proof *)arg1 ;
-(NSString *)detailsName;
-(NSString *)detailsEmail;
-(NSString *)detailsURL;
-(RMProtocolOrganizationDetails_Proof *)detailsProof;
@end

