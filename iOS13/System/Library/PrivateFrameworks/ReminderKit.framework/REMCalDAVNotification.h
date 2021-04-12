/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDAChangeTrackableModel.h>
#import <libobjc.A.dylib/_REMDAChangeTrackableModel.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataProviding.h>

@class REMObjectID, NSString, NSURL;

@interface REMCalDAVNotification : NSObject <REMDAChangeTrackableModel, _REMDAChangeTrackableModel, REMExternalSyncMetadataWritableProviding, NSSecureCoding, NSCopying, REMObjectIDProviding, REMExternalSyncMetadataProviding> {

	NSString* externalIdentifier;
	NSString* externalModificationTag;
	NSString* daPushKey;
	NSString* daSyncToken;
	NSString* _uuidString;
	NSURL* _hostURL;
	REMObjectID* _objectID;
	REMObjectID* _accountID;
	REMObjectID* _listID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) REMObjectID * accountID; 
@property (nonatomic,readonly) NSString * externalIdentifierForMarkedForDeletionObject; 
@property (nonatomic,retain) NSString * uuidString;                                                  //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,retain) NSURL * hostURL;                                                        //@synthesize hostURL=_hostURL - In the implementation block
@property (nonatomic,readonly) REMObjectID * objectID;                                               //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountID;                                              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) REMObjectID * listID;                                                 //@synthesize listID=_listID - In the implementation block
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
+(/*^block*/id)rem_DA_deletedKeyFromTombstoneBlock;
+(BOOL)rem_DA_supportsFetching;
+(BOOL)rem_DA_supportsLazyDelete;
+(/*^block*/id)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDsBlock;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)objectID;
-(REMObjectID *)accountID;
-(NSString *)uuidString;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setUuidString:(NSString *)arg1 ;
-(REMObjectID *)listID;
-(NSString *)daSyncToken;
-(void)setDaSyncToken:(NSString *)arg1 ;
-(NSString *)daPushKey;
-(void)setDaPushKey:(NSString *)arg1 ;
-(REMObjectID *)remObjectID;
-(NSURL *)hostURL;
-(NSString *)externalIdentifierForMarkedForDeletionObject;
-(id)initCalDAVNotificationWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 uuidString:(id)arg4 hostURL:(id)arg5 externalIdentifier:(id)arg6 externalModificationTag:(id)arg7 ;
-(void)setHostURL:(NSURL *)arg1 ;
@end

