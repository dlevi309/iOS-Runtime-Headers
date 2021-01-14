/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUICategoryControllerDelegate.h>

@class NSURL, SKUICategoryController, NSData, SSVLoadURLOperation, SKUIStorePageViewController, NSString;

@interface SKUILegacyNativeViewController : SKUIViewController <SKUICategoryControllerDelegate> {

	NSURL* _activeURL;
	SKUICategoryController* _categoryController;
	NSURL* _defaultURL;
	NSData* _initialData;
	SSVLoadURLOperation* _initialOperation;
	SKUIStorePageViewController* _storePageViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)reloadData;
-(id)initWithData:(id)arg1 fromOperation:(id)arg2 ;
-(void)loadView;
-(void)dealloc;
-(id)_categoryController;
-(id)_storePageViewController;
-(id)activeMetricsController;
-(void)_reloadNavigationItem;
-(void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)categoryController:(id)arg1 didSelectCategory:(id)arg2 ;
@end

