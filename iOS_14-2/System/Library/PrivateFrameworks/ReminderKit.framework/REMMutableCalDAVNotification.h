/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

