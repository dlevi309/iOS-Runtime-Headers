/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMModelDeclarationBase : RMModelPayloadBase {

	NSString* _declarationType;
	NSString* _declarationIdentifier;
	NSString* _declarationServerToken;
	RMModelAnyPayload* _declarationPayload;

}

@property (nonatomic,copy) NSString * declarationType;                          //@synthesize declarationType=_declarationType - In the implementation block
@property (nonatomic,copy) NSString * declarationIdentifier;                    //@synthesize declarationIdentifier=_declarationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * declarationServerToken;                   //@synthesize declarationServerToken=_declarationServerToken - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * declarationPayload;              //@synthesize declarationPayload=_declarationPayload - In the implementation block
+(id)declarationClassType;
+(id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)declarationIdentifier;
-(NSString *)declarationType;
-(void)setDeclarationType:(NSString *)arg1 ;
-(void)setDeclarationIdentifier:(NSString *)arg1 ;
-(RMModelAnyPayload *)declarationPayload;
-(void)setDeclarationPayload:(RMModelAnyPayload *)arg1 ;
-(void)updateServerToken;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(NSString *)declarationServerToken;
-(void)setDeclarationServerToken:(NSString *)arg1 ;
@end

