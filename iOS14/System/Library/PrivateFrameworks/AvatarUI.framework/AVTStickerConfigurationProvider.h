/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTStickerPack;
@class NSCache, AVTUIEnvironment, NSArray;

@interface AVTStickerConfigurationProvider : NSObject {

	NSCache* _stickerConfigurationCache;
	AVTUIEnvironment* _environment;
	NSArray*<AVTStickerPack> _stickerPacks;

}

@property (nonatomic,retain) NSCache * stickerConfigurationCache;                //@synthesize stickerConfigurationCache=_stickerConfigurationCache - In the implementation block
@property (nonatomic,retain) AVTUIEnvironment * environment;                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSArray*<AVTStickerPack> stickerPacks;              //@synthesize stickerPacks=_stickerPacks - In the implementation block
-(void)setEnvironment:(AVTUIEnvironment *)arg1 ;
-(AVTUIEnvironment *)environment;
-(id)initWithEnvironment:(id)arg1 forStickerPacks:(id)arg2 ;
-(id)stickerConfigurationForAvatarRecord:(id)arg1 stickerName:(id)arg2 ;
-(NSArray*<AVTStickerPack>)stickerPacks;
-(void)setStickerPacks:(NSArray*<AVTStickerPack>)arg1 ;
-(NSCache *)stickerConfigurationCache;
-(void)setStickerConfigurationCache:(NSCache *)arg1 ;
-(id)stickerConfigurationsForAvatarRecord:(id)arg1 ;
-(id)availableStickerNamesForAvatarRecord:(id)arg1 ;
@end

