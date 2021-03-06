/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/Endpointer.h>

@class NSString;

@interface VoiceVerificationEndpointer : NSObject <Endpointer>

@property (assign) int endpointMode; 
@property (assign) double startWaitTime; 
@property (assign) double interspeechWaitTime; 
@property (assign) double endWaitTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2 ;
-(double)endWaitTime;
-(int)getStatus:(AudioQueueBuffer*)arg1 ;
-(int)endpointMode;
-(double)startWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
-(void)setEndpointMode:(int)arg1 ;
-(void)setStartWaitTime:(double)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(BOOL)configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned)arg2 ;
-(void)reset;
-(void)dealloc;
@end

