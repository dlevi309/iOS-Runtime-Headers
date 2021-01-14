/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMAccountWebClipDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadPrecomposed;
	NSNumber* _payloadFullScreen;
	NSString* _payloadURL;
	NSNumber* _payloadIsRemovable;
	NSString* _payloadLabel;
	NSString* _payloadIcon;

}

@property (nonatomic,copy) NSNumber * payloadPrecomposed;              //@synthesize payloadPrecomposed=_payloadPrecomposed - In the implementation block
@property (nonatomic,copy) NSNumber * payloadFullScreen;               //@synthesize payloadFullScreen=_payloadFullScreen - In the implementation block
@property (nonatomic,copy) NSString * payloadURL;                      //@synthesize payloadURL=_payloadURL - In the implementation block
@property (nonatomic,copy) NSNumber * payloadIsRemovable;              //@synthesize payloadIsRemovable=_payloadIsRemovable - In the implementation block
@property (nonatomic,copy) NSString * payloadLabel;                    //@synthesize payloadLabel=_payloadLabel - In the implementation block
@property (nonatomic,copy) NSString * payloadIcon;                     //@synthesize payloadIcon=_payloadIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withPrecomposed:(id)arg2 withFullScreen:(id)arg3 withURL:(id)arg4 withIsRemovable:(id)arg5 withLabel:(id)arg6 withIcon:(id)arg7 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withURL:(id)arg2 withLabel:(id)arg3 ;
-(NSString *)payloadURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSString *)payloadIcon;
-(void)setPayloadPrecomposed:(NSNumber *)arg1 ;
-(void)setPayloadFullScreen:(NSNumber *)arg1 ;
-(void)setPayloadURL:(NSString *)arg1 ;
-(void)setPayloadIsRemovable:(NSNumber *)arg1 ;
-(void)setPayloadLabel:(NSString *)arg1 ;
-(void)setPayloadIcon:(NSString *)arg1 ;
-(NSNumber *)payloadPrecomposed;
-(NSNumber *)payloadFullScreen;
-(NSNumber *)payloadIsRemovable;
-(NSString *)payloadLabel;
@end

