/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RTVisitMonitorStatus : NSObject <NSCopying> {

	BOOL _monitoringVisitIncidents;
	BOOL _monitoringLeechedVisitIncidents;
	BOOL _monitoringLowConfidenceVisitIncidents;
	unsigned long long _feedBufferReferenceCounter;

}

@property (assign,nonatomic) BOOL monitoringVisitIncidents;                              //@synthesize monitoringVisitIncidents=_monitoringVisitIncidents - In the implementation block
@property (assign,nonatomic) BOOL monitoringLeechedVisitIncidents;                       //@synthesize monitoringLeechedVisitIncidents=_monitoringLeechedVisitIncidents - In the implementation block
@property (assign,nonatomic) BOOL monitoringLowConfidenceVisitIncidents;                 //@synthesize monitoringLowConfidenceVisitIncidents=_monitoringLowConfidenceVisitIncidents - In the implementation block
@property (assign,nonatomic) unsigned long long feedBufferReferenceCounter;              //@synthesize feedBufferReferenceCounter=_feedBufferReferenceCounter - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)invalid;
-(unsigned long long)feedBufferReferenceCounter;
-(void)setFeedBufferReferenceCounter:(unsigned long long)arg1 ;
-(void)setMonitoringVisitIncidents:(BOOL)arg1 ;
-(void)setMonitoringLeechedVisitIncidents:(BOOL)arg1 ;
-(void)setMonitoringLowConfidenceVisitIncidents:(BOOL)arg1 ;
-(BOOL)monitoringVisitIncidents;
-(BOOL)monitoringLeechedVisitIncidents;
-(BOOL)monitoringLowConfidenceVisitIncidents;
-(id)initWithMonitoringVisitIncidents:(BOOL)arg1 monitoringLeechedVisitIncidents:(BOOL)arg2 monitoringLowConfidenceVisitIncidents:(BOOL)arg3 feedBufferReferenceCounter:(unsigned long long)arg4 ;
@end

