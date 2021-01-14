/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

@class NSString;


@protocol REMExternalSyncMetadataProviding
@property (nonatomic,readonly) NSString * externalIdentifier; 
@property (nonatomic,readonly) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSString * daSyncToken; 
@property (nonatomic,readonly) NSString * daPushKey; 
@required
-(NSString *)daPushKey;
-(NSString *)daSyncToken;
-(id)externalIdentifierForMarkedForDeletionObject;
-(NSString *)externalModificationTag;
-(NSString *)externalIdentifier;

@end

