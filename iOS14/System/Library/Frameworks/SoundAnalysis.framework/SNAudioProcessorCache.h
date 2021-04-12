/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@class NSMapTable;

@interface SNAudioProcessorCache : NSObject {

	NSMapTable* _activeProcessorsCache;

}
-(id)init;
-(id)sharedProcessorWithConfiguration:(id)arg1 ;
-(id)audioProcessorWithConfiguration:(id)arg1 ;
-(id)createAudioProcessorWithConfiguration:(id)arg1 ;
@end

