/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<AVTAvatarStoreInternal>)store;
-(AVTUILogger *)logger;
-(void)setStore:(id<AVTAvatarStoreInternal>)arg1 ;
-(void)setLogger:(AVTUILogger *)arg1 ;
-(id)initWithStore:(id)arg1 stickerConfigurationProvider:(id)arg2 environment:(id)arg3 ;
-(void)performMigrationIfNeeded;
-(void)setNeedsMigrationOnNextLaunch;
-(AVTStickerConfigurationProvider *)stickerConfigurationProvider;
-(void)setStickerConfigurationProvider:(AVTStickerConfigurationProvider *)arg1 ;
-(BOOL)migrationHasBeenPerformed;
-(void)setMigrationHasBeenPerformed:(BOOL)arg1 ;
@end

