/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVAppTemplateImpressionable.h>

@class NSArray;

@interface VideosUI.EpicInlineViewController : UIViewController <TVAppTemplateImpressionable> {

	 collectionImpressioner;
	 viewElement;
	 shelfViewModel;
	 horizontalCollectionViewModel;
	 lastViewWidth;
	 shelfViewController;
	 horizontalStackViewController;
	 scrollViewMonitor;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(NSArray *)preferredFocusEnvironments;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
@end

