/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem : CEMPayloadBase {

	NSString* _statusGUID;
	NSString* _statusShortName;

}

@property (nonatomic,copy) NSString * statusGUID;                   //@synthesize statusGUID=_statusGUID - In the implementation block
@property (nonatomic,copy) NSString * statusShortName;              //@synthesize statusShortName=_statusShortName - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithGUID:(id)arg1 withShortName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusGUID:(NSString *)arg1 ;
-(void)setStatusShortName:(NSString *)arg1 ;
-(NSString *)statusGUID;
-(NSString *)statusShortName;
@end

