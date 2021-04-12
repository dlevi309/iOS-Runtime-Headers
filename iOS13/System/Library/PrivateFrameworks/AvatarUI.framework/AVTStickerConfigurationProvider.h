/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSCache, AVTUIEnvironment, NSArray;

@interface AVTStickerConfigurationProvider : NSObject {

	NSCache* _stickerConfigurationCache;
	AVTUIEnvironment* _environment;
	NSArray* _stickerPacks;

}

@property (nonatomic,retain) NSCache * stickerConfigurationCache;              //@synthesize stickerConfigurationCache=_stickerConfigurationCache - In the implementation block
@property (nonatomic,retain) AVTUIEnvironment * environment;                   //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSArray * stickerPacks;                           //@synthesize stickerPacks=_stickerPacks - In the implementation block
-(AVTUIEnvironment *)environment;
-(void)setEnvironment:(AVTUIEnvironment *)arg1 ;
-(id)initWithEnvironment:(id)arg1 forStickerPacks:(id)arg2 ;
-(id)stickerConfigurationForAvatarRecord:(id)arg1 stickerName:(id)arg2 ;
-(id)stickerConfigurationsForAvatarRecord:(id)arg1 ;
-(id)availableStickerNamesForAvatarRecord:(id)arg1 ;
-(NSArray *)stickerPacks;
-(NSCache *)stickerConfigurationCache;
-(void)setStickerConfigurationCache:(NSCache *)arg1 ;
-(void)setStickerPacks:(NSArray *)arg1 ;
@end

