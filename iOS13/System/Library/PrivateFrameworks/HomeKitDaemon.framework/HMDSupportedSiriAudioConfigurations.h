/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSArray, HMDAudioStreamCodecConfiguration;

@interface HMDSupportedSiriAudioConfigurations : NSObject {

	long long _siriInputType;
	NSArray* _supportedConfigurations;
	HMDAudioStreamCodecConfiguration* _selectedConfiguration;

}

@property (assign,nonatomic) long long siriInputType;                                               //@synthesize siriInputType=_siriInputType - In the implementation block
@property (nonatomic,retain) NSArray * supportedConfigurations;                                     //@synthesize supportedConfigurations=_supportedConfigurations - In the implementation block
@property (nonatomic,retain) HMDAudioStreamCodecConfiguration * selectedConfiguration;              //@synthesize selectedConfiguration=_selectedConfiguration - In the implementation block
-(NSArray *)supportedConfigurations;
-(void)setSupportedConfigurations:(NSArray *)arg1 ;
-(long long)siriInputType;
-(HMDAudioStreamCodecConfiguration *)selectedConfiguration;
-(void)setSiriInputType:(long long)arg1 ;
-(void)setSelectedConfiguration:(HMDAudioStreamCodecConfiguration *)arg1 ;
@end

