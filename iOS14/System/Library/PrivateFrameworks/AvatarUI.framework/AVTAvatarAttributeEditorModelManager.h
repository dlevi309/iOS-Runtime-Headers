/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorModelManagerDelegateInternal.h>

@protocol AVTAvatarAttributeEditorModelManagerDelegate, AVTUILogger;
@class AVTAvatarRecord, AVTAvatarAttributeEditorState, AVTAvatarConfiguration, AVTUIEnvironment, AVTMemoji, AVTCoreModel, AVTPresetImageProvider, AVTColorLayerProvider, AVTAvatarAttributeEditorPreloader, NSString;

@interface AVTAvatarAttributeEditorModelManager : NSObject <AVTAvatarAttributeEditorModelManagerDelegateInternal> {

	AVTAvatarRecord* _avatarRecord;
	AVTAvatarAttributeEditorState* _editorState;
	id<AVTAvatarAttributeEditorModelManagerDelegate> _delegate;
	AVTAvatarConfiguration* _presetOverriddenConfiguration;
	AVTUIEnvironment* _environment;
	AVTMemoji* _avatar;
	AVTCoreModel* _coreModel;
	id<AVTUILogger> _logger;
	AVTAvatarConfiguration* _avatarConfiguration;
	AVTPresetImageProvider* _imageProvider;
	AVTColorLayerProvider* _colorLayerProvider;
	AVTAvatarAttributeEditorPreloader* _preloader;

}

@property (nonatomic,retain) AVTAvatarConfiguration * presetOverriddenConfiguration;                        //@synthesize presetOverriddenConfiguration=_presetOverriddenConfiguration - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) AVTMemoji * avatar;                                                            //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,readonly) AVTCoreModel * coreModel;                                                    //@synthesize coreModel=_coreModel - In the implementation block
@property (nonatomic,retain) id<AVTUILogger> logger;                                                        //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfiguration * avatarConfiguration;                                //@synthesize avatarConfiguration=_avatarConfiguration - In the implementation block
@property (nonatomic,readonly) AVTPresetImageProvider * imageProvider;                                      //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) AVTColorLayerProvider * colorLayerProvider;                                  //@synthesize colorLayerProvider=_colorLayerProvider - In the implementation block
@property (nonatomic,readonly) AVTAvatarAttributeEditorPreloader * preloader;                               //@synthesize preloader=_preloader - In the implementation block
@property (nonatomic,copy,readonly) AVTAvatarRecord * avatarRecord;                                         //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,readonly) AVTAvatarAttributeEditorState * editorState;                                 //@synthesize editorState=_editorState - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarAttributeEditorModelManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyPairColorUpdateIfNeeded:(id)arg1 forCategoryRight:(long long)arg2 categoryLeft:(long long)arg3 ;
-(void)applyPairColorUpdatesIfNeeded:(id)arg1 ;
-(id)buildUIModel;
-(void)updateAvatarBySelectingSectionItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateAvatarBySelectingSupplementalPickerItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateAvatarByApplyingPresetOverrides:(id)arg1 animated:(BOOL)arg2 ;
-(AVTMemoji *)avatar;
-(id<AVTAvatarAttributeEditorModelManagerDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarAttributeEditorModelManagerDelegate>)arg1 ;
-(AVTAvatarRecord *)avatarRecord;
-(void)setAvatar:(AVTMemoji *)arg1 ;
-(id)initWithAvatarRecord:(id)arg1 ;
-(AVTAvatarAttributeEditorPreloader *)preloader;
-(void)setLogger:(id<AVTUILogger>)arg1 ;
-(id<AVTUILogger>)logger;
-(AVTUIEnvironment *)environment;
-(BOOL)shouldDisplaySectionForCategory:(long long)arg1 ;
-(BOOL)shouldDisplaySectionWithDisplayCondition:(id)arg1 inCategoryAtIndex:(unsigned long long)arg2 ;
-(AVTPresetImageProvider *)imageProvider;
-(AVTCoreModel *)coreModel;
-(void)loadResourcesIfNeeded;
-(id)initWithAvatarRecord:(id)arg1 coreModel:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 preloader:(id)arg5 environment:(id)arg6 ;
-(id)buildInitialEditorState;
-(void)flushResourcesForEnteringBackground;
-(AVTAvatarAttributeEditorState *)editorState;
-(AVTAvatarConfiguration *)avatarConfiguration;
-(id)buildUIModelWithSelectedCategory:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(AVTColorLayerProvider *)colorLayerProvider;
-(AVTAvatarConfiguration *)presetOverriddenConfiguration;
-(void)applyConfigurationToAvatar:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateAvatarRecordFromAvatar;
-(void)setPresetOverriddenConfiguration:(AVTAvatarConfiguration *)arg1 ;
-(void)updateAvatarWithAvatarUpdater:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
@end

