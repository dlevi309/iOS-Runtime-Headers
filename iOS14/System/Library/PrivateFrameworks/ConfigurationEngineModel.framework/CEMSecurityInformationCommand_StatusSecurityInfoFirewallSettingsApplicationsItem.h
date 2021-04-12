/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettingsApplicationsItem : CEMPayloadBase {

	NSNumber* _statusAllowed;
	NSString* _statusBundleID;
	NSString* _statusName;

}

@property (nonatomic,copy) NSNumber * statusAllowed;               //@synthesize statusAllowed=_statusAllowed - In the implementation block
@property (nonatomic,copy) NSString * statusBundleID;              //@synthesize statusBundleID=_statusBundleID - In the implementation block
@property (nonatomic,copy) NSString * statusName;                  //@synthesize statusName=_statusName - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithAllowed:(id)arg1 withBundleID:(id)arg2 withName:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusName:(NSString *)arg1 ;
-(NSString *)statusName;
-(void)setStatusAllowed:(NSNumber *)arg1 ;
-(void)setStatusBundleID:(NSString *)arg1 ;
-(NSNumber *)statusAllowed;
-(NSString *)statusBundleID;
@end

