/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)setHomeButtonHandler:(ADHomeButtonHandler *)arg1 ;
-(ADHomeButtonHandler *)homeButtonHandler;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)setStoreProductViewController:(SKStoreProductViewController *)arg1 ;
-(SKStoreProductViewController *)storeProductViewController;
-(void)setDefaultResult:(int)arg1 ;
-(int)defaultResult;
@end

