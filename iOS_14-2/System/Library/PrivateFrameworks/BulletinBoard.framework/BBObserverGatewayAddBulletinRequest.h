/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSString, NSDate;

@interface BBObserverGatewayAddBulletinRequest : NSObject {

	NSString* _bulletinID;
	NSString* _sectionID;
	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,copy) NSString * bulletinID;              //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;               //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDate * timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                  //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)sectionID;
-(void)setTimeout:(NSDate *)arg1 ;
-(void)setTimeoutHandler:(id)arg1 ;
-(NSDate *)timeout;
-(void)setBulletinID:(NSString *)arg1 ;
-(id)timeoutHandler;
-(NSString *)bulletinID;
@end

