/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceDockDeclaration_StaticItemTileData, NSString;

@interface CEMDeviceDockDeclaration_StaticItem : CEMPayloadBase {

	CEMDeviceDockDeclaration_StaticItemTileData* _payloadTileData;
	NSString* _payloadTileType;

}

@property (nonatomic,copy) CEMDeviceDockDeclaration_StaticItemTileData * payloadTileData;              //@synthesize payloadTileData=_payloadTileData - In the implementation block
@property (nonatomic,copy) NSString * payloadTileType;                                                 //@synthesize payloadTileType=_payloadTileType - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithTileData:(id)arg1 withTileType:(id)arg2 ;
+(id)buildRequiredOnlyWithTileData:(id)arg1 withTileType:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadTileData:(CEMDeviceDockDeclaration_StaticItemTileData *)arg1 ;
-(void)setPayloadTileType:(NSString *)arg1 ;
-(CEMDeviceDockDeclaration_StaticItemTileData *)payloadTileData;
-(NSString *)payloadTileType;
@end

