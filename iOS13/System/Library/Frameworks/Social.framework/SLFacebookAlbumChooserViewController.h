/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SLFacebookAlbumManagerDelegate.h>

@protocol SLFacebookAlbumChooserViewControllerDelegate;
@class NSCache, UIButton, SLFacebookAlbumManager, NSArray;

@interface SLFacebookAlbumChooserViewController : UITableViewController <SLFacebookAlbumManagerDelegate> {

	NSCache* _coverImageCache;
	UIButton* _flipBackButton;
	SLFacebookAlbumManager* _albumManager;
	NSArray* _albums;
	id<SLFacebookAlbumChooserViewControllerDelegate> _delegate;

}

@property (retain) UIButton * flipBackButton;                                              //@synthesize flipBackButton=_flipBackButton - In the implementation block
@property (retain) SLFacebookAlbumManager * albumManager;                                  //@synthesize albumManager=_albumManager - In the implementation block
@property (retain) NSArray * albums;                                                       //@synthesize albums=_albums - In the implementation block
@property (__weak) id<SLFacebookAlbumChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_squareImageFromAlbumImage:(id)arg1 ;
+(id)_blankSurrogateAlbumImage;
-(id<SLFacebookAlbumChooserViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SLFacebookAlbumChooserViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(NSArray *)albums;
-(void)setAlbums:(NSArray *)arg1 ;
-(void)setAlbumManager:(SLFacebookAlbumManager *)arg1 ;
-(SLFacebookAlbumManager *)albumManager;
-(void)albumManager:(id)arg1 didRefreshAlbums:(id)arg2 ;
-(void)albumManager:(id)arg1 didFailAlbumRefreshWithError:(id)arg2 ;
-(void)albumManager:(id)arg1 didLoadCoverImage:(id)arg2 forAlbum:(id)arg3 ;
-(void)albumManager:(id)arg1 didFailLoadingCoverImageForAlbum:(id)arg2 withError:(id)arg3 ;
-(id)initWithAlbumManager:(id)arg1 ;
-(void)flipBackTapped:(id)arg1 ;
-(UIButton *)flipBackButton;
-(void)setFlipBackButton:(UIButton *)arg1 ;
@end

