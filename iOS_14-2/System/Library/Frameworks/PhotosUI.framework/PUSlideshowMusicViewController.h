/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PUViewControllerSpecChangeObserver.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegate.h>

@protocol PUSlideshowMusicDelegate;
@class NSArray, UITableView, PUSlideshowSettingsViewControllerSpec, PUSlideshowMediaItem, NSString;

@interface PUSlideshowMusicViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver, MPMediaPickerControllerDelegate> {

	NSArray* _mediaItems;
	UITableView* _tableView;
	PUSlideshowSettingsViewControllerSpec* _spec;
	BOOL _shouldHideTableViewWhenViewWillDisappear;
	BOOL __needsUpdateSpec;
	BOOL __needsUpdateBackgroundView;
	BOOL __needsUpdateTableView;
	PUSlideshowMediaItem* _currentMediaItem;
	id<PUSlideshowMusicDelegate> _delegate;

}

@property (assign,setter=_setNeedsUpdateSpec:,nonatomic) BOOL _needsUpdateSpec;                                  //@synthesize _needsUpdateSpec=__needsUpdateSpec - In the implementation block
@property (assign,setter=_setNeedsUpdateBackgroundView:,nonatomic) BOOL _needsUpdateBackgroundView;              //@synthesize _needsUpdateBackgroundView=__needsUpdateBackgroundView - In the implementation block
@property (assign,setter=_setNeedsUpdateTableView:,nonatomic) BOOL _needsUpdateTableView;                        //@synthesize _needsUpdateTableView=__needsUpdateTableView - In the implementation block
@property (nonatomic,retain) PUSlideshowMediaItem * currentMediaItem;                                            //@synthesize currentMediaItem=_currentMediaItem - In the implementation block
@property (assign,nonatomic,__weak) id<PUSlideshowMusicDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setCurrentMediaItem:(PUSlideshowMediaItem *)arg1 ;
-(void)_invalidateBackgroundView;
-(void)_invalidateTableView;
-(void)_updateBackgroundViewIfNeeded;
-(void)_updateTableViewIfNeeded;
-(void)_didPickMediaItem:(id)arg1 ;
-(PUSlideshowMediaItem *)currentMediaItem;
-(BOOL)_needsUpdateBackgroundView;
-(void)_setNeedsUpdateBackgroundView:(BOOL)arg1 ;
-(BOOL)_needsUpdateSpec;
-(void)_setNeedsUpdateSpec:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)_needsUpdateTableView;
-(void)_setNeedsUpdateTableView:(BOOL)arg1 ;
-(id)init;
-(id<PUSlideshowMusicDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_updateIfNeeded;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)setDelegate:(id<PUSlideshowMusicDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_updateSpecIfNeeded;
-(void)_didFinish;
-(BOOL)_needsUpdate;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_setNeedsUpdate;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewControllerSpec:(id)arg1 didChange:(id)arg2 ;
-(void)_invalidateSpec;
-(void)dealloc;
@end

