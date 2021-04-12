/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewController.h>

@class SKUIDeveloperInfo, SKUIDeveloperInfoView, UIScrollView;

@interface SKUIDeveloperInfoViewController : SKUIViewController {

	SKUIDeveloperInfo* _developerInfo;
	SKUIDeveloperInfoView* _infoView;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;              //@synthesize developerInfo=_developerInfo - In the implementation block
-(void)loadView;
-(SKUIDeveloperInfo *)developerInfo;
-(id)initWithDeveloperInfo:(id)arg1 ;
@end

