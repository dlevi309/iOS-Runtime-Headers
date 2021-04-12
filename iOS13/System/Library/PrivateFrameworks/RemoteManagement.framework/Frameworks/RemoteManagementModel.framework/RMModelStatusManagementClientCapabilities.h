/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSArray, RMModelAnyPayload, RMModelStatusManagementClientCapabilities_SupportedPayloads;

@interface RMModelStatusManagementClientCapabilities : RMModelStatusBase {

	NSArray* _statusSupportedVersions;
	RMModelAnyPayload* _statusSupportedFeatures;
	RMModelStatusManagementClientCapabilities_SupportedPayloads* _statusSupportedPayloads;

}

@property (nonatomic,copy) NSArray * statusSupportedVersions;                                                                  //@synthesize statusSupportedVersions=_statusSupportedVersions - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * statusSupportedFeatures;                                                        //@synthesize statusSupportedFeatures=_statusSupportedFeatures - In the implementation block
@property (nonatomic,copy) RMModelStatusManagementClientCapabilities_SupportedPayloads * statusSupportedPayloads;              //@synthesize statusSupportedPayloads=_statusSupportedPayloads - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3 ;
+(id)buildRequiredOnlyWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusSupportedVersions:(NSArray *)arg1 ;
-(void)setStatusSupportedFeatures:(RMModelAnyPayload *)arg1 ;
-(void)setStatusSupportedPayloads:(RMModelStatusManagementClientCapabilities_SupportedPayloads *)arg1 ;
-(NSArray *)statusSupportedVersions;
-(RMModelAnyPayload *)statusSupportedFeatures;
-(RMModelStatusManagementClientCapabilities_SupportedPayloads *)statusSupportedPayloads;
@end

