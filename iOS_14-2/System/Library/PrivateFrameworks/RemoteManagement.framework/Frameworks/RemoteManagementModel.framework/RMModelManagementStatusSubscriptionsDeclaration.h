/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface RMModelManagementStatusSubscriptionsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSArray* _payloadStatusItems;

}

@property (nonatomic,copy) NSArray * payloadStatusItems;              //@synthesize payloadStatusItems=_payloadStatusItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 statusItems:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 statusItems:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setPayloadStatusItems:(NSArray *)arg1 ;
-(NSArray *)payloadStatusItems;
@end

