/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceInformationCommand_StatusQueryResponses, CEMDeviceInformationCommand_StatusErrorResponses;

@interface CEMDeviceInformationCommand_Status : CEMPayloadBase {

	CEMDeviceInformationCommand_StatusQueryResponses* _statusQueryResponses;
	CEMDeviceInformationCommand_StatusErrorResponses* _statusErrorResponses;

}

@property (nonatomic,copy) CEMDeviceInformationCommand_StatusQueryResponses * statusQueryResponses;              //@synthesize statusQueryResponses=_statusQueryResponses - In the implementation block
@property (nonatomic,copy) CEMDeviceInformationCommand_StatusErrorResponses * statusErrorResponses;              //@synthesize statusErrorResponses=_statusErrorResponses - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithQueryResponses:(id)arg1 withErrorResponses:(id)arg2 ;
+(id)buildRequiredOnlyWithQueryResponses:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusQueryResponses:(CEMDeviceInformationCommand_StatusQueryResponses *)arg1 ;
-(void)setStatusErrorResponses:(CEMDeviceInformationCommand_StatusErrorResponses *)arg1 ;
-(CEMDeviceInformationCommand_StatusQueryResponses *)statusQueryResponses;
-(CEMDeviceInformationCommand_StatusErrorResponses *)statusErrorResponses;
@end

