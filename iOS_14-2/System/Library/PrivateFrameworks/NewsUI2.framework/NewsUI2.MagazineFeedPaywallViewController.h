/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUPluggable.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSArray;

@interface NewsUI2.MagazineFeedPaywallViewController : UIViewController <TUPluggable, UIScrollViewDelegate> {

	 configurationManager;
	 styler;
	 eventHandler;
	 blueprintLayoutOptionsProvider;
	 paywallLayoutAttributesFactory;
	 paywallRenderer;
	 paywallView;
	 isBeingUsedAsPlugin;
	 pluggableDelegate;
	 purchasingSpinnerViewControllerFactory;
	 $__lazy_storage_$_spinnerViewController;
	 purchasePresenter;
	 lastRenderedVerticalContentOffset;
	 imageResults;
	 badgeImageResults;

}

@property (readonly,nonatomic) long long pluginItemCount; 
@property (readonly,nonatomic) long long pluginVisibleItemCount; 
@property (readonly,nonatomic) NSArray * pluginItemIdentifiers; 
@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (assign,__weak,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)pluginItemCount;
-(long long)pluginVisibleItemCount;
-(NSArray *)pluginItemIdentifiers;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

