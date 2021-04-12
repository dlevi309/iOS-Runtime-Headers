/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSDictionary, NSArray;

@interface FlexMLSummary : NSObject {

	float _peakValue;
	NSDictionary* _videoCues;
	NSArray* _allBeats;
	NSArray* _allBars;
	NSArray* _loopPoints;
	double _lkfsValue;
	NSArray* _segments;
	SCD_Struct_PM5 _duration;

}

@property (nonatomic,retain) NSArray * segments;                    //@synthesize segments=_segments - In the implementation block
@property (nonatomic,retain) NSDictionary * videoCues;              //@synthesize videoCues=_videoCues - In the implementation block
@property (assign,nonatomic) SCD_Struct_PM5 duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double lkfsValue;                      //@synthesize lkfsValue=_lkfsValue - In the implementation block
@property (assign,nonatomic) float peakValue;                       //@synthesize peakValue=_peakValue - In the implementation block
@property (nonatomic,readonly) NSArray * allBeats;                  //@synthesize allBeats=_allBeats - In the implementation block
@property (nonatomic,readonly) NSArray * allBars;                   //@synthesize allBars=_allBars - In the implementation block
@property (nonatomic,readonly) NSArray * loopPoints;                //@synthesize loopPoints=_loopPoints - In the implementation block
+(id)summaryFromSummaries:(id)arg1 targetTimeScale:(int)arg2 ;
-(SCD_Struct_PM5)duration;
-(void)setDuration:(SCD_Struct_PM5)arg1 ;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(float)peakValue;
-(id)initWithDictionary:(id)arg1 targetTimeScale:(int)arg2 ;
-(void)setVideoCues:(NSDictionary *)arg1 ;
-(void)setLkfsValue:(double)arg1 ;
-(void)setPeakValue:(float)arg1 ;
-(NSDictionary *)videoCues;
-(double)lkfsValue;
-(NSArray *)loopPoints;
-(NSArray *)allBars;
-(NSArray *)allBeats;
@end

