/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, CEMAnyPayload;

@interface CEMDeviceDockDeclaration_StaticItemTileData : CEMPayloadBase {

	NSString* _payloadLabel;
	NSString* _payloadUrl;
	NSNumber* _payloadFileType;
	CEMAnyPayload* _payloadFileData;

}

@property (nonatomic,copy) NSString * payloadLabel;                      //@synthesize payloadLabel=_payloadLabel - In the implementation block
@property (nonatomic,copy) NSString * payloadUrl;                        //@synthesize payloadUrl=_payloadUrl - In the implementation block
@property (nonatomic,copy) NSNumber * payloadFileType;                   //@synthesize payloadFileType=_payloadFileType - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * payloadFileData;              //@synthesize payloadFileData=_payloadFileData - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithLabel:(id)arg1 withUrl:(id)arg2 withFileType:(id)arg3 withFileData:(id)arg4 ;
+(id)buildRequiredOnlyWithLabel:(id)arg1 withFileType:(id)arg2 ;
-(NSNumber *)payloadFileType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadLabel:(NSString *)arg1 ;
-(NSString *)payloadLabel;
-(void)setPayloadUrl:(NSString *)arg1 ;
-(void)setPayloadFileType:(NSNumber *)arg1 ;
-(void)setPayloadFileData:(CEMAnyPayload *)arg1 ;
-(NSString *)payloadUrl;
-(CEMAnyPayload *)payloadFileData;
@end

