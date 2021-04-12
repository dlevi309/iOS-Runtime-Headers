/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@protocol SKUISettingsDocumentViewDelegate;
@interface SKUISettingsDocumentView : UIView {

	id<SKUISettingsDocumentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISettingsDocumentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SKUISettingsDocumentViewDelegate>)delegate;
-(void)setDelegate:(id<SKUISettingsDocumentViewDelegate>)arg1 ;
-(void)tintColorDidChange;
@end

