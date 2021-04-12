/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceListRestrictionsCommand_StatusBooleanDictionary, CEMDeviceListRestrictionsCommand_StatusValueDictionary, CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary : CEMPayloadBase {

	CEMDeviceListRestrictionsCommand_StatusBooleanDictionary* _statusRestrictedBool;
	CEMDeviceListRestrictionsCommand_StatusValueDictionary* _statusRestrictedValue;
	CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary* _statusIntersection;
	CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary* _statusUnion;

}

@property (nonatomic,copy) CEMDeviceListRestrictionsCommand_StatusBooleanDictionary * statusRestrictedBool;                 //@synthesize statusRestrictedBool=_statusRestrictedBool - In the implementation block
@property (nonatomic,copy) CEMDeviceListRestrictionsCommand_StatusValueDictionary * statusRestrictedValue;                  //@synthesize statusRestrictedValue=_statusRestrictedValue - In the implementation block
@property (nonatomic,copy) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary * statusIntersection;              //@synthesize statusIntersection=_statusIntersection - In the implementation block
@property (nonatomic,copy) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary * statusUnion;                     //@synthesize statusUnion=_statusUnion - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithRestrictedBool:(id)arg1 withRestrictedValue:(id)arg2 withIntersection:(id)arg3 withUnion:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusRestrictedBool:(CEMDeviceListRestrictionsCommand_StatusBooleanDictionary *)arg1 ;
-(void)setStatusRestrictedValue:(CEMDeviceListRestrictionsCommand_StatusValueDictionary *)arg1 ;
-(void)setStatusIntersection:(CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *)arg1 ;
-(void)setStatusUnion:(CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *)arg1 ;
-(CEMDeviceListRestrictionsCommand_StatusBooleanDictionary *)statusRestrictedBool;
-(CEMDeviceListRestrictionsCommand_StatusValueDictionary *)statusRestrictedValue;
-(CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *)statusIntersection;
-(CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *)statusUnion;
@end

