/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@interface TVPAudioSession : NSObject {

	/*^block*/id _configurationBlock;

}

@property (nonatomic,copy) id configurationBlock;              //@synthesize configurationBlock=_configurationBlock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(void)_updateIfNecessary;
-(void)_mediaServicesReset:(id)arg1 ;
@end

