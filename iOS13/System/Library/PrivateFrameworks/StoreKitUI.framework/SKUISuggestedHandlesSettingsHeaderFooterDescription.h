/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUISettingsHeaderFooterDescription.h>

@protocol SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;
@class SKUIClientContext, NSArray;

@interface SKUISuggestedHandlesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {

	SKUIClientContext* _clientContext;
	NSArray* _suggestedHandles;
	id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate>)delegate;
-(void)setDelegate:(id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate>)arg1 ;
-(Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1 ;
-(id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3 ;
-(id)helpText;
-(void)selectedHandleAtIndex:(unsigned long long)arg1 ;
-(id)suggestedHandles;
@end

