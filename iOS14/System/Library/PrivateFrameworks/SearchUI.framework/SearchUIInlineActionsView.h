/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <AppSupportUI/NUIContainerStackView.h>

@class CNActionView, CNContactInlineActionsViewController;

@interface SearchUIInlineActionsView : NUIContainerStackView {

	CNActionView* _messageButton;
	CNContactInlineActionsViewController* _inlineActionsViewController;
	CNActionView* _directionsButton;

}

@property (retain) CNActionView * messageButton;                                                    //@synthesize messageButton=_messageButton - In the implementation block
@property (retain) CNContactInlineActionsViewController * inlineActionsViewController;              //@synthesize inlineActionsViewController=_inlineActionsViewController - In the implementation block
@property (retain) CNActionView * directionsButton;                                                 //@synthesize directionsButton=_directionsButton - In the implementation block
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(CNContactInlineActionsViewController *)inlineActionsViewController;
-(void)setInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 ;
-(void)didMoveToWindow;
-(CNActionView *)messageButton;
-(void)setMessageButton:(CNActionView *)arg1 ;
-(CNActionView *)directionsButton;
-(id)initWithMessageMbutton:(id)arg1 inlineActionsViewController:(id)arg2 directionsButton:(id)arg3 ;
-(void)setDirectionsButton:(CNActionView *)arg1 ;
@end

