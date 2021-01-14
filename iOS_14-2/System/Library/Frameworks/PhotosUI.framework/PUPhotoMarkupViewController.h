/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MarkupViewControllerDelegate.h>

@class PUReviewAsset, PUMediaProvider, MarkupViewController, PUObserverRegistry, NSURL, NSString;

@interface PUPhotoMarkupViewController : UIViewController <MarkupViewControllerDelegate> {

	PUReviewAsset* _reviewAsset;
	PUMediaProvider* _mediaProvider;
	MarkupViewController* __markupViewController;
	PUObserverRegistry* __observerRegistry;
	long long __sourceImageVersion;
	NSURL* __workaroundInputWriteURL;

}

@property (nonatomic,readonly) MarkupViewController * _markupViewController;                                  //@synthesize _markupViewController=__markupViewController - In the implementation block
@property (nonatomic,readonly) PUObserverRegistry * _observerRegistry;                                        //@synthesize _observerRegistry=__observerRegistry - In the implementation block
@property (assign,setter=_setSourceImageVersion:,nonatomic) long long _sourceImageVersion;                    //@synthesize _sourceImageVersion=__sourceImageVersion - In the implementation block
@property (setter=_setWorkaroundInputWriteURL:,nonatomic,copy) NSURL * _workaroundInputWriteURL;              //@synthesize _workaroundInputWriteURL=__workaroundInputWriteURL - In the implementation block
@property (nonatomic,readonly) PUReviewAsset * reviewAsset;                                                   //@synthesize reviewAsset=_reviewAsset - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * mediaProvider;                                               //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(PUMediaProvider *)mediaProvider;
-(void)registerObserver:(id)arg1 ;
-(id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2 ;
-(MarkupViewController *)_markupViewController;
-(long long)_sourceImageVersion;
-(void)_notifyObserversDidFinishWithSavedAsset:(id)arg1 ;
-(void)_setSourceImageVersion:(long long)arg1 ;
-(NSURL *)_workaroundInputWriteURL;
-(void)_setWorkaroundInputWriteURL:(id)arg1 ;
-(void)_handleDoneButton:(id)arg1 ;
-(PUReviewAsset *)reviewAsset;
-(PUObserverRegistry *)_observerRegistry;
-(void)_handleCancelButton:(id)arg1 ;
-(void)viewDidLoad;
@end

