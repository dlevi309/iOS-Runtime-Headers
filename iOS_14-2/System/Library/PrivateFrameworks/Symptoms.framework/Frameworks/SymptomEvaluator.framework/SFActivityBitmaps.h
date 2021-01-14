/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)getWordAtOffset:(unsigned long long)arg1 ;
-(id)init;
-(void)freeUpBufferSpace;
-(void)resetAllActivities;
-(unsigned long long)wordOffset;
-(void)setAppName:(NSString *)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(unsigned long long)getLongestContiguousHammingWeight;
-(void)setWordOffset:(unsigned long long)arg1 ;
-(void)setAlignedBitmap:(unsigned long long)arg1 withStartTime:(unsigned long long)arg2 ;
-(void)setActivityWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part2:(unsigned long long)arg3 ;
-(id)getWrappedBitmapsFromTime:(unsigned long long)arg1 toTime:(unsigned long long)arg2 ;
-(unsigned long long)getHammingWeight;
-(unsigned long long)adjustStartTime:(unsigned long long)arg1 ;
-(id)description;
-(void)addActivityWithFlowId:(unsigned long long)arg1 startTime:(unsigned long long)arg2 part1:(unsigned long long)arg3 part2:(unsigned long long)arg4 ;
-(void)writeWord:(unsigned long long)arg1 atOffset:(unsigned long long)arg2 ;
-(unsigned long long)numOfWords;
-(void)clearAndSetNewActivityWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part:(unsigned long long)arg3 ;
-(void)resetStartTimeToEarlierTime:(unsigned long long)arg1 ;
-(id)getWrappedBitmaps;
-(NSString *)appName;
-(unsigned long long)startTime;
-(unsigned long long)getAlignedBitmapStartingAtTime:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)getEndTime;
-(void)setNumOfWords:(unsigned long long)arg1 ;
@end

