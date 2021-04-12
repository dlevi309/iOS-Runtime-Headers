/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class PBCodable;

@interface WADatapthDiagnostics : NSObject {

	int _action;
	unsigned _awdMetricID;
	PBCodable* _awdReport;

}

@property (nonatomic,retain) PBCodable * awdReport;              //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;               //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (nonatomic,readonly) int action;                       //@synthesize action=_action - In the implementation block
-(int)action;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(unsigned)awdMetricID;
-(id)initWithWADatapthDiagnosticsReport:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

