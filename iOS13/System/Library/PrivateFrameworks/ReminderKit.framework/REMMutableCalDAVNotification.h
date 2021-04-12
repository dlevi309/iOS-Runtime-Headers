/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMCalDAVNotification.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>

@class NSString, NSURL;

@interface REMMutableCalDAVNotification : REMCalDAVNotification <REMExternalSyncMetadataWritableProviding>

@property (nonatomic,retain) NSString * uuidString; 
@property (nonatomic,retain) NSURL * hostURL; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
@end

