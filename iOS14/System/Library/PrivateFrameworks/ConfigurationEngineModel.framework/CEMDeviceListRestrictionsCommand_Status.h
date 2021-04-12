/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary, CEMDeviceListRestrictionsCommand_StatusProfileRestrictions;

@interface CEMDeviceListRestrictionsCommand_Status : CEMPayloadBase {

	CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary* _statusGlobalRestrictions;
	CEMDeviceListRestrictionsCommand_StatusProfileRestrictions* _statusProfileRestrictions;

}

@property (nonatomic,copy) CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary * statusGlobalRestrictions;              //@synthesize statusGlobalRestrictions=_statusGlobalRestrictions - In the implementation block
@property (nonatomic,copy) CEMDeviceListRestrictionsCommand_StatusProfileRestrictions * statusProfileRestrictions;                //@synthesize statusProfileRestrictions=_statusProfileRestrictions - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithGlobalRestrictions:(id)arg1 withProfileRestrictions:(id)arg2 ;
+(id)buildRequiredOnlyWithGlobalRestrictions:(id)arg1 withProfileRestrictions:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusGlobalRestrictions:(CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *)arg1 ;
-(void)setStatusProfileRestrictions:(CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *)arg1 ;
-(CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *)statusGlobalRestrictions;
-(CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *)statusProfileRestrictions;
@end

