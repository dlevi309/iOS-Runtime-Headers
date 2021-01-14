/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSMutableArray;

@interface CompositionDuckingTimes : NSObject {

	NSMutableArray* m_duckingEvents;
	int m_projectDurationInFrames;

}

@property (nonatomic,retain) NSMutableArray * duckingEvents; 
@property (assign) int projectDurationInFrames; 
+(id)compositionDuckingTimesWithProject:(id)arg1 ;
-(id)initWithProject:(id)arg1 ;
-(void)dealloc;
-(BOOL)clipIsAudible:(id)arg1 ;
-(NSMutableArray *)duckingEvents;
-(BOOL)shouldDuckAtTime:(int)arg1 ;
-(int)projectDurationInFrames;
-(void)addDuckingFromTime:(int)arg1 toTime:(int)arg2 ;
-(void)setDuckingEvents:(NSMutableArray *)arg1 ;
-(void)setProjectDurationInFrames:(int)arg1 ;
-(void)makeDuckingDataForEditListWithProject:(id)arg1 ;
-(void)makeDuckingDataForForegroundAudioClipsWithProject:(id)arg1 ;
-(void)appendDuckingChangeAtFrameTime:(int)arg1 shouldDuck:(BOOL)arg2 ;
-(int)nextDuckChangeTimeFromTime:(int)arg1 ;
@end

