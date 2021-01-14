/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSString, NSNumber;

@interface RMModelStatusAccountSubscribedCalendar : RMModelStatusBase {

	NSString* _statusIdentifier;
	NSString* _statusVisibleName;
	NSString* _statusCalendarUrl;
	NSString* _statusUsername;
	NSNumber* _statusAuthenticated;
	NSNumber* _statusIsEnabled;

}

@property (nonatomic,copy) NSString * statusIdentifier;                 //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusVisibleName;                //@synthesize statusVisibleName=_statusVisibleName - In the implementation block
@property (nonatomic,copy) NSString * statusCalendarUrl;                //@synthesize statusCalendarUrl=_statusCalendarUrl - In the implementation block
@property (nonatomic,copy) NSString * statusUsername;                   //@synthesize statusUsername=_statusUsername - In the implementation block
@property (nonatomic,copy) NSNumber * statusAuthenticated;              //@synthesize statusAuthenticated=_statusAuthenticated - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsEnabled;                  //@synthesize statusIsEnabled=_statusIsEnabled - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 calendarUrl:(id)arg3 username:(id)arg4 authenticated:(id)arg5 isEnabled:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusVisibleName:(NSString *)arg1 ;
-(void)setStatusUsername:(NSString *)arg1 ;
-(void)setStatusAuthenticated:(NSNumber *)arg1 ;
-(NSString *)statusVisibleName;
-(NSString *)statusUsername;
-(NSNumber *)statusAuthenticated;
-(void)setStatusIsEnabled:(NSNumber *)arg1 ;
-(NSNumber *)statusIsEnabled;
-(void)setStatusCalendarUrl:(NSString *)arg1 ;
-(NSString *)statusCalendarUrl;
@end

