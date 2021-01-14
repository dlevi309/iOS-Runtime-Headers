/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITableViewController.h>

@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate;
@class NSOrderedSet, NSMutableSet;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController {

	NSOrderedSet* _albumsOrderedSet;
	NSMutableSet* _selectedAlbumGuids;
	BOOL _allowsMutlipleSelection;
	id<PUPhotoStreamsAlbumsTableViewControllerDelegate> _pickerDelegate;

}

@property (assign,nonatomic) BOOL allowsMutlipleSelection;                                                           //@synthesize allowsMutlipleSelection=_allowsMutlipleSelection - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoStreamsAlbumsTableViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
+(id)albumListForContentMode:(int)arg1 ;
+(/*^block*/id)_albumsComparator;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)addSelectedCloudGuid:(id)arg1 ;
-(void)reloadActions;
-(id)posterImageForAlbum:(id)arg1 imageView:(id)arg2 ;
-(BOOL)allowsMutlipleSelection;
-(void)setAllowsMutlipleSelection:(BOOL)arg1 ;
-(id<PUPhotoStreamsAlbumsTableViewControllerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<PUPhotoStreamsAlbumsTableViewControllerDelegate>)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

