/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class NSString;

@interface WFBlacklistTriggerNode : NSObject {

	unsigned long long _triggerReason;
	long long _triggerReasonData;
	NSString* _triggerReasonString;
	double _triggerReasonTimestamp;
	NSString* _bssid;

}

@property (assign) unsigned long long triggerReason;              //@synthesize triggerReason=_triggerReason - In the implementation block
@property (assign) long long triggerReasonData;                   //@synthesize triggerReasonData=_triggerReasonData - In the implementation block
@property (copy) NSString * triggerReasonString;                  //@synthesize triggerReasonString=_triggerReasonString - In the implementation block
@property (assign) double triggerReasonTimestamp;                 //@synthesize triggerReasonTimestamp=_triggerReasonTimestamp - In the implementation block
@property (copy) NSString * bssid;                                //@synthesize bssid=_bssid - In the implementation block
-(id)init;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(unsigned long long)triggerReason;
-(double)triggerReasonTimestamp;
-(long long)triggerReasonData;
-(NSString *)triggerReasonString;
-(void)setTriggerReason:(unsigned long long)arg1 ;
-(void)setTriggerReasonData:(long long)arg1 ;
-(void)setTriggerReasonString:(NSString *)arg1 ;
-(void)setTriggerReasonTimestamp:(double)arg1 ;
@end

