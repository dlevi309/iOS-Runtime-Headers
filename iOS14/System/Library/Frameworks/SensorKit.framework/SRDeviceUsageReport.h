/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SRSampling.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface SRDeviceUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling> {

	double _duration;
	long long _totalScreenWakes;
	long long _totalUnlocks;
	double _totalUnlockDuration;
	NSMutableDictionary* _mutableApplicationUsageByCategory;
	NSMutableDictionary* _mutableNotificationUsageByCategory;
	NSMutableDictionary* _mutableWebUsageByCategory;
	double _startTime;

}

@property (retain) NSMutableDictionary * mutableApplicationUsageByCategory;               //@synthesize mutableApplicationUsageByCategory=_mutableApplicationUsageByCategory - In the implementation block
@property (retain) NSMutableDictionary * mutableNotificationUsageByCategory;              //@synthesize mutableNotificationUsageByCategory=_mutableNotificationUsageByCategory - In the implementation block
@property (retain) NSMutableDictionary * mutableWebUsageByCategory;                       //@synthesize mutableWebUsageByCategory=_mutableWebUsageByCategory - In the implementation block
@property (assign) double startTime;                                                      //@synthesize startTime=_startTime - In the implementation block
@property (assign) double duration;                                                       //@synthesize duration=_duration - In the implementation block
@property (assign) long long totalScreenWakes;                                            //@synthesize totalScreenWakes=_totalScreenWakes - In the implementation block
@property (assign) long long totalUnlocks;                                                //@synthesize totalUnlocks=_totalUnlocks - In the implementation block
@property (assign) double totalUnlockDuration;                                            //@synthesize totalUnlockDuration=_totalUnlockDuration - In the implementation block
@property (copy,readonly) NSDictionary * applicationUsageByCategory; 
@property (copy,readonly) NSDictionary * notificationUsageByCategory; 
@property (copy,readonly) NSDictionary * webUsageByCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)deviceUsageReportWithInterval:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(double)startTime;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)sr_dictionaryRepresentation;
-(NSMutableDictionary *)mutableNotificationUsageByCategory;
-(NSMutableDictionary *)mutableApplicationUsageByCategory;
-(NSMutableDictionary *)mutableWebUsageByCategory;
-(long long)totalScreenWakes;
-(long long)totalUnlocks;
-(double)totalUnlockDuration;
-(void)setMutableWebUsageByCategory:(NSMutableDictionary *)arg1 ;
-(void)setMutableApplicationUsageByCategory:(NSMutableDictionary *)arg1 ;
-(void)setMutableNotificationUsageByCategory:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)applicationUsageByCategory;
-(NSDictionary *)notificationUsageByCategory;
-(NSDictionary *)webUsageByCategory;
-(void)setTotalScreenWakes:(long long)arg1 ;
-(void)setTotalUnlocks:(long long)arg1 ;
-(void)setTotalUnlockDuration:(double)arg1 ;
@end

