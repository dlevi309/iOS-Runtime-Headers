/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDAChangeTrackableModel.h>
#import <libobjc.A.dylib/_REMDAChangeTrackableModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@class NSString, REMObjectID, NSPersonNameComponents;

@interface REMSharee : NSObject <REMDAChangeTrackableModel, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding> {

	NSString* _displayName;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _namePrefix;
	NSString* _nameSuffix;
	NSString* _nickname;
	NSString* _address;
	long long _status;
	long long _accessLevel;
	REMObjectID* _objectID;
	REMObjectID* _accountID;
	REMObjectID* _listID;

}

@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) REMObjectID * accountID; 
@property (nonatomic,readonly) NSString * externalIdentifierForMarkedForDeletionObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                                                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;                                                //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                                                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * namePrefix;                                                //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,readonly) NSString * nameSuffix;                                                //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (nonatomic,readonly) NSString * nickname;                                                  //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,readonly) NSPersonNameComponents * personNameComponents; 
@property (nonatomic,readonly) NSString * address;                                                   //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) long long status;                                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long accessLevel;                                                //@synthesize accessLevel=_accessLevel - In the implementation block
@property (nonatomic,readonly) REMObjectID * objectID;                                               //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountID;                                              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) REMObjectID * listID;                                                 //@synthesize listID=_listID - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(BOOL)supportsSecureCoding;
+(/*^block*/id)rem_DA_deletedKeyFromTombstoneBlock;
+(BOOL)rem_DA_supportsLazyDelete;
+(BOOL)rem_DA_supportsFetching;
+(id)rem_DA_lazyDeleteProperties;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)nullifiedAssignmentOriginatorID;
+(/*^block*/id)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+(BOOL)isChangeTrackableModel;
+(/*^block*/id)rem_DA_fetchByObjectIDBlock;
+(id)cdEntityName;
+(/*^block*/id)rem_DA_fetchByObjectIDsBlock;
+(id)newObjectID;
-(REMObjectID *)accountID;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initShareeWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 displayName:(id)arg4 firstName:(id)arg5 middleName:(id)arg6 lastName:(id)arg7 namePrefix:(id)arg8 nameSuffix:(id)arg9 nickname:(id)arg10 address:(id)arg11 status:(long long)arg12 accessLevel:(long long)arg13 ;
-(BOOL)isEqualToSharee:(id)arg1 ;
-(id)formattedNameWithStyle:(long long)arg1 ;
-(id)initShareeWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 displayName:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 address:(id)arg7 status:(long long)arg8 accessLevel:(long long)arg9 ;
-(id)initShareeWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 personNameComponents:(id)arg4 address:(id)arg5 status:(long long)arg6 accessLevel:(long long)arg7 ;
-(NSString *)namePrefix;
-(REMObjectID *)remObjectID;
-(NSString *)nameSuffix;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(long long)accessLevel;
-(NSString *)nickname;
-(id)shortName;
-(REMObjectID *)objectID;
-(NSString *)description;
-(NSString *)middleName;
-(NSString *)address;
-(id)formattedName;
-(unsigned long long)hash;
-(NSPersonNameComponents *)personNameComponents;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)listID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

