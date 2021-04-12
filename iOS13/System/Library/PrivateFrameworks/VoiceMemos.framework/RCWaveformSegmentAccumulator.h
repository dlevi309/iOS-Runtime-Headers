/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/RCWaveformGeneratorSegmentOutputObserver.h>

@class RCWaveformGenerator, NSMutableArray, NSString;

@interface RCWaveformSegmentAccumulator : NSObject <RCWaveformGeneratorSegmentOutputObserver> {

	BOOL _finishedSuccessfully;
	RCWaveformGenerator* _generator;
	NSMutableArray* _segments;

}

@property (nonatomic,retain) RCWaveformGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSMutableArray * segments;                    //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) BOOL finishedSuccessfully;                  //@synthesize finishedSuccessfully=_finishedSuccessfully - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)waitUntilFinished;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(RCWaveformGenerator *)generator;
-(void)setGenerator:(RCWaveformGenerator *)arg1 ;
-(void)waveformGeneratorWillBeginLoading:(id)arg1 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(id)initWithWaveformGenerator:(id)arg1 ;
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(BOOL)finishedSuccessfully;
@end

