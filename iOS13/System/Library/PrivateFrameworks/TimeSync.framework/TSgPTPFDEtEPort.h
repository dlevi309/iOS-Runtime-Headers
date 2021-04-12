/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort {

	TSgPTPPortStatistics* _statistics;

}

@property (nonatomic,retain) TSgPTPPortStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
-(void)dealloc;
-(TSgPTPPortStatistics *)statistics;
-(void)setStatistics:(TSgPTPPortStatistics *)arg1 ;
-(id)_statistics;
-(BOOL)_commonInitWithService:(unsigned)arg1 ;
-(void)updateProperties;
@end

