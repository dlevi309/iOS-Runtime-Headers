/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemDashboardDeclaration_WhiteListItem : CEMPayloadBase {

	NSString* _payloadType;
	NSString* _payloadID;

}

@property (nonatomic,copy) NSString * payloadType;              //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,copy) NSString * payloadID;                //@synthesize payloadID=_payloadID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithType:(id)arg1 withID:(id)arg2 ;
+(id)buildRequiredOnlyWithType:(id)arg1 withID:(id)arg2 ;
-(NSString *)payloadID;
-(NSString *)payloadType;
-(void)setPayloadType:(NSString *)arg1 ;
-(void)setPayloadID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
@end

