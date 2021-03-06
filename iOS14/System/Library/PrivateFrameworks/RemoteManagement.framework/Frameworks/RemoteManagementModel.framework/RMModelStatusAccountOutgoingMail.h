/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSString, NSNumber;

@interface RMModelStatusAccountOutgoingMail : RMModelStatusBase {

	NSString* _statusIdentifier;
	NSString* _statusVisibleName;
	NSString* _statusHostname;
	NSNumber* _statusPort;
	NSString* _statusUsername;
	NSNumber* _statusAuthenticated;

}

@property (nonatomic,copy) NSString * statusIdentifier;                 //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusVisibleName;                //@synthesize statusVisibleName=_statusVisibleName - In the implementation block
@property (nonatomic,copy) NSString * statusHostname;                   //@synthesize statusHostname=_statusHostname - In the implementation block
@property (nonatomic,copy) NSNumber * statusPort;                       //@synthesize statusPort=_statusPort - In the implementation block
@property (nonatomic,copy) NSString * statusUsername;                   //@synthesize statusUsername=_statusUsername - In the implementation block
@property (nonatomic,copy) NSNumber * statusAuthenticated;              //@synthesize statusAuthenticated=_statusAuthenticated - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 hostname:(id)arg3 port:(id)arg4 username:(id)arg5 authenticated:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusVisibleName:(NSString *)arg1 ;
-(void)setStatusHostname:(NSString *)arg1 ;
-(void)setStatusPort:(NSNumber *)arg1 ;
-(void)setStatusUsername:(NSString *)arg1 ;
-(void)setStatusAuthenticated:(NSNumber *)arg1 ;
-(NSString *)statusVisibleName;
-(NSString *)statusHostname;
-(NSNumber *)statusPort;
-(NSString *)statusUsername;
-(NSNumber *)statusAuthenticated;
@end

