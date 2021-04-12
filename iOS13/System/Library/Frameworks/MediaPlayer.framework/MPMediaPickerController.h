/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id<MPMediaPickerControllerDelegate>)delegate;
-(void)setDelegate:(id<MPMediaPickerControllerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)configuration;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)willMoveToParentViewController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(long long)modalPresentationStyle;
-(long long)preferredInterfaceOrientationForPresentation;
-(unsigned long long)mediaTypes;
-(long long)_preferredModalPresentationStyle;
-(void)setAllowsPickingMultipleItems:(BOOL)arg1 ;
-(void)_pickerDidCancel;
-(long long)selectionMode;
-(id<MPMediaPickerRemoteViewLoader>)loader;
-(BOOL)allowsPickingMultipleItems;
-(BOOL)showsCatalogContent;
-(void)setShowsCatalogContent:(BOOL)arg1 ;
-(BOOL)showsLibraryContent;
-(void)setShowsLibraryContent:(BOOL)arg1 ;
-(BOOL)supportsUnavailableContent;
-(void)setSupportsUnavailableContent:(BOOL)arg1 ;
-(BOOL)showsCloudItems;
-(void)setShowsCloudItems:(BOOL)arg1 ;
-(BOOL)showsItemsWithProtectedAssets;
-(void)setShowsItemsWithProtectedAssets:(BOOL)arg1 ;
-(BOOL)picksSingleCollectionEntity;
-(void)setPicksSingleCollectionEntity:(BOOL)arg1 ;
-(unsigned)watchCompatibilityVersion;
-(void)setWatchCompatibilityVersion:(unsigned)arg1 ;
-(id)typeIdentifiers;
-(BOOL)pickingForExternalPlayer;
-(void)setPickingForExternalPlayer:(BOOL)arg1 ;
-(id)playbackArchiveConfiguration;
-(void)setPlaybackArchiveConfiguration:(id)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1 ;
-(void)_sharedInit;
-(id)initWithMediaTypes:(unsigned long long)arg1 ;
-(id)initWithSupportedTypeIdentifiers:(id)arg1 selectionMode:(long long)arg2 ;
-(void)_forceDismissal;
-(void)_pickerDidPickItems:(id)arg1 ;
-(void)_pickerDidPickPlaybackArchive:(id)arg1 ;
-(BOOL)_hasAddedRemoteView;
-(void)_addRemoteView;
-(void)_resetRemoteViewController;
-(void)_synchronizeSettings;
-(void)_checkLibraryAuthorization;
-(unsigned long long)_mediaPickerController_supportedInterfaceOrientations;
-(long long)_mediaPickerController_preferredInterfaceOrientationForPresentation;
-(unsigned long long)_keynote_supportedInterfaceOrientations;
-(long long)_keynote_preferredInterfaceOrientationForPresentation;
-(void)setLoader:(id<MPMediaPickerRemoteViewLoader>)arg1 ;
@end

