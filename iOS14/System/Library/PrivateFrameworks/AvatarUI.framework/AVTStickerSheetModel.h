/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarRecord, AVTTaskScheduler;
@class AVTUIStickerRenderer, AVTUIEnvironment, AVTUIStickerPlaceholderProviderFactory, NSArray;

@interface AVTStickerSheetModel : NSObject {

	id<AVTAvatarRecord> _avatarRecord;
	id<AVTTaskScheduler> _taskScheduler;
	AVTUIStickerRenderer* _stickerRenderer;
	AVTUIEnvironment* _environment;
	AVTUIStickerPlaceholderProviderFactory* _placeholderProviderFactory;
	NSArray* _stickerItems;

}

@property (nonatomic,readonly) id<AVTAvatarRecord> avatarRecord;                                                 //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> taskScheduler;                                               //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (nonatomic,readonly) AVTUIStickerRenderer * stickerRenderer;                                           //@synthesize stickerRenderer=_stickerRenderer - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                                   //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) AVTUIStickerPlaceholderProviderFactory * placeholderProviderFactory;              //@synthesize placeholderProviderFactory=_placeholderProviderFactory - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stickerItems;                                                      //@synthesize stickerItems=_stickerItems - In the implementation block
+(id)sheetModelForAvatarRecord:(id)arg1 withConfigurations:(id)arg2 cache:(id)arg3 taskScheduler:(id)arg4 renderingQueue:(id)arg5 encodingQueue:(id)arg6 stickerGeneratorPool:(id)arg7 imageProvider:(id)arg8 environment:(id)arg9 ;
-(id<AVTTaskScheduler>)taskScheduler;
-(AVTUIStickerPlaceholderProviderFactory *)placeholderProviderFactory;
-(id)initWithAvatarRecord:(id)arg1 stickerItems:(id)arg2 stickerRenderer:(id)arg3 taskScheduler:(id)arg4 placeholderProviderFactory:(id)arg5 environment:(id)arg6 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(AVTUIStickerRenderer *)stickerRenderer;
-(NSArray *)stickerItems;
-(AVTUIEnvironment *)environment;
@end

