/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFPinnableBanner.h>
#import <libobjc.A.dylib/SKProductPageViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFAppSuggestionBanner.h>

@protocol _SFAppSuggestionBannerDelegate;
@class SKProductPageViewController, NSNumber, NSString;

@interface _SFStoreBanner : _SFPinnableBanner <SKProductPageViewControllerDelegate, _SFAppSuggestionBanner> {

	SKProductPageViewController* _productViewController;
	NSNumber* _productID;
	NSString* _affiliateData;
	id<_SFAppSuggestionBannerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_SFAppSuggestionBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_SFAppSuggestionBannerDelegate>)delegate;
-(void)setDelegate:(id<_SFAppSuggestionBannerDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setBlockedByUser;
-(void)productPage:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)productPage:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)productPage:(id)arg1 didFinishPurchase:(id)arg2 withError:(id)arg3 ;
-(void)productPage:(id)arg1 willMakePurchases:(id)arg2 ;
-(id)initWithProductID:(id)arg1 affiliateData:(id)arg2 applicationLaunchArgument:(id)arg3 ;
-(void)dealloc;
@end

