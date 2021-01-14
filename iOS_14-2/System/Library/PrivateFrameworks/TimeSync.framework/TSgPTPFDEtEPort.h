/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort {

	TSgPTPPortStatistics* _statistics;

}

@property (nonatomic,retain) TSgPTPPortStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
-(TSgPTPPortStatistics *)statistics;
-(id)_statistics;
-(void)setStatistics:(TSgPTPPortStatistics *)arg1 ;
-(BOOL)_commonInitWithService:(id)arg1 ;
-(void)updateProperties;
@end

