/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUIPostPlayConfig, VUINowPlayingConfig, VUIAutoPlayConfig, VUIInAppMessagesConfig;

@interface VUIFeaturesConfiguration : NSObject {

	VUIPostPlayConfig* _postPlayConfig;
	VUINowPlayingConfig* _nowPlayingConfig;
	VUIAutoPlayConfig* _autoPlayConfig;
	VUIInAppMessagesConfig* _inAppMessagesConfig;

}

@property (nonatomic,readonly) VUIPostPlayConfig * postPlayConfig;                        //@synthesize postPlayConfig=_postPlayConfig - In the implementation block
@property (nonatomic,readonly) VUINowPlayingConfig * nowPlayingConfig;                    //@synthesize nowPlayingConfig=_nowPlayingConfig - In the implementation block
@property (nonatomic,readonly) VUIAutoPlayConfig * autoPlayConfig;                        //@synthesize autoPlayConfig=_autoPlayConfig - In the implementation block
@property (nonatomic,readonly) VUIInAppMessagesConfig * inAppMessagesConfig;              //@synthesize inAppMessagesConfig=_inAppMessagesConfig - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)updateWithDictionary:(id)arg1 ;
-(VUIPostPlayConfig *)postPlayConfig;
-(VUINowPlayingConfig *)nowPlayingConfig;
-(VUIInAppMessagesConfig *)inAppMessagesConfig;
-(VUIAutoPlayConfig *)autoPlayConfig;
@end

