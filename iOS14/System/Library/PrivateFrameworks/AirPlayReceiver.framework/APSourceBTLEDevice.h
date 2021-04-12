/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


@interface APSourceBTLEDevice : NSObject {

	int _lastRSSI;
	unsigned long long _lastUpdateTicks;

}

@property (assign,nonatomic) int lastRSSI;                                    //@synthesize lastRSSI=_lastRSSI - In the implementation block
@property (assign,nonatomic) unsigned long long lastUpdateTicks;              //@synthesize lastUpdateTicks=_lastUpdateTicks - In the implementation block
-(int)lastRSSI;
-(void)setLastRSSI:(int)arg1 ;
-(unsigned long long)lastUpdateTicks;
-(void)setLastUpdateTicks:(unsigned long long)arg1 ;
@end

