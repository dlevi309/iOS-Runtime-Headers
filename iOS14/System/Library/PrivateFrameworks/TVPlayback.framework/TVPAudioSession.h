/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@interface TVPAudioSession : NSObject {

	/*^block*/id _configurationBlock;

}

@property (nonatomic,copy) id configurationBlock;              //@synthesize configurationBlock=_configurationBlock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)configurationBlock;
-(void)_updateIfNecessary;
-(void)setConfigurationBlock:(id)arg1 ;
-(void)dealloc;
-(void)_mediaServicesReset:(id)arg1 ;
@end

