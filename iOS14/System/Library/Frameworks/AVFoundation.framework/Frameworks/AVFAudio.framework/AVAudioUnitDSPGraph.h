/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

