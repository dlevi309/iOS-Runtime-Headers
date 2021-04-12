/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)awdMetricID;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(id)initWithWADatapthDiagnosticsReport:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

