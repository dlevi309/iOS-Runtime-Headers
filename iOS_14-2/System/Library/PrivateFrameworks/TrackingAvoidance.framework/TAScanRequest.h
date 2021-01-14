/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TAScanRequestSettings, NSDate;

@interface TAScanRequest : NSObject <NSSecureCoding> {

	TAScanRequestSettings* _settings;
	NSDate* _scheduledScanRequest;
	NSDate* _lastScanRequestedDate;
	unsigned long long _interVisitScanCount;

}

@property (nonatomic,retain) NSDate * lastScanRequestedDate;                      //@synthesize lastScanRequestedDate=_lastScanRequestedDate - In the implementation block
@property (assign,nonatomic) unsigned long long interVisitScanCount;              //@synthesize interVisitScanCount=_interVisitScanCount - In the implementation block
@property (nonatomic,readonly) TAScanRequestSettings * settings;                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSDate * scheduledScanRequest;                     //@synthesize scheduledScanRequest=_scheduledScanRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)shouldScanOnAdvertisement:(id)arg1 withDeviceRecord:(id)arg2 ;
-(id)evaluateInterVisitAfterVisitExit:(id)arg1 displayEvents:(id)arg2 advertisements:(id)arg3 deviceRecord:(id)arg4 clock:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)scheduleInterVisitScanForAdvertisement:(id)arg1 deviceRecord:(id)arg2 clock:(id)arg3 ;
-(unsigned long long)interVisitScanCount;
-(TAScanRequestSettings *)settings;
-(NSDate *)lastScanRequestedDate;
-(id)evictScheduledInterVisitScanWithClock:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)scheduledScanRequest;
-(id)evaluateVisitEntry:(id)arg1 clock:(id)arg2 ;
-(void)setLastScanRequestedDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInterVisitScanCount:(unsigned long long)arg1 ;
@end

