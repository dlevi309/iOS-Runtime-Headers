/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPredicateBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMPredicateBase, NSString;

@interface CEMPredicateNot : CEMPredicateBase <CEMRegisteredTypeProtocol> {

	CEMPredicateBase* _payloadPredicate;

}

@property (nonatomic,copy) CEMPredicateBase * payloadPredicate;              //@synthesize payloadPredicate=_payloadPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildWithPredicate:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithPredicate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPredicate:(CEMPredicateBase *)arg1 ;
-(CEMPredicateBase *)payloadPredicate;
@end

