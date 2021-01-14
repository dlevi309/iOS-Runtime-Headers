/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/ADActionViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class SKStoreProductViewController, ADHomeButtonHandler, NSString;

@interface ADiTunesActionViewController : ADActionViewController <SKStoreProductViewControllerDelegate> {

	int _defaultResult;
	SKStoreProductViewController* _storeProductViewController;
	ADHomeButtonHandler* _homeButtonHandler;

}

@property (nonatomic,retain) SKStoreProductViewController * storeProductViewController;              //@synthesize storeProductViewController=_storeProductViewController - In the implementation block
@property (assign,nonatomic) int defaultResult;                                                      //@synthesize defaultResult=_defaultResult - In the implementation block
@property (nonatomic,retain) ADHomeButtonHandler * homeButtonHandler;                                //@synthesize homeButtonHandler=_homeButtonHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)dismiss;
-(void)setHomeButtonHandler:(ADHomeButtonHandler *)arg1 ;
-(ADHomeButtonHandler *)homeButtonHandler;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)setStoreProductViewController:(SKStoreProductViewController *)arg1 ;
-(SKStoreProductViewController *)storeProductViewController;
-(void)setDefaultResult:(int)arg1 ;
-(int)defaultResult;
@end

