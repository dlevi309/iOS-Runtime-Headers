/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase {

	NSNumber* _statusPasswordExists;
	NSNumber* _statusChangePending;
	NSNumber* _statusAllowOroms;

}

@property (nonatomic,copy) NSNumber * statusPasswordExists;              //@synthesize statusPasswordExists=_statusPasswordExists - In the implementation block
@property (nonatomic,copy) NSNumber * statusChangePending;               //@synthesize statusChangePending=_statusChangePending - In the implementation block
@property (nonatomic,copy) NSNumber * statusAllowOroms;                  //@synthesize statusAllowOroms=_statusAllowOroms - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithPasswordExists:(id)arg1 withChangePending:(id)arg2 withAllowOroms:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusPasswordExists:(NSNumber *)arg1 ;
-(void)setStatusChangePending:(NSNumber *)arg1 ;
-(void)setStatusAllowOroms:(NSNumber *)arg1 ;
-(NSNumber *)statusPasswordExists;
-(NSNumber *)statusChangePending;
-(NSNumber *)statusAllowOroms;
@end

