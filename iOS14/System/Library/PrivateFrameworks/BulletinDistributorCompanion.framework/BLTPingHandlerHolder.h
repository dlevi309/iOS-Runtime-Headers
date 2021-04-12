/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BLTPingSubscriptionInfo.h>

@class NSString;

@interface BLTPingHandlerHolder : NSObject <BLTPingSubscriptionInfo> {

	id _pingHandler;
	BOOL _forBulletin;
	BOOL _forNotification;
	NSString* _sectionID;
	unsigned long long _ackType;

}

@property (nonatomic,copy) NSString * sectionID;                          //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) BOOL forBulletin;                            //@synthesize forBulletin=_forBulletin - In the implementation block
@property (assign,nonatomic) BOOL forNotification;                        //@synthesize forNotification=_forNotification - In the implementation block
@property (assign,nonatomic) unsigned long long ackType;                  //@synthesize ackType=_ackType - In the implementation block
@property (nonatomic,readonly) BOOL canAck; 
@property (nonatomic,readonly) BOOL canAckOnLocalConnection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSectionID:(NSString *)arg1 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3 ;
-(NSString *)sectionID;
-(unsigned long long)ackType;
-(id)init;
-(id)initWithPingHandler:(id)arg1 ;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)setAckType:(unsigned long long)arg1 ;
-(void)setForNotification:(BOOL)arg1 ;
-(BOOL)canAck;
-(void)pingWithBulletin:(id)arg1 notification:(id)arg2 ack:(/*^block*/id)arg3 ;
-(BOOL)canAckOnLocalConnection;
-(BOOL)forNotification;
-(BOOL)forBulletin;
-(void)setForBulletin:(BOOL)arg1 ;
-(void)_performPingWithAckableForwardBlock:(/*^block*/id)arg1 ackableNoParametersBlock:(/*^block*/id)arg2 noAckBlock:(/*^block*/id)arg3 clientAck:(/*^block*/id)arg4 ;
@end

