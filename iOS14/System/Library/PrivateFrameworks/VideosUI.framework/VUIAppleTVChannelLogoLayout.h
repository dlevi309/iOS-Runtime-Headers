/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

