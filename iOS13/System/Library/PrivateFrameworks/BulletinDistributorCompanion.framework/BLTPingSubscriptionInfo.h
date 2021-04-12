/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

@class NSString;


@protocol BLTPingSubscriptionInfo <NSObject>
@property (nonatomic,copy,readonly) NSString * sectionID; 
@property (nonatomic,readonly) BOOL forBulletin; 
@property (nonatomic,readonly) BOOL canAck; 
@property (nonatomic,readonly) BOOL canAckOnLocalConnection; 
@required
-(NSString *)sectionID;
-(BOOL)canAck;
-(BOOL)forBulletin;
-(BOOL)canAckOnLocalConnection;

@end

