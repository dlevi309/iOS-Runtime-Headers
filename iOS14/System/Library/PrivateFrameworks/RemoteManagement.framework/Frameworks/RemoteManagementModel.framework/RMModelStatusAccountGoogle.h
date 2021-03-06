/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSString, NSNumber;

@interface RMModelStatusAccountGoogle : RMModelStatusBase {

	NSString* _statusIdentifier;
	NSString* _statusVisibleName;
	NSString* _statusUsername;
	NSNumber* _statusAuthenticated;
	NSNumber* _statusIsMailEnabled;
	NSNumber* _statusAreCalendarsEnabled;
	NSNumber* _statusAreContactsEnabled;
	NSNumber* _statusAreNotesEnabled;

}

@property (nonatomic,copy) NSString * statusIdentifier;                       //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusVisibleName;                      //@synthesize statusVisibleName=_statusVisibleName - In the implementation block
@property (nonatomic,copy) NSString * statusUsername;                         //@synthesize statusUsername=_statusUsername - In the implementation block
@property (nonatomic,copy) NSNumber * statusAuthenticated;                    //@synthesize statusAuthenticated=_statusAuthenticated - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsMailEnabled;                    //@synthesize statusIsMailEnabled=_statusIsMailEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreCalendarsEnabled;              //@synthesize statusAreCalendarsEnabled=_statusAreCalendarsEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreContactsEnabled;               //@synthesize statusAreContactsEnabled=_statusAreContactsEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreNotesEnabled;                  //@synthesize statusAreNotesEnabled=_statusAreNotesEnabled - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 username:(id)arg3 authenticated:(id)arg4 isMailEnabled:(id)arg5 areCalendarsEnabled:(id)arg6 areContactsEnabled:(id)arg7 areNotesEnabled:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusVisibleName:(NSString *)arg1 ;
-(void)setStatusUsername:(NSString *)arg1 ;
-(void)setStatusAuthenticated:(NSNumber *)arg1 ;
-(void)setStatusAreCalendarsEnabled:(NSNumber *)arg1 ;
-(NSString *)statusVisibleName;
-(NSString *)statusUsername;
-(NSNumber *)statusAuthenticated;
-(NSNumber *)statusAreCalendarsEnabled;
-(void)setStatusIsMailEnabled:(NSNumber *)arg1 ;
-(void)setStatusAreContactsEnabled:(NSNumber *)arg1 ;
-(void)setStatusAreNotesEnabled:(NSNumber *)arg1 ;
-(NSNumber *)statusIsMailEnabled;
-(NSNumber *)statusAreContactsEnabled;
-(NSNumber *)statusAreNotesEnabled;
@end

