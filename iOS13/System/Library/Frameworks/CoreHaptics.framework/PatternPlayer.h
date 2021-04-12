/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

#import <libobjc.A.dylib/CHHapticPatternPlayer.h>
#import <libobjc.A.dylib/PatternPlayerDetails.h>

@class CHHapticEngine, AVHapticPlayerChannel, NSArray, NSString;

@interface PatternPlayer : NSObject <CHHapticPatternPlayer, PatternPlayerDetails> {

	CHHapticEngine* _engine;
	AVHapticPlayerChannel* _channel;
	NSArray* _events;
	double _patternDuration;
	int _muteState;
	unsigned char _previousAction;

}

@property (readonly) double patternDuration;                        //@synthesize patternDuration=_patternDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL isMuted; 
-(id)init;
-(void)dealloc;
-(BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)startAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(BOOL)cancelAndReturnError:(id*)arg1 ;
-(void)doSetMute:(BOOL)arg1 ;
-(BOOL)needsResetForAction:(unsigned char)arg1 ;
-(BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(double)patternDuration;
-(id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(BOOL)arg3 error:(id*)arg4 ;
-(void)clearExternalResources:(id)arg1 ;
@end

