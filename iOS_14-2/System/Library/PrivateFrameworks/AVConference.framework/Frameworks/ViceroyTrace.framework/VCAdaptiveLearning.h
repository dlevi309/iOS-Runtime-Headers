/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCAdaptiveLearning : NSObject {

	NSMutableDictionary* _callHistory;
	BOOL _dirty;
	int _adaptiveLearningState;
	int _shortTermHistoryLength;
	int _longTermHistoryLength;
	double _shortTermAdjustmentFactor;
	double _longTermAdjustmentFactor;
	double _shortTermValueWeight;
	double _longTermValueWeight;
	NSObject*<OS_dispatch_queue> _stateQueue;

}

@property (readonly) int adaptiveLearningState;              //@synthesize adaptiveLearningState=_adaptiveLearningState - In the implementation block
-(id)initWithParameters:(id)arg1 ;
-(void)dealloc;
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2 ;
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
@end

