/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class NSArray, PBCodable;

@interface WANWActivityStatistics : NSObject {

	BOOL _fromInitWithPBCodableData;
	unsigned _awdMetricID;
	NSArray* _activityUUIDs;
	NSArray* _externallyVisibleActivityUUIDs;
	PBCodable* _awdReport;

}

@property (nonatomic,retain) PBCodable * awdReport;                       //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                        //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (retain) NSArray * activityUUIDs;                               //@synthesize activityUUIDs=_activityUUIDs - In the implementation block
@property (retain) NSArray * externallyVisibleActivityUUIDs;              //@synthesize externallyVisibleActivityUUIDs=_externallyVisibleActivityUUIDs - In the implementation block
-(NSArray *)externallyVisibleActivityUUIDs;
-(void)setExternallyVisibleActivityUUIDs:(NSArray *)arg1 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(id)initWithPBCodableData:(id)arg1 ;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(unsigned)awdMetricID;
-(void)setActivityUUIDs:(NSArray *)arg1 ;
-(NSArray *)activityUUIDs;
-(id)initWithWAActivityReport:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

