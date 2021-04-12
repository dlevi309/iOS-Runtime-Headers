/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/RCCompositionWaveformDataSource.h>

@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource {

	NSURL* _destinationWaveformURL;

}

@property (nonatomic,readonly) NSURL * destinationWaveformURL;              //@synthesize destinationWaveformURL=_destinationWaveformURL - In the implementation block
-(id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2 ;
-(BOOL)preferLoadingFragmentWaveforms;
-(id)generatedWaveformOutputURL;
-(NSURL *)destinationWaveformURL;
@end

