/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

@class NSString, NSUUID;


@protocol REMReplicaManagerClient <REMReplicaClockProviding>
@property (nonatomic,readonly) NSString * crdtID; 
@property (nonatomic,readonly) NSUUID * replicaUUID; 
@required
-(NSString *)crdtID;
-(NSUUID *)replicaUUID;

@end

