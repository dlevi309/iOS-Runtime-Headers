/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@protocol VCAdaptiveLearningDelegate <NSObject>
@required
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
-(int)initialSettledBitrate;
-(int)previousISBRForSegment:(id)arg1;
-(int)adaptiveLearningState;
-(void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;
-(int)shortTermAverageTBRForSegment:(id)arg1;
-(int)longTermAverageTBRForSegment:(id)arg1;
-(int)longTermAverageISBRForSegment:(id)arg1;
-(int)shortTermAverageISBRForSegment:(id)arg1;
-(int)longTermAverageSATXBRForSegment:(id)arg1;
-(int)shortTermAverageSATXBRForSegment:(id)arg1;
-(int)longTermAverageSARBRForSegment:(id)arg1;
-(int)shortTermAverageSARBRForSegment:(id)arg1;
-(int)longTermAverageBWEForSegment:(id)arg1;
-(int)shortTermAverageBWEForSegment:(id)arg1;

@end

