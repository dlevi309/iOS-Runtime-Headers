/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSDate;

@interface BLTClientReplyTimeout : NSObject {

	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,retain) NSDate * timeout;              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;               //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(NSDate *)timeout;
-(void)setTimeout:(NSDate *)arg1 ;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
@end

