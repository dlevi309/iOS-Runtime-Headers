/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCMMInvitationViewDelegate.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXCMMInvitation, PXGadgetDelegate, PXCMMWorkflowPresenting, PXCMMInvitationGadgetDelegate;
@class PXCMMInvitationViewModel, PXCMMInvitationView, PXGadgetSpec, NSManagedObjectID, PXMomentShareStatusPresentation, NSString;

@interface PXCMMInvitationGadget : NSObject <PXChangeObserver, PXCMMInvitationViewDelegate, PXGadget> {

	id<PXCMMInvitation> _invitation;
	BOOL _didLoadInvitation;
	PXCMMInvitationViewModel* _invitationViewModel;
	PXCMMInvitationView* _invitationView;
	CGSize _requestedPosterImageSize;
	double _requestedWidth;
	BOOL _didRequestCachingOfPosterImage;
	PXGadgetSpec* _gadgetSpec;
	id<PXGadgetDelegate> _delegate;
	id<PXCMMWorkflowPresenting> _workflowPresenter;
	NSManagedObjectID* _objectID;
	id<PXCMMInvitationGadgetDelegate> _invitationGadgetDelegate;
	PXMomentShareStatusPresentation* _momentShareStatusPresentation;

}

@property (nonatomic,retain) PXMomentShareStatusPresentation * momentShareStatusPresentation;                //@synthesize momentShareStatusPresentation=_momentShareStatusPresentation - In the implementation block
@property (nonatomic,readonly) id<PXCMMWorkflowPresenting> workflowPresenter;                                //@synthesize workflowPresenter=_workflowPresenter - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                                                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) id<PXCMMInvitation> invitation; 
@property (assign,nonatomic,__weak) id<PXCMMInvitationGadgetDelegate> invitationGadgetDelegate;              //@synthesize invitationGadgetDelegate=_invitationGadgetDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                      //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
+(id)_imageRequestOptions;
+(id)sharedUserInitiatedQueue;
-(PXGadgetSpec *)gadgetSpec;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)contentHasBeenSeen;
-(void)prepareCollectionViewItem:(id)arg1 ;
-(id)uniqueGadgetIdentifier;
-(void)prefetchDuringScrollingForWidth:(double)arg1 ;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2 ;
-(Class)collectionViewItemClass;
-(NSManagedObjectID *)objectID;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(id<PXCMMWorkflowPresenting>)workflowPresenter;
-(id<PXCMMInvitation>)invitation;
-(void)setInvitation:(id<PXCMMInvitation>)arg1 ;
-(void)invitationViewSizeThatFitsDidChange:(id)arg1 ;
-(id)initWithWorkflowPresenter:(id)arg1 ;
-(void)presentDetailViewForInvitationView:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentDetailViewAnimated:(BOOL)arg1 ;
-(BOOL)supportsHighlighting;
-(void)_loadInvitationIfNecessary;
-(void)_lastExitedForYouDateDidChange:(id)arg1 ;
-(void)_registerMomentShareStatusPresentation;
-(void)_updateTitle:(id)arg1 ;
-(void)_updateStatusString:(id)arg1 ;
-(void)_updateExpirationTitle:(id)arg1 ;
-(void)setMomentShareStatusPresentation:(PXMomentShareStatusPresentation *)arg1 ;
-(void)_presentDetailViewAnimated:(BOOL)arg1 ;
-(void)_cachePosterImageWithWidth:(double)arg1 ;
-(void)_clearPosterImageCache;
-(id<PXCMMInvitationGadgetDelegate>)invitationGadgetDelegate;
-(void)setInvitationGadgetDelegate:(id<PXCMMInvitationGadgetDelegate>)arg1 ;
-(PXMomentShareStatusPresentation *)momentShareStatusPresentation;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

