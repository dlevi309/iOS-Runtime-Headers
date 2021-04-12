/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject {

	unsigned long long _eventType;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSDate *)timestamp;
-(unsigned long long)eventType;
-(id)initWithEventType:(unsigned long long)arg1 ;
@end

