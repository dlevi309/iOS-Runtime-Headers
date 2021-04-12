/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface CEMSystemMigrationDeclaration_CustomBehaviorItem : CEMPayloadBase {

	NSString* _payloadContext;
	NSArray* _payloadPaths;

}

@property (nonatomic,copy) NSString * payloadContext;              //@synthesize payloadContext=_payloadContext - In the implementation block
@property (nonatomic,copy) NSArray * payloadPaths;                 //@synthesize payloadPaths=_payloadPaths - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithContext:(id)arg1 withPaths:(id)arg2 ;
+(id)buildRequiredOnlyWithContext:(id)arg1 withPaths:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadContext:(NSString *)arg1 ;
-(void)setPayloadPaths:(NSArray *)arg1 ;
-(NSString *)payloadContext;
-(NSArray *)payloadPaths;
@end

