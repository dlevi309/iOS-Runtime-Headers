/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canAckOnLocalConnection;
-(BOOL)forBulletin;

@end

