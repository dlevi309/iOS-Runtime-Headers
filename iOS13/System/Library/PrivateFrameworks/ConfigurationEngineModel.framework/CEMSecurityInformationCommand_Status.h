/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityInformationCommand_StatusSecurityInfo;

@interface CEMSecurityInformationCommand_Status : CEMPayloadBase {

	CEMSecurityInformationCommand_StatusSecurityInfo* _statusSecurityInfo;

}

@property (nonatomic,copy) CEMSecurityInformationCommand_StatusSecurityInfo * statusSecurityInfo;              //@synthesize statusSecurityInfo=_statusSecurityInfo - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithSecurityInfo:(id)arg1 ;
+(id)buildRequiredOnlyWithSecurityInfo:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusSecurityInfo:(CEMSecurityInformationCommand_StatusSecurityInfo *)arg1 ;
-(CEMSecurityInformationCommand_StatusSecurityInfo *)statusSecurityInfo;
@end

