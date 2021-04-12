/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)helpText;
-(Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1 ;
-(id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3 ;
-(void)selectedHandleAtIndex:(unsigned long long)arg1 ;
-(id)suggestedHandles;
@end

