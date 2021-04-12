/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

@class NSString;


@protocol REMExternalSyncMetadataProviding
@property (nonatomic,readonly) NSString * externalIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSString * daSyncToken; 
@property (nonatomic,readonly) NSString * daPushKey; 
@required
-(NSString *)externalIdentifier;
-(NSString *)externalModificationTag;
-(NSString *)daSyncToken;
-(NSString *)daPushKey;
-(id)externalIdentifierForMarkedForDeletionObject;

@end

