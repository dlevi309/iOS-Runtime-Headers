/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class WLKChannelDetails, NSString, VUIAppInstallerViewController, VUIAccessViewController, NSUUID;

@interface VUIAppInstallCoordinator : NSObject {

	WLKChannelDetails* _channelDetails;
	NSString* _contentTitle;
	VUIAppInstallerViewController* _installerViewController;
	VUIAccessViewController* _accessViewController;
	NSUUID* _uuid;

}

@property (nonatomic,retain) WLKChannelDetails * channelDetails;                                   //@synthesize channelDetails=_channelDetails - In the implementation block
@property (nonatomic,retain) NSString * contentTitle;                                              //@synthesize contentTitle=_contentTitle - In the implementation block
@property (nonatomic,retain) VUIAppInstallerViewController * installerViewController;              //@synthesize installerViewController=_installerViewController - In the implementation block
@property (nonatomic,retain) VUIAccessViewController * accessViewController;                       //@synthesize accessViewController=_accessViewController - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                        //@synthesize uuid=_uuid - In the implementation block
-(NSUUID *)uuid;
-(NSString *)contentTitle;
-(unsigned long long)hash;
-(WLKChannelDetails *)channelDetails;
-(void)setChannelDetails:(WLKChannelDetails *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(VUIAccessViewController *)accessViewController;
-(void)_installAppWithChannel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInstallerViewController:(VUIAppInstallerViewController *)arg1 ;
-(id)initWithChannelDetails:(id)arg1 contentTitle:(id)arg2 ;
-(void)installAppWithCompletion:(/*^block*/id)arg1 ;
-(void)setContentTitle:(NSString *)arg1 ;
-(VUIAppInstallerViewController *)installerViewController;
-(void)setAccessViewController:(VUIAccessViewController *)arg1 ;
@end

