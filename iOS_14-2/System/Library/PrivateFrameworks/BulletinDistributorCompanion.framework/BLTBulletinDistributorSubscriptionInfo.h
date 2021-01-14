/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@interface BLTBulletinDistributorSubscriptionInfo : NSObject {

	BOOL _fullBulletins;
	BOOL _ack;
	BOOL _ackAllowedOnLocalConnection;

}

@property (assign,nonatomic) BOOL fullBulletins;                            //@synthesize fullBulletins=_fullBulletins - In the implementation block
@property (assign,nonatomic) BOOL ack;                                      //@synthesize ack=_ack - In the implementation block
@property (assign,nonatomic) BOOL ackAllowedOnLocalConnection;              //@synthesize ackAllowedOnLocalConnection=_ackAllowedOnLocalConnection - In the implementation block
-(BOOL)ack;
-(void)setAck:(BOOL)arg1 ;
-(BOOL)fullBulletins;
-(void)setFullBulletins:(BOOL)arg1 ;
-(BOOL)ackAllowedOnLocalConnection;
-(void)setAckAllowedOnLocalConnection:(BOOL)arg1 ;
@end

