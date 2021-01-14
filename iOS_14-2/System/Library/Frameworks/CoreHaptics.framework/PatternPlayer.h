/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign) BOOL isMuted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)startAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)cancelAndReturnError:(id*)arg1 ;
-(void)clearExternalResources:(id)arg1 ;
-(void)doSetMute:(BOOL)arg1 ;
-(BOOL)needsResetForAction:(unsigned char)arg1 ;
-(BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(double)patternDuration;
-(id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(BOOL)arg3 error:(id*)arg4 ;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)dealloc;
@end

