/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class PBCodable;

@interface NWActivityEmptyTrigger : NSObject {

	unsigned _awdMetricID;
	PBCodable* _awdReport;

}

@property (nonatomic,retain) PBCodable * awdReport;              //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;               //@synthesize awdMetricID=_awdMetricID - In the implementation block
-(void)setAwdMetricID:(unsigned)arg1 ;
-(id)initWithPBCodableData:(id)arg1 ;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(unsigned)awdMetricID;
@end

