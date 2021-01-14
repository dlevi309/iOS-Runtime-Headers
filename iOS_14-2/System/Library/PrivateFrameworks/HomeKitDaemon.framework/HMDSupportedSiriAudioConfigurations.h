/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSArray, HAPAudioStreamCodecConfiguration;

@interface HMDSupportedSiriAudioConfigurations : NSObject {

	long long _siriInputType;
	NSArray* _supportedConfigurations;
	HAPAudioStreamCodecConfiguration* _selectedConfiguration;

}

@property (assign,nonatomic) long long siriInputType;                                               //@synthesize siriInputType=_siriInputType - In the implementation block
@property (nonatomic,retain) NSArray * supportedConfigurations;                                     //@synthesize supportedConfigurations=_supportedConfigurations - In the implementation block
@property (nonatomic,retain) HAPAudioStreamCodecConfiguration * selectedConfiguration;              //@synthesize selectedConfiguration=_selectedConfiguration - In the implementation block
-(NSArray *)supportedConfigurations;
-(void)setSupportedConfigurations:(NSArray *)arg1 ;
-(long long)siriInputType;
-(HAPAudioStreamCodecConfiguration *)selectedConfiguration;
-(void)setSiriInputType:(long long)arg1 ;
-(void)setSelectedConfiguration:(HAPAudioStreamCodecConfiguration *)arg1 ;
@end

