/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXSharedAlbumInvitationViewDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, PXFeedInvitationSectionInfo, PXSharedAlbumHeaderView, PXSharedAlbumInvitationView, NSString;

@interface PXSharedAlbumInvitationGadget : UIViewController <PXSharedAlbumInvitationViewDelegate, PXSettingsKeyObserver, PXGadget> {

	BOOL _loadedContentData;
	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXFeedInvitationSectionInfo* _invitationSectionInfo;
	PXSharedAlbumHeaderView* _headerView;
	PXSharedAlbumInvitationView* _invitationView;

}

@property (nonatomic,retain) PXSharedAlbumHeaderView * headerView;                             //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) PXSharedAlbumInvitationView * invitationView;                     //@synthesize invitationView=_invitationView - In the implementation block
@property (assign,nonatomic) BOOL loadedContentData;                                           //@synthesize loadedContentData=_loadedContentData - In the implementation block
@property (nonatomic,retain) PXFeedInvitationSectionInfo * invitationSectionInfo;              //@synthesize invitationSectionInfo=_invitationSectionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                        //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
+(void)preloadResources;
-(id)px_gridPresentation;
-(PXGadgetSpec *)gadgetSpec;
-(unsigned long long)gadgetCapabilities;
-(void)viewWillLayoutSubviews;
-(unsigned long long)gadgetType;
-(void)setHeaderView:(PXSharedAlbumHeaderView *)arg1 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_attemptToNavigateToSharedAlbum:(id)arg1 hostingViewController:(id)arg2 ;
-(BOOL)loadedContentData;
-(void)setLoadedContentData:(BOOL)arg1 ;
-(id)uniqueGadgetIdentifier;
-(id)contentViewController;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)sharedAlbumInvitationView:(id)arg1 didAccept:(BOOL)arg2 ;
-(void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1 ;
-(void)setInvitationSectionInfo:(PXFeedInvitationSectionInfo *)arg1 ;
-(void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2 ;
-(void)_updateInvitationView;
-(PXFeedInvitationSectionInfo *)invitationSectionInfo;
-(PXSharedAlbumInvitationView *)invitationView;
-(void)setInvitationView:(PXSharedAlbumInvitationView *)arg1 ;
-(PXSharedAlbumHeaderView *)headerView;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)dealloc;
@end

