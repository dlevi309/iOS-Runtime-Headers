/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMDeclarationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, CEMPredicateBase, NSString;

@interface CEMActivationSimpleDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadStandardConfigurations;
	CEMPredicateBase* _payloadPredicate;

}

@property (nonatomic,copy) NSArray * payloadStandardConfigurations;              //@synthesize payloadStandardConfigurations=_payloadStandardConfigurations - In the implementation block
@property (nonatomic,copy) CEMPredicateBase * payloadPredicate;                  //@synthesize payloadPredicate=_payloadPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildWithIdentifier:(id)arg1 withStandardConfigurations:(id)arg2 withPredicate:(id)arg3 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withStandardConfigurations:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadStandardConfigurations:(NSArray *)arg1 ;
-(NSArray *)payloadStandardConfigurations;
-(void)setPayloadPredicate:(CEMPredicateBase *)arg1 ;
-(CEMPredicateBase *)payloadPredicate;
@end

