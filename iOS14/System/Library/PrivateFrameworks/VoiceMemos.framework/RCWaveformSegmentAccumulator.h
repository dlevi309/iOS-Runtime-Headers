/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)waitUntilFinished;
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(void)waveformGeneratorWillBeginLoading:(id)arg1 ;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(id)initWithWaveformGenerator:(id)arg1 ;
-(BOOL)finishedSuccessfully;
-(NSMutableArray *)segments;
-(void)setGenerator:(RCWaveformGenerator *)arg1 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(RCWaveformGenerator *)generator;
-(void)dealloc;
@end

