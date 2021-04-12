/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)fullBulletins;
-(void)setFullBulletins:(BOOL)arg1 ;
-(void)setAck:(BOOL)arg1 ;
-(BOOL)ackAllowedOnLocalConnection;
-(void)setAckAllowedOnLocalConnection:(BOOL)arg1 ;
@end

