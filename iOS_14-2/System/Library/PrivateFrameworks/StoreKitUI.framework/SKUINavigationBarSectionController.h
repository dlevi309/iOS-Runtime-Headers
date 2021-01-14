/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUINavigationBarContext, SKUIViewElementLayoutContext, UIView, NSString;

@interface SKUINavigationBarSectionController : NSObject <SKUIArtworkRequestDelegate> {

	SKUINavigationBarContext* _navigationBarContext;
	SKUIViewElementLayoutContext* _viewLayoutContext;

}

@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) SKUINavigationBarContext * context;                              //@synthesize navigationBarContext=_navigationBarContext - In the implementation block
@property (nonatomic,readonly) SKUIViewElementLayoutContext * viewLayoutContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SKUINavigationBarContext *)context;
-(UIView *)view;
-(void)dealloc;
-(void)setContext:(SKUINavigationBarContext *)arg1 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1 ;
-(void)willAppearInNavigationBar;
-(void)reloadSectionViews;
-(id)barButtonItemForElementIdentifier:(id)arg1 ;
-(SKUIViewElementLayoutContext *)viewLayoutContext;
@end

