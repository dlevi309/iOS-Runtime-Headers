/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMApplicationLoginItemsDeclaration_LoginItem : CEMPayloadBase {

	NSString* _payloadPath;
	NSNumber* _payloadHide;

}

@property (nonatomic,copy) NSString * payloadPath;              //@synthesize payloadPath=_payloadPath - In the implementation block
@property (nonatomic,copy) NSNumber * payloadHide;              //@synthesize payloadHide=_payloadHide - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithPath:(id)arg1 withHide:(id)arg2 ;
+(id)buildRequiredOnlyWithPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPath:(NSString *)arg1 ;
-(void)setPayloadHide:(NSNumber *)arg1 ;
-(NSString *)payloadPath;
-(NSNumber *)payloadHide;
@end

