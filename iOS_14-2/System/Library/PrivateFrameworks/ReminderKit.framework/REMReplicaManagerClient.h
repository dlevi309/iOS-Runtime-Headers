/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
