/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MPMusicMediaPickerClientController.h>

@protocol MPMediaPickerControllerDelegate, MPMediaPickerRemoteViewLoader;
@class MPMediaPickerConfiguration, NSString;

@interface MPMediaPickerController : UIViewController <MPMusicMediaPickerClientController> {

	MPMediaPickerConfiguration* _configuration;
	id<MPMediaPickerControllerDelegate> _delegate;
	id<MPMediaPickerRemoteViewLoader> _loader;

}

@property (nonatomic,retain) id<MPMediaPickerRemoteViewLoader> loader;                         //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaTypes; 
@property (assign,nonatomic,__weak) id<MPMediaPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsPickingMultipleItems; 
@property (assign,nonatomic) BOOL showsCloudItems; 
@property (assign,nonatomic) BOOL showsItemsWithProtectedAssets; 
@property (nonatomic,copy) NSString * prompt; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(void)preheatMediaPicker;
-(void)setPrompt:(NSString *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)prompt;
-(id)typeIdentifiers;
-(long long)selectionMode;
-(id<MPMediaPickerRemoteViewLoader>)loader;
-(long long)preferredInterfaceOrientationForPresentation;
-(id<MPMediaPickerControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setLoader:(id<MPMediaPickerRemoteViewLoader>)arg1 ;
-(long long)modalPresentationStyle;
-(BOOL)showsCloudItems;
-(BOOL)showsCatalogContent;
-(void)setShowsCatalogContent:(BOOL)arg1 ;
-(BOOL)showsLibraryContent;
-(void)setShowsLibraryContent:(BOOL)arg1 ;
-(BOOL)supportsUnavailableContent;
-(void)setSupportsUnavailableContent:(BOOL)arg1 ;
-(BOOL)allowsPickingMultipleItems;
-(void)setShowsCloudItems:(BOOL)arg1 ;
-(BOOL)showsItemsWithProtectedAssets;
-(void)setShowsItemsWithProtectedAssets:(BOOL)arg1 ;
-(BOOL)picksSingleCollectionEntity;
-(void)setPicksSingleCollectionEntity:(BOOL)arg1 ;
-(unsigned)watchCompatibilityVersion;
-(void)setWatchCompatibilityVersion:(unsigned)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)pickingForExternalPlayer;
-(void)setPickingForExternalPlayer:(BOOL)arg1 ;
-(id)playbackArchiveConfiguration;
-(void)_forceDismissal;
-(void)setPlaybackArchiveConfiguration:(id)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(id)initWithMediaTypes:(unsigned long long)arg1 ;
-(void)_addRemoteView;
-(void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1 ;
-(id)initWithSupportedTypeIdentifiers:(id)arg1 selectionMode:(long long)arg2 ;
-(void)_pickerDidPickItems:(id)arg1 ;
-(void)_pickerDidPickPlaybackArchive:(id)arg1 ;
-(BOOL)_hasAddedRemoteView;
-(void)_resetRemoteViewController;
-(void)_synchronizeSettings;
-(void)_checkLibraryAuthorization;
-(unsigned long long)_mediaPickerController_supportedInterfaceOrientations;
-(unsigned long long)_keynote_supportedInterfaceOrientations;
-(long long)_mediaPickerController_preferredInterfaceOrientationForPresentation;
-(long long)_keynote_preferredInterfaceOrientationForPresentation;
-(id)initWithConfiguration:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<MPMediaPickerControllerDelegate>)arg1 ;
-(id)configuration;
-(void)_sharedInit;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(unsigned long long)mediaTypes;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllowsPickingMultipleItems:(BOOL)arg1 ;
-(void)_pickerDidCancel;
-(long long)_preferredModalPresentationStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

