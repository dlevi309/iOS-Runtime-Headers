/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithItemIdentifier:(id)arg1 ;
-(void)setSupressingFooter:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)dealloc;
@end

