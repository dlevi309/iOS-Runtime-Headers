/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFilteredMomentsViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXGridPresentationBarsUpdateDelegate;
@class UIViewController, NSString;

@interface PUPXFilteredMomentsViewController : PUFilteredMomentsViewController <PXChangeObserver> {

	UIViewController* _containerViewController;
	id<PXGridPresentationBarsUpdateDelegate> _barsUpdateDelegate;

}

@property (assign,nonatomic,__weak) UIViewController * containerViewController;                               //@synthesize containerViewController=_containerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXGridPresentationBarsUpdateDelegate> barsUpdateDelegate;              //@synthesize barsUpdateDelegate=_barsUpdateDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(PUBarAnimationSettings)arg1 ;
-(UIViewController *)containerViewController;
-(void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 buttonAction:(/*^block*/id*)arg4 ;
-(BOOL)isInPlaces:(id)arg1 ;
-(id<PXGridPresentationBarsUpdateDelegate>)barsUpdateDelegate;
-(void)setContainerViewController:(UIViewController *)arg1 ;
-(void)setBarsUpdateDelegate:(id<PXGridPresentationBarsUpdateDelegate>)arg1 ;
-(void)updateNavigationBarAnimated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)oneUpPresentationHelperViewController:(id)arg1 ;
-(void)loadView;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

