/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAssetBaseDescriptor : CEMPayloadBase {

	NSString* _payloadTitle;
	NSString* _payloadDescription;

}

@property (nonatomic,copy) NSString * payloadTitle;                    //@synthesize payloadTitle=_payloadTitle - In the implementation block
@property (nonatomic,copy) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithTitle:(id)arg1 withDescription:(id)arg2 ;
+(id)buildRequiredOnlyWithTitle:(id)arg1 ;
-(NSString *)payloadDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadTitle:(NSString *)arg1 ;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(NSString *)payloadTitle;
@end

