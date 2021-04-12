/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVAudioUnit.h>

@class NSURL;

@interface AVAudioUnitDSPGraph : AVAudioUnit

@property (nonatomic,readonly) NSURL * dspGraphURL; 
@property (nonatomic,readonly) NSURL * auProcessingStripURL; 
-(id)init;
-(BOOL)loadAudioDSPManager;
-(BOOL)loadDSPGraphAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadAudioUnitProcessingStripAtURL:(id)arg1 error:(id*)arg2 ;
-(NSURL *)dspGraphURL;
-(NSURL *)auProcessingStripURL;
@end

