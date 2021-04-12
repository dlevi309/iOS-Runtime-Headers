/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary, NSDate, TASPAdvertisement, NSArray, TAMetricsDetection;

@interface TASuspiciousDevice : NSObject <NSCopying> {

	NSData* _address;
	NSDictionary* _detectionSummary;
	NSDate* _date;
	TASPAdvertisement* _latestAdvertisement;
	NSArray* _locationHistory;
	TAMetricsDetection* _detectionMetrics;

}

@property (nonatomic,copy,readonly) NSData * address;                                     //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * detectionSummary;                      //@synthesize detectionSummary=_detectionSummary - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) TASPAdvertisement * latestAdvertisement;              //@synthesize latestAdvertisement=_latestAdvertisement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locationHistory;                            //@synthesize locationHistory=_locationHistory - In the implementation block
@property (nonatomic,readonly) TAMetricsDetection * detectionMetrics;                     //@synthesize detectionMetrics=_detectionMetrics - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSData *)address;
-(id)descriptionDictionary;
-(NSArray *)locationHistory;
-(TASPAdvertisement *)latestAdvertisement;
-(id)initWithLatestAdv:(id)arg1 detectionSummary:(id)arg2 date:(id)arg3 locHistory:(id)arg4 detectionMetrics:(id)arg5 ;
-(NSDictionary *)detectionSummary;
-(TAMetricsDetection *)detectionMetrics;
@end

