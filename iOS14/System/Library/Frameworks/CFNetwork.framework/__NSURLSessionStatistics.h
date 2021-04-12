/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class PBCodable, NSUUID, NSArray;

@interface __NSURLSessionStatistics : NSObject {

	void* report;
	PBCodable* _awdReport;
	NSUUID* _externallyVisibleNwActivity;
	NSArray* _externallyVisibleConnectionUUIDs;

}

@property (nonatomic,readonly) PBCodable * awdReport; 
@property (nonatomic,readonly) unsigned awdMetricID; 
@property (nonatomic,readonly) NSUUID * nwActivity; 
@property (nonatomic,readonly) NSUUID * taskUUID; 
@property (nonatomic,readonly) NSArray * connectionUUIDS; 
@property (retain) NSUUID * externallyVisibleNwActivity;                    //@synthesize externallyVisibleNwActivity=_externallyVisibleNwActivity - In the implementation block
@property (retain) NSArray * externallyVisibleConnectionUUIDs;              //@synthesize externallyVisibleConnectionUUIDs=_externallyVisibleConnectionUUIDs - In the implementation block
+(void)reportMetricsToSymptoms:(id)arg1 ;
+(CFNetworkTaskMetrics_s*)createCFNetworkTaskMetrics_s:(id)arg1 ;
-(NSUUID *)taskUUID;
-(NSUUID *)nwActivity;
-(NSArray *)externallyVisibleConnectionUUIDs;
-(void)setExternallyVisibleConnectionUUIDs:(NSArray *)arg1 ;
-(NSUUID *)externallyVisibleNwActivity;
-(NSArray *)connectionUUIDS;
-(id)initWithCFNetworkReport:(void*)arg1 length:(long long)arg2 ;
-(void)setExternallyVisibleNwActivity:(NSUUID *)arg1 ;
-(id)initWithPBCodableData:(id)arg1 ;
-(PBCodable *)awdReport;
-(unsigned)awdMetricID;
-(void)dealloc;
@end

