/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) REMObjectID * accountID; 
@property (nonatomic,readonly) NSString * externalIdentifierForMarkedForDeletionObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
+(/*^block*/id)rem_DA_deletedKeyFromTombstoneBlock;
+(BOOL)rem_DA_supportsLazyDelete;
+(BOOL)rem_DA_supportsFetching;
+(id)rem_DA_lazyDeleteProperties;
+(id)objectIDWithUUID:(id)arg1 ;
+(/*^block*/id)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+(BOOL)isChangeTrackableModel;
+(/*^block*/id)rem_DA_fetchByObjectIDBlock;
+(id)cdEntityName;
+(/*^block*/id)rem_DA_fetchByObjectIDsBlock;
+(id)newObjectID;
-(REMObjectID *)accountID;
-(NSString *)daPushKey;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setDaPushKey:(NSString *)arg1 ;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)daSyncToken;
-(NSString *)externalIdentifierForMarkedForDeletionObject;
-(REMObjectID *)remObjectID;
-(id)initCalDAVNotificationWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 uuidString:(id)arg4 hostURL:(id)arg5 externalIdentifier:(id)arg6 externalModificationTag:(id)arg7 ;
-(NSString *)externalModificationTag;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)externalIdentifier;
-(NSURL *)hostURL;
-(NSString *)uuidString;
-(REMObjectID *)objectID;
-(NSString *)description;
-(void)setUuidString:(NSString *)arg1 ;
-(void)setHostURL:(NSURL *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)listID;
-(void)setDaSyncToken:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

