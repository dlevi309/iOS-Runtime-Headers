/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTUILogger;
@class AVTMemoji, AVTAvatarRecord, AVTAvatarConfiguration, AVTCoreModel, AVTPresetImageProvider, AVTPresetResourceLoader, NSMutableDictionary;

@interface AVTAvatarAttributeEditorModelManager : NSObject {

	AVTMemoji* _avatar;
	AVTAvatarRecord* _avatarRecord;
	AVTAvatarConfiguration* _avatarConfiguration;
	AVTCoreModel* _coreModel;
	AVTPresetImageProvider* _imageProvider;
	AVTPresetResourceLoader* _resourceLoader;
	NSMutableDictionary* _cancelationTokens;
	id<AVTUILogger> _logger;

}

@property (nonatomic,retain) NSMutableDictionary * cancelationTokens;                     //@synthesize cancelationTokens=_cancelationTokens - In the implementation block
@property (nonatomic,retain) id<AVTUILogger> logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTMemoji * avatar;                                        //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,copy,readonly) AVTAvatarRecord * avatarRecord;                       //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfiguration * avatarConfiguration;              //@synthesize avatarConfiguration=_avatarConfiguration - In the implementation block
@property (nonatomic,readonly) AVTCoreModel * coreModel;                                  //@synthesize coreModel=_coreModel - In the implementation block
@property (nonatomic,readonly) AVTPresetImageProvider * imageProvider;                    //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) AVTPresetResourceLoader * resourceLoader;                  //@synthesize resourceLoader=_resourceLoader - In the implementation block
-(void)dealloc;
-(id<AVTUILogger>)logger;
-(AVTMemoji *)avatar;
-(void)setLogger:(id<AVTUILogger>)arg1 ;
-(AVTPresetResourceLoader *)resourceLoader;
-(AVTAvatarRecord *)avatarRecord;
-(AVTPresetImageProvider *)imageProvider;
-(AVTCoreModel *)coreModel;
-(NSMutableDictionary *)cancelationTokens;
-(void)cancelAllPreloading;
-(AVTAvatarConfiguration *)avatarConfiguration;
-(void)updateAvatarWithAvatarUpdater:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
-(id)initWithAvatarRecord:(id)arg1 coreModel:(id)arg2 imageProvider:(id)arg3 resourceLoader:(id)arg4 environment:(id)arg5 ;
-(id)buildUIModelWithCurrentEditorDataSource:(id)arg1 forCategoryAtIndex:(unsigned long long)arg2 ;
-(id)buildInitialEditorState;
-(void)preloadSectionItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)cancelPreloadForSectionItemIndexPath:(id)arg1 ;
-(void)preLoadCategory:(id)arg1 ;
-(void)updateAvatarBySelectingSectionItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateAvatarBySelectingHeaderPickerItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCancelationTokens:(NSMutableDictionary *)arg1 ;
@end

