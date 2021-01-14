/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

@class REMObjectID, NSString;


@protocol _REMDAChangeTrackableModel <NSObject>
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) REMObjectID * accountID; 
@property (nonatomic,readonly) NSString * externalIdentifierForMarkedForDeletionObject; 
@optional
-(NSString *)externalIdentifierForMarkedForDeletionObject;

@required
+(/*^block*/id)rem_DA_deletedKeyFromTombstoneBlock;
+(BOOL)rem_DA_supportsLazyDelete;
+(BOOL)rem_DA_supportsFetching;
+(id)rem_DA_lazyDeleteProperties;
+(/*^block*/id)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDBlock;
+(/*^block*/id)rem_DA_fetchByObjectIDsBlock;
-(REMObjectID *)accountID;
-(REMObjectID *)objectID;

@end

