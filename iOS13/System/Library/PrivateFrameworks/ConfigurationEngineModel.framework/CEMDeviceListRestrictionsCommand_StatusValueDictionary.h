/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusValueDictionary : CEMPayloadBase {

	NSDictionary* _statusANY;

}

@property (nonatomic,copy) NSDictionary * statusANY;              //@synthesize statusANY=_statusANY - In the implementation block
+(id)build;
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(NSDictionary *)statusANY;
-(void)setStatusANY:(NSDictionary *)arg1 ;
@end

