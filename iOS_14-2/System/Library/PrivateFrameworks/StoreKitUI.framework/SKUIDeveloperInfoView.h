/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SKUIClientContext *)clientContext;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2 ;
-(SKUIDeveloperInfo *)developerInfo;
@end

