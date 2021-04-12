/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithPBCodableData:(id)arg1 ;
-(unsigned)awdMetricID;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(NSArray *)externallyVisibleActivityUUIDs;
-(void)setExternallyVisibleActivityUUIDs:(NSArray *)arg1 ;
-(id)initWithWAActivityReport:(const void*)arg1 length:(unsigned long long)arg2 ;
-(NSArray *)activityUUIDs;
-(void)setActivityUUIDs:(NSArray *)arg1 ;
@end

