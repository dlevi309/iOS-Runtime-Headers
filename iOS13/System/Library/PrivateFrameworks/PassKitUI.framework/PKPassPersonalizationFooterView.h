/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PKPassPersonalizationFooterViewDelegate;
@class UITextView, NSString;

@interface PKPassPersonalizationFooterView : UIView <UITextViewDelegate> {

	UITextView* _privacyTextView;
	id<PKPassPersonalizationFooterViewDelegate> _delegate;

}

@property (assign,nonatomic) id<PKPassPersonalizationFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKPassPersonalizationFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassPersonalizationFooterViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)initWithOrganizationName:(id)arg1 delegate:(id)arg2 ;
@end

