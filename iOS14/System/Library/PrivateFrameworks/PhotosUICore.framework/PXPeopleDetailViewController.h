/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotosDetailsUIViewController.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class NSArray, PXPeopleDetailStatusOverlayView, UIScrollView, NSString;

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver> {

	BOOL _processingFaces;
	NSArray* _people;
	PXPeopleDetailStatusOverlayView* _overlayView;
	UIScrollView* _overlayScrollView;
	NSArray* _overlayConstraints;

}

@property (assign,getter=isProcessingFaces,nonatomic) BOOL processingFaces;              //@synthesize processingFaces=_processingFaces - In the implementation block
@property (nonatomic,copy) NSArray * people;                                             //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) PXPeopleDetailStatusOverlayView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIScrollView * overlayScrollView;                           //@synthesize overlayScrollView=_overlayScrollView - In the implementation block
@property (nonatomic,retain) NSArray * overlayConstraints;                               //@synthesize overlayConstraints=_overlayConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScrollView *)overlayScrollView;
-(void)viewWillLayoutSubviews;
-(PXPeopleDetailStatusOverlayView *)overlayView;
-(void)setOverlayView:(PXPeopleDetailStatusOverlayView *)arg1 ;
-(void)setPeople:(NSArray *)arg1 ;
-(void)presentBootstrapViewControllerWithType:(unsigned long long)arg1 ;
-(void)refreshName;
-(void)_createNewDetailView:(id)arg1 ;
-(void)_setupProcessingOverlayView;
-(void)_updateOverlayContentSizeIfNeeded;
-(void)_updateOverlayConstraintsIfNeeded;
-(void)_setupHeader;
-(void)_launchNaming:(id)arg1 ;
-(void)_updateDataSourceWithCollectionForPerson:(id)arg1 ;
-(BOOL)isProcessingFaces;
-(void)setProcessingFaces:(BOOL)arg1 ;
-(void)setOverlayScrollView:(UIScrollView *)arg1 ;
-(NSArray *)overlayConstraints;
-(void)setOverlayConstraints:(NSArray *)arg1 ;
-(BOOL)shouldUpdateStatusBarTitle;
-(void)_loadComposition;
-(NSArray *)people;
-(void)viewDidLoad;
-(void)_updateHeader;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)_suggestionsDidFinish:(id)arg1 ;
-(id)initWithPeople:(id)arg1 ;
-(void)_applicationBecameActive:(id)arg1 ;
@end

