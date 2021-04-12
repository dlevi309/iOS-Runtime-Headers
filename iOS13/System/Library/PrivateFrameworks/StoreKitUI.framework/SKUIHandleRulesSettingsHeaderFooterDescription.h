/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUISettingsHeaderFooterDescription.h>

@class SKUIClientContext;

@interface SKUIHandleRulesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {

	SKUIClientContext* _clientContext;
	BOOL _showInvalid;

}

@property (assign,nonatomic) BOOL showInvalid;              //@synthesize showInvalid=_showInvalid - In the implementation block
-(id)text;
-(id)initWithClientContext:(id)arg1 ;
-(Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1 ;
-(BOOL)showInvalid;
-(void)setShowInvalid:(BOOL)arg1 ;
@end

