/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelActivationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface RMModelActivationSimpleDeclaration : RMModelActivationBase <RMModelRegisteredTypeProtocol> {

	NSArray* _payloadStandardConfigurations;
	NSString* _payloadPredicate;

}

@property (nonatomic,copy) NSArray * payloadStandardConfigurations;              //@synthesize payloadStandardConfigurations=_payloadStandardConfigurations - In the implementation block
@property (nonatomic,copy) NSString * payloadPredicate;                          //@synthesize payloadPredicate=_payloadPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 standardConfigurations:(id)arg2 predicate:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 standardConfigurations:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadStandardConfigurations:(NSArray *)arg1 ;
-(NSArray *)payloadStandardConfigurations;
-(void)setPayloadPredicate:(NSString *)arg1 ;
-(NSString *)payloadPredicate;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end

