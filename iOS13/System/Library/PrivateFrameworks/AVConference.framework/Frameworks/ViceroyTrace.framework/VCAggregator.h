/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/

#import <libobjc.A.dylib/VCAdaptiveLearningDelegate.h>

@protocol OS_dispatch_queue, VCAggregatorDelegate;
@class NSString, NSNumber, NSObject;

@interface VCAggregator : NSObject <VCAdaptiveLearningDelegate> {

	int _interval;
	int _frequency;
	NSString* _localInterfaceType;
	NSString* _connectionType;
	unsigned _switchIntoDupCount;
	unsigned _direction;
	NSNumber* _streamToken;
	NSString* _sessionID;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	id<VCAggregatorDelegate> _delegate;
	/*^block*/id _periodicAggregationOccuredHandler;

}

@property (readonly) id<VCAggregatorDelegate> delegate; 
@property (readonly) unsigned direction;                             //@synthesize direction=_direction - In the implementation block
@property (readonly) NSNumber * streamToken;                         //@synthesize streamToken=_streamToken - In the implementation block
@property (readonly) NSString * sessionID;                           //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<VCAggregatorDelegate>)delegate;
-(unsigned)direction;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)sessionID;
-(NSNumber *)streamToken;
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2 ;
-(unsigned)RTPeriod;
-(int)initialSettledBitrate;
-(int)previousISBRForSegment:(id)arg1 ;
-(int)adaptiveLearningState;
-(void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6 ;
-(int)shortTermAverageTBRForSegment:(id)arg1 ;
-(int)longTermAverageTBRForSegment:(id)arg1 ;
-(int)longTermAverageISBRForSegment:(id)arg1 ;
-(int)shortTermAverageISBRForSegment:(id)arg1 ;
-(int)longTermAverageSATXBRForSegment:(id)arg1 ;
-(int)shortTermAverageSATXBRForSegment:(id)arg1 ;
-(int)longTermAverageSARBRForSegment:(id)arg1 ;
-(int)shortTermAverageSARBRForSegment:(id)arg1 ;
-(int)longTermAverageBWEForSegment:(id)arg1 ;
-(int)shortTermAverageBWEForSegment:(id)arg1 ;
-(void)saveCallSegmentHistory;
-(id)aggregatedSegmentReport:(int)arg1 ;
-(id)aggregatedSegmentQRReport;
-(void)flushCurrentSegment;
-(BOOL)didUpdateStringFrom:(id*)arg1 toString:(id)arg2 ;
-(void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 ;
-(void)initAdaptiveLearningWithParameters:(id)arg1 ;
-(id)aggregatedCallReports;
-(id)aggregatedSessionReport;
-(void)setPeriodicAggregationOccuredHandler:(/*^block*/id)arg1 ;
@end

