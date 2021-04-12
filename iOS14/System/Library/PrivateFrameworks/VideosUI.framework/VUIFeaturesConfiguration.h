/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUIPostPlayConfig, VUINowPlayingConfig, VUIAutoPlayConfig, VUIInAppMessagesConfig, VUIDownloadConfig;

@interface VUIFeaturesConfiguration : NSObject {

	VUIPostPlayConfig* _postPlayConfig;
	VUINowPlayingConfig* _nowPlayingConfig;
	VUIAutoPlayConfig* _autoPlayConfig;
	VUIInAppMessagesConfig* _inAppMessagesConfig;
	VUIDownloadConfig* _downloadConfig;

}

@property (nonatomic,readonly) VUIPostPlayConfig * postPlayConfig;                        //@synthesize postPlayConfig=_postPlayConfig - In the implementation block
@property (nonatomic,readonly) VUINowPlayingConfig * nowPlayingConfig;                    //@synthesize nowPlayingConfig=_nowPlayingConfig - In the implementation block
@property (nonatomic,readonly) VUIAutoPlayConfig * autoPlayConfig;                        //@synthesize autoPlayConfig=_autoPlayConfig - In the implementation block
@property (nonatomic,readonly) VUIInAppMessagesConfig * inAppMessagesConfig;              //@synthesize inAppMessagesConfig=_inAppMessagesConfig - In the implementation block
@property (nonatomic,readonly) VUIDownloadConfig * downloadConfig;                        //@synthesize downloadConfig=_downloadConfig - In the implementation block
+(id)sharedInstance;
-(void)updateWithDictionary:(id)arg1 ;
-(id)init;
-(VUIDownloadConfig *)downloadConfig;
-(VUINowPlayingConfig *)nowPlayingConfig;
-(VUIPostPlayConfig *)postPlayConfig;
-(VUIInAppMessagesConfig *)inAppMessagesConfig;
-(VUIAutoPlayConfig *)autoPlayConfig;
@end

