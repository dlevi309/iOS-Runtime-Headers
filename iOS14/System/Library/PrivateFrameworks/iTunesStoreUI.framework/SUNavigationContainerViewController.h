/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUViewController.h>

@class AMSBinaryPromise, UIViewController;

@interface SUNavigationContainerViewController : SUViewController {

	BOOL _bridgedNavigation;
	BOOL _shouldRunPopHandler;
	AMSBinaryPromise* _appearancePromise;
	/*^block*/id _popHandler;

}

@property (assign,nonatomic) BOOL shouldRunPopHandler;                                 //@synthesize shouldRunPopHandler=_shouldRunPopHandler - In the implementation block
@property (nonatomic,retain) AMSBinaryPromise * appearancePromise;                     //@synthesize appearancePromise=_appearancePromise - In the implementation block
@property (assign,nonatomic) BOOL bridgedNavigation;                                   //@synthesize bridgedNavigation=_bridgedNavigation - In the implementation block
@property (nonatomic,readonly) UIViewController * embeddedViewController; 
@property (nonatomic,copy) id popHandler;                                              //@synthesize popHandler=_popHandler - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController *)embeddedViewController;
-(id)initWithChildViewController:(id)arg1 ;
-(BOOL)bridgedNavigation;
-(void)setPopHandler:(id)arg1 ;
-(void)setEmbeddedViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBridgedNavigation:(BOOL)arg1 ;
-(AMSBinaryPromise *)appearancePromise;
-(BOOL)shouldRunPopHandler;
-(void)setShouldRunPopHandler:(BOOL)arg1 ;
-(id)popHandler;
-(void)setAppearancePromise:(AMSBinaryPromise *)arg1 ;
@end

