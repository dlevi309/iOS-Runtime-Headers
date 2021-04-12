/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSString, NSNumber;

@interface RMModelStatusAccountExchange : RMModelStatusBase {

	NSString* _statusIdentifier;
	NSString* _statusDescription;
	NSString* _statusHostname;
	NSNumber* _statusPort;
	NSString* _statusUsername;
	NSNumber* _statusAuthenticated;
	NSNumber* _statusIsMailEnabled;
	NSNumber* _statusAreCalendarsEnabled;
	NSNumber* _statusAreContactsEnabled;
	NSNumber* _statusAreNotesEnabled;
	NSNumber* _statusAreRemindersEnabled;

}

@property (nonatomic,copy) NSString * statusIdentifier;                       //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusDescription;                      //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,copy) NSString * statusHostname;                         //@synthesize statusHostname=_statusHostname - In the implementation block
@property (nonatomic,copy) NSNumber * statusPort;                             //@synthesize statusPort=_statusPort - In the implementation block
@property (nonatomic,copy) NSString * statusUsername;                         //@synthesize statusUsername=_statusUsername - In the implementation block
@property (nonatomic,copy) NSNumber * statusAuthenticated;                    //@synthesize statusAuthenticated=_statusAuthenticated - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsMailEnabled;                    //@synthesize statusIsMailEnabled=_statusIsMailEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreCalendarsEnabled;              //@synthesize statusAreCalendarsEnabled=_statusAreCalendarsEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreContactsEnabled;               //@synthesize statusAreContactsEnabled=_statusAreContactsEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreNotesEnabled;                  //@synthesize statusAreNotesEnabled=_statusAreNotesEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreRemindersEnabled;              //@synthesize statusAreRemindersEnabled=_statusAreRemindersEnabled - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 description:(id)arg2 hostname:(id)arg3 port:(id)arg4 username:(id)arg5 authenticated:(id)arg6 isMailEnabled:(id)arg7 areCalendarsEnabled:(id)arg8 areContactsEnabled:(id)arg9 areNotesEnabled:(id)arg10 areRemindersEnabled:(id)arg11 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)statusDescription;
-(void)setStatusDescription:(NSString *)arg1 ;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusHostname:(NSString *)arg1 ;
-(void)setStatusPort:(NSNumber *)arg1 ;
-(void)setStatusUsername:(NSString *)arg1 ;
-(void)setStatusAuthenticated:(NSNumber *)arg1 ;
-(void)setStatusAreCalendarsEnabled:(NSNumber *)arg1 ;
-(void)setStatusAreRemindersEnabled:(NSNumber *)arg1 ;
-(NSString *)statusHostname;
-(NSNumber *)statusPort;
-(NSString *)statusUsername;
-(NSNumber *)statusAuthenticated;
-(NSNumber *)statusAreCalendarsEnabled;
-(NSNumber *)statusAreRemindersEnabled;
-(void)setStatusIsMailEnabled:(NSNumber *)arg1 ;
-(void)setStatusAreContactsEnabled:(NSNumber *)arg1 ;
-(void)setStatusAreNotesEnabled:(NSNumber *)arg1 ;
-(NSNumber *)statusIsMailEnabled;
-(NSNumber *)statusAreContactsEnabled;
-(NSNumber *)statusAreNotesEnabled;
@end

