/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString;

@interface SFActivityBitmaps : NSObject {

	char _bitmapsBuffer[64];
	NSString* _appName;
	unsigned long long _startTime;
	unsigned long long _wordOffset;
	unsigned long long _numOfWords;

}

@property (nonatomic,retain) NSString * appName;               //@synthesize appName=_appName - In the implementation block
@property (assign) unsigned long long startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long wordOffset;              //@synthesize wordOffset=_wordOffset - In the implementation block
@property (assign) unsigned long long numOfWords;              //@synthesize numOfWords=_numOfWords - In the implementation block
+(BOOL)adjustStartTime:(unsigned long long*)arg1 endTime:(unsigned long long*)arg2 currMachAbsTime:(unsigned long long*)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)startTime;
-(void)setStartTime:(unsigned long long)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(unsigned long long)numOfWords;
-(void)setNumOfWords:(unsigned long long)arg1 ;
-(void)setWordOffset:(unsigned long long)arg1 ;
-(void)clearAndSetNewActivityWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part:(unsigned long long)arg3 ;
-(unsigned long long)adjustStartTime:(unsigned long long)arg1 ;
-(unsigned long long)wordOffset;
-(void)writeWord:(unsigned long long)arg1 atOffset:(unsigned long long)arg2 ;
-(void)freeUpBufferSpace;
-(void)resetStartTimeToEarlierTime:(unsigned long long)arg1 ;
-(void)setActivityWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part2:(unsigned long long)arg3 ;
-(void)setAlignedBitmap:(unsigned long long)arg1 withStartTime:(unsigned long long)arg2 ;
-(unsigned long long)getWordAtOffset:(unsigned long long)arg1 ;
-(unsigned long long)getHammingWeight;
-(id)getWrappedBitmapsFromTime:(unsigned long long)arg1 toTime:(unsigned long long)arg2 ;
-(id)getWrappedBitmaps;
-(unsigned long long)getAlignedBitmapStartingAtTime:(unsigned long long)arg1 ;
-(void)addActivityWithFlowId:(unsigned long long)arg1 startTime:(unsigned long long)arg2 part1:(unsigned long long)arg3 part2:(unsigned long long)arg4 ;
-(void)resetAllActivities;
-(unsigned long long)getLongestContiguousHammingWeight;
-(unsigned long long)getEndTime;
@end

