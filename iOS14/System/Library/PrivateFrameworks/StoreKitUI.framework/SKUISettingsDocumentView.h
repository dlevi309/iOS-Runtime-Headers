/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@protocol SKUISettingsDocumentViewDelegate;
@interface SKUISettingsDocumentView : UIView {

	id<SKUISettingsDocumentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISettingsDocumentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)tintColorDidChange;
-(id<SKUISettingsDocumentViewDelegate>)delegate;
-(void)setDelegate:(id<SKUISettingsDocumentViewDelegate>)arg1 ;
@end

