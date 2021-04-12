/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/AVTStickerBackendDelegate.h>
#import <libobjc.A.dylib/AVTStickerRecentsOverlayDelegate.h>

@protocol AVTStickerRecentsViewControllerDelegate, NSObject, AVTAvatarRecord, AVTAvatarStoreInternal, AVTResourceCache, OS_dispatch_queue, AVTStickerRecentsItem;
@class AVTStickerRecentsMigrator, AVTStickerRecentsOverlayView, AVTClippableImageStore, UICollectionViewFlowLayout, UICollectionView, AVTUIEnvironment, AVTStickerGenerator, NSObject, AVTStickerConfigurationProvider, AVTSerialTaskScheduler, AVTUIStickerGeneratorPool, AVTStickerRecentsLayout, NSArray, CALayer, NSString;

@interface AVTStickerRecentsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AVTStickerBackendDelegate, AVTStickerRecentsOverlayDelegate> {

	BOOL _hasFetchedDefaultMemoji;
	BOOL _showPrereleaseSticker;
	id<AVTStickerRecentsViewControllerDelegate> _delegate;
	AVTStickerRecentsMigrator* _stickerRecentsMigrator;
	AVTStickerRecentsOverlayView* _overlayView;
	id<NSObject> _avatarStoreChangeObserver;
	id<AVTAvatarRecord> _defaultMemoji;
	AVTClippableImageStore* _imageStore;
	UICollectionViewFlowLayout* _collectionViewLayout;
	UICollectionView* _collectionView;
	id<AVTAvatarStoreInternal> _avatarStore;
	AVTUIEnvironment* _environment;
	id<AVTResourceCache> _cache;
	AVTStickerGenerator* _stickerGenerator;
	NSObject*<OS_dispatch_queue> _recentsWorkQueue;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	NSObject*<OS_dispatch_queue> _encodingQueue;
	AVTStickerConfigurationProvider* _configurationProvider;
	AVTSerialTaskScheduler* _taskScheduler;
	AVTUIStickerGeneratorPool* _generatorPool;
	AVTStickerRecentsLayout* _stickerRecentsLayout;
	id<AVTStickerRecentsItem> _buttonItem;
	NSArray* _stickerItems;
	NSArray* _displayItems;
	CALayer* _edgeMaskLayer;

}

@property (nonatomic,retain) AVTStickerRecentsMigrator * stickerRecentsMigrator;                       //@synthesize stickerRecentsMigrator=_stickerRecentsMigrator - In the implementation block
@property (nonatomic,retain) AVTStickerRecentsOverlayView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) id<NSObject> avatarStoreChangeObserver;                                   //@synthesize avatarStoreChangeObserver=_avatarStoreChangeObserver - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedDefaultMemoji;                                             //@synthesize hasFetchedDefaultMemoji=_hasFetchedDefaultMemoji - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> defaultMemoji;                                        //@synthesize defaultMemoji=_defaultMemoji - In the implementation block
@property (nonatomic,retain) AVTClippableImageStore * imageStore;                                      //@synthesize imageStore=_imageStore - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * collectionViewLayout;                        //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarStoreInternal> avatarStore;                                 //@synthesize avatarStore=_avatarStore - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                         //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTResourceCache> cache;                                             //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) AVTStickerGenerator * stickerGenerator;                                 //@synthesize stickerGenerator=_stickerGenerator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recentsWorkQueue;                            //@synthesize recentsWorkQueue=_recentsWorkQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> renderingQueue;                              //@synthesize renderingQueue=_renderingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> encodingQueue;                               //@synthesize encodingQueue=_encodingQueue - In the implementation block
@property (nonatomic,retain) AVTStickerConfigurationProvider * configurationProvider;                  //@synthesize configurationProvider=_configurationProvider - In the implementation block
@property (nonatomic,retain) AVTSerialTaskScheduler * taskScheduler;                                   //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (nonatomic,retain) AVTUIStickerGeneratorPool * generatorPool;                                //@synthesize generatorPool=_generatorPool - In the implementation block
@property (nonatomic,readonly) AVTStickerRecentsLayout * stickerRecentsLayout;                         //@synthesize stickerRecentsLayout=_stickerRecentsLayout - In the implementation block
@property (nonatomic,retain) id<AVTStickerRecentsItem> buttonItem;                                     //@synthesize buttonItem=_buttonItem - In the implementation block
@property (nonatomic,retain) NSArray * stickerItems;                                                   //@synthesize stickerItems=_stickerItems - In the implementation block
@property (nonatomic,retain) NSArray * displayItems;                                                   //@synthesize displayItems=_displayItems - In the implementation block
@property (assign,nonatomic) BOOL showPrereleaseSticker;                                               //@synthesize showPrereleaseSticker=_showPrereleaseSticker - In the implementation block
@property (nonatomic,retain) CALayer * edgeMaskLayer;                                                  //@synthesize edgeMaskLayer=_edgeMaskLayer - In the implementation block
@property (assign,nonatomic,__weak) id<AVTStickerRecentsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layoutForSize:(CGSize)arg1 ;
+(id)imageStoreWithEnvironment:(id)arg1 ;
+(id)stickerCacheWithEnvironment:(id)arg1 ;
+(id)stickerForRecentItem:(id)arg1 ;
+(id)stickerRecentsController;
+(id)stickerRecentsControllerForStore:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(AVTSerialTaskScheduler *)taskScheduler;
-(void)viewWillLayoutSubviews;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id<AVTResourceCache>)cache;
-(AVTStickerRecentsOverlayView *)overlayView;
-(void)setOverlayView:(AVTStickerRecentsOverlayView *)arg1 ;
-(id<AVTStickerRecentsViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)renderingQueue;
-(void)setDelegate:(id<AVTStickerRecentsViewControllerDelegate>)arg1 ;
-(NSArray *)displayItems;
-(AVTClippableImageStore *)imageStore;
-(void)viewDidLoad;
-(void)overlayDidTapContentView:(id)arg1 ;
-(void)overlayDidTapContinueButton:(id)arg1 ;
-(void)overlayDidTapCloseButton:(id)arg1 ;
-(id<AVTStickerRecentsItem>)buttonItem;
-(NSArray *)stickerItems;
-(BOOL)showPrereleaseSticker;
-(void)setShowPrereleaseSticker:(BOOL)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(AVTStickerConfigurationProvider *)configurationProvider;
-(AVTUIStickerGeneratorPool *)generatorPool;
-(void)setGeneratorPool:(AVTUIStickerGeneratorPool *)arg1 ;
-(AVTStickerGenerator *)stickerGenerator;
-(AVTUIEnvironment *)environment;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(id)initWithAvatarStore:(id)arg1 environment:(id)arg2 ;
-(id)placeholderItems;
-(void)updateDisplayItems;
-(void)updateItemSizeForContainerSize:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsetsForContainerSize:(CGSize)arg1 ;
-(void)setEdgeMaskLayer:(CALayer *)arg1 ;
-(void)determineOverlayTypeWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setupRenderingDependentPieces;
-(void)beginObservingAvatarStoreChanges;
-(void)buildRecentsItemsWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)recentsWorkQueue;
-(void)setHasFetchedDefaultMemoji:(BOOL)arg1 ;
-(void)fetchDefaultMemojiIfNeeded;
-(id)recentStickersWithCount:(long long)arg1 ;
-(AVTStickerRecentsLayout *)stickerRecentsLayout;
-(void)dismissOverlayViewAnimated:(BOOL)arg1 ;
-(AVTStickerRecentsMigrator *)stickerRecentsMigrator;
-(void)recentStickersDidChange:(id)arg1 ;
-(void)endObservingAvatarStoreChanges;
-(void)setStickerRecentsMigrator:(AVTStickerRecentsMigrator *)arg1 ;
-(id<NSObject>)avatarStoreChangeObserver;
-(void)setAvatarStoreChangeObserver:(id<NSObject>)arg1 ;
-(BOOL)hasFetchedDefaultMemoji;
-(id<AVTAvatarRecord>)defaultMemoji;
-(void)setDefaultMemoji:(id<AVTAvatarRecord>)arg1 ;
-(void)setImageStore:(AVTClippableImageStore *)arg1 ;
-(void)setRecentsWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRenderingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)encodingQueue;
-(void)setEncodingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConfigurationProvider:(AVTStickerConfigurationProvider *)arg1 ;
-(void)setTaskScheduler:(AVTSerialTaskScheduler *)arg1 ;
-(void)setButtonItem:(id<AVTStickerRecentsItem>)arg1 ;
-(void)setStickerItems:(NSArray *)arg1 ;
-(CALayer *)edgeMaskLayer;
-(id<AVTAvatarStoreInternal>)avatarStore;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

