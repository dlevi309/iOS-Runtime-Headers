/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compare:(id)arg1 ;
-(unsigned long long)eventType;
-(id)initWithEventType:(unsigned long long)arg1 ;
-(NSDate *)timestamp;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

