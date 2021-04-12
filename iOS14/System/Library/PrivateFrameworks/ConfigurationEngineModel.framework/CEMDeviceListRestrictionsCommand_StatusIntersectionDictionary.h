/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary : CEMPayloadBase {

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

