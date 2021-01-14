/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

