/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, CEMAnyPayload;

@interface CEMDeclarationBase : CEMPayloadBase {

	NSString* _declarationType;
	NSString* _declarationIdentifier;
	NSString* _declarationDescription;
	NSString* _declarationServerHash;
	NSNumber* _declarationRequiresNetworkTether;
	NSString* _declarationActivationScope;
	CEMAnyPayload* _declarationPayload;

}

@property (nonatomic,copy) NSString * declarationType;                               //@synthesize declarationType=_declarationType - In the implementation block
@property (nonatomic,copy) NSString * declarationIdentifier;                         //@synthesize declarationIdentifier=_declarationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * declarationDescription;                        //@synthesize declarationDescription=_declarationDescription - In the implementation block
@property (nonatomic,copy) NSString * declarationServerHash;                         //@synthesize declarationServerHash=_declarationServerHash - In the implementation block
@property (nonatomic,copy) NSNumber * declarationRequiresNetworkTether;              //@synthesize declarationRequiresNetworkTether=_declarationRequiresNetworkTether - In the implementation block
@property (nonatomic,copy) NSString * declarationActivationScope;                    //@synthesize declarationActivationScope=_declarationActivationScope - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * declarationPayload;                       //@synthesize declarationPayload=_declarationPayload - In the implementation block
+(id)declarationForData:(id)arg1 error:(id*)arg2 ;
+(id)declarationClass;
+(id)declarationForPayload:(id)arg1 error:(id*)arg2 ;
-(id)serialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)declarationIdentifier;
-(void)updateServerHash;
-(id)serializeAsDataWithError:(id*)arg1 ;
-(NSString *)declarationType;
-(void)setDeclarationType:(NSString *)arg1 ;
-(void)setDeclarationIdentifier:(NSString *)arg1 ;
-(BOOL)loadDeclarationFromDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)declarationDescription;
-(void)setDeclarationDescription:(NSString *)arg1 ;
-(NSString *)declarationServerHash;
-(void)setDeclarationServerHash:(NSString *)arg1 ;
-(NSNumber *)declarationRequiresNetworkTether;
-(void)setDeclarationRequiresNetworkTether:(NSNumber *)arg1 ;
-(NSString *)declarationActivationScope;
-(void)setDeclarationActivationScope:(NSString *)arg1 ;
-(CEMAnyPayload *)declarationPayload;
-(void)setDeclarationPayload:(CEMAnyPayload *)arg1 ;
@end

