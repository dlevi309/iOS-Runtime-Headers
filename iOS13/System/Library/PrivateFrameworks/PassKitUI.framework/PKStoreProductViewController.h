/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <StoreKit/SKStoreProductViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class NSString;

@interface PKStoreProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate> {

	BOOL _suppressingFooter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)initWithItemIdentifier:(id)arg1 ;
-(void)setSupressingFooter:(BOOL)arg1 ;
@end

