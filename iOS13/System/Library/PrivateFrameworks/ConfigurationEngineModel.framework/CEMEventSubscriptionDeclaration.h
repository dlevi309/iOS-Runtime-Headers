/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, CEMEventSubscriptionDeclaration_Schedule, NSString;

@interface CEMEventSubscriptionDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadEvents;
	CEMEventSubscriptionDeclaration_Schedule* _payloadSchedule;

}

@property (nonatomic,copy) NSArray * payloadEvents;                                                 //@synthesize payloadEvents=_payloadEvents - In the implementation block
@property (nonatomic,copy) CEMEventSubscriptionDeclaration_Schedule * payloadSchedule;              //@synthesize payloadSchedule=_payloadSchedule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withEvents:(id)arg2 withSchedule:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withEvents:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)payloadEvents;
-(void)setPayloadEvents:(NSArray *)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadSchedule:(CEMEventSubscriptionDeclaration_Schedule *)arg1 ;
-(CEMEventSubscriptionDeclaration_Schedule *)payloadSchedule;
@end

