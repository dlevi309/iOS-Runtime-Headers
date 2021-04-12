/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIClientContext, SKUIDeveloperInfo, UIView, SKUIProductInformationView, NSMutableArray;

@interface SKUIDeveloperInfoView : UIView {

	SKUIClientContext* _clientContext;
	SKUIDeveloperInfo* _developerInfo;
	UIView* _infoSeparatorView;
	SKUIProductInformationView* _infoView;
	NSMutableArray* _lineViews;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;              //@synthesize developerInfo=_developerInfo - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(SKUIClientContext *)clientContext;
-(id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2 ;
-(SKUIDeveloperInfo *)developerInfo;
@end

