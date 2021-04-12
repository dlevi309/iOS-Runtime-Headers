/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarStoreInternal;
@class AVTStickerConfigurationProvider, AVTUILogger;

@interface AVTStickerRecentsMigrator : NSObject {

	BOOL _migrationHasBeenPerformed;
	id<AVTAvatarStoreInternal> _store;
	AVTStickerConfigurationProvider* _stickerConfigurationProvider;
	AVTUILogger* _logger;

}

@property (nonatomic,retain) id<AVTAvatarStoreInternal> store;                                            //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) AVTStickerConfigurationProvider * stickerConfigurationProvider;              //@synthesize stickerConfigurationProvider=_stickerConfigurationProvider - In the implementation block
@property (assign,nonatomic) AVTUILogger * logger;                                                        //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) BOOL migrationHasBeenPerformed;                                              //@synthesize migrationHasBeenPerformed=_migrationHasBeenPerformed - In the implementation block
-(void)setStore:(id<AVTAvatarStoreInternal>)arg1 ;
-(id<AVTAvatarStoreInternal>)store;
-(void)setLogger:(AVTUILogger *)arg1 ;
-(AVTUILogger *)logger;
-(id)initWithStore:(id)arg1 stickerConfigurationProvider:(id)arg2 environment:(id)arg3 ;
-(void)performMigrationIfNeeded;
-(void)setNeedsMigrationOnNextLaunch;
-(AVTStickerConfigurationProvider *)stickerConfigurationProvider;
-(void)setStickerConfigurationProvider:(AVTStickerConfigurationProvider *)arg1 ;
-(BOOL)migrationHasBeenPerformed;
-(void)setMigrationHasBeenPerformed:(BOOL)arg1 ;
@end

