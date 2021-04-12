/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

@interface VUIAppleTVChannelLogoLayout : TVViewLayout {

	TVImageLayout* _channelLogoImageLayout;
	VUITextLayout* _channelsTextLayout;

}

@property (nonatomic,retain) VUITextLayout * channelsTextLayout;                  //@synthesize channelsTextLayout=_channelsTextLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * channelLogoImageLayout;              //@synthesize channelLogoImageLayout=_channelLogoImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 ;
-(id)init;
-(TVImageLayout *)channelLogoImageLayout;
-(void)setChannelLogoImageLayout:(TVImageLayout *)arg1 ;
-(VUITextLayout *)channelsTextLayout;
-(void)setChannelsTextLayout:(VUITextLayout *)arg1 ;
@end

