/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSDate;

@interface BLTClientReplyTimeout : NSObject {

	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,retain) NSDate * timeout;              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;               //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(void)setTimeout:(NSDate *)arg1 ;
-(void)setTimeoutHandler:(id)arg1 ;
-(NSDate *)timeout;
-(id)timeoutHandler;
@end

