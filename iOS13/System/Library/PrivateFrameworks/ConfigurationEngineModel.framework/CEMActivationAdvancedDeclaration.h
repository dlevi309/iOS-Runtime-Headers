/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMDeclarationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, CEMAnyPayload, NSString;

@interface CEMActivationAdvancedDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadRequiredConfigurations;
	NSArray* _payloadStandardConfigurations;
	CEMAnyPayload* _payloadActivationPredicate;

}

@property (nonatomic,copy) NSArray * payloadRequiredConfigurations;                 //@synthesize payloadRequiredConfigurations=_payloadRequiredConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * payloadStandardConfigurations;                 //@synthesize payloadStandardConfigurations=_payloadStandardConfigurations - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * payloadActivationPredicate;              //@synthesize payloadActivationPredicate=_payloadActivationPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withRequiredConfigurations:(id)arg2 withStandardConfigurations:(id)arg3 withActivationPredicate:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withRequiredConfigurations:(id)arg2 withStandardConfigurations:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRequiredConfigurations:(NSArray *)arg1 ;
-(void)setPayloadStandardConfigurations:(NSArray *)arg1 ;
-(void)setPayloadActivationPredicate:(CEMAnyPayload *)arg1 ;
-(NSArray *)payloadRequiredConfigurations;
-(NSArray *)payloadStandardConfigurations;
-(CEMAnyPayload *)payloadActivationPredicate;
@end

