/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSArray, BBBulletin, NSMutableSet;

@interface BBObserverGatewayEnumerator : NSObject {

	BOOL _cancelled;
	NSArray* _gateways;
	BBBulletin* _bulletin;
	unsigned long long _feeds;
	double _gatewayTimeout;
	NSMutableSet* _gatewaysPlayedLightsAndSirens;

}

@property (nonatomic,retain) NSMutableSet * gatewaysPlayedLightsAndSirens;              //@synthesize gatewaysPlayedLightsAndSirens=_gatewaysPlayedLightsAndSirens - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                            //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) NSArray * gateways;                                          //@synthesize gateways=_gateways - In the implementation block
@property (nonatomic,retain) BBBulletin * bulletin;                                     //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) unsigned long long feeds;                                  //@synthesize feeds=_feeds - In the implementation block
@property (assign,nonatomic) double gatewayTimeout;                                     //@synthesize gatewayTimeout=_gatewayTimeout - In the implementation block
-(id)init;
-(void)cancel;
-(BOOL)cancelled;
-(NSArray *)gateways;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setBulletin:(BBBulletin *)arg1 ;
-(BBBulletin *)bulletin;
-(unsigned long long)feeds;
-(void)setFeeds:(unsigned long long)arg1 ;
-(void)setGateways:(NSArray *)arg1 ;
-(void)setGatewayTimeout:(double)arg1 ;
-(void)enumerateWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptNextGatewayInEnumerator:(id)arg1 playLightsAndSirens:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendToDefaultGatewayToPlayLightsAndSirens:(BOOL)arg1 ;
-(id)defaultGateway;
-(double)gatewayTimeout;
-(NSMutableSet *)gatewaysPlayedLightsAndSirens;
-(void)setGatewaysPlayedLightsAndSirens:(NSMutableSet *)arg1 ;
@end

