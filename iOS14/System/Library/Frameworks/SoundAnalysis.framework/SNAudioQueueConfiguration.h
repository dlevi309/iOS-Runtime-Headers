/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@interface SNAudioQueueConfiguration : NSObject {

	unsigned _creationFlags;
	/*^block*/id _configureAudioQueue;

}

@property (assign) unsigned creationFlags;              //@synthesize creationFlags=_creationFlags - In the implementation block
@property (copy) id configureAudioQueue;                //@synthesize configureAudioQueue=_configureAudioQueue - In the implementation block
-(unsigned)creationFlags;
-(void)setCreationFlags:(unsigned)arg1 ;
-(id)configureAudioQueue;
-(void)setConfigureAudioQueue:(id)arg1 ;
@end

