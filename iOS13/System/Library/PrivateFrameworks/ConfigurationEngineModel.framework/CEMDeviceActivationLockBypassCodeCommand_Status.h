/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceActivationLockBypassCodeCommand_Status : CEMPayloadBase {

	NSString* _statusActivationLockBypassCode;

}

@property (nonatomic,copy) NSString * statusActivationLockBypassCode;              //@synthesize statusActivationLockBypassCode=_statusActivationLockBypassCode - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithActivationLockBypassCode:(id)arg1 ;
+(id)buildRequiredOnlyWithActivationLockBypassCode:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusActivationLockBypassCode:(NSString *)arg1 ;
-(NSString *)statusActivationLockBypassCode;
@end

