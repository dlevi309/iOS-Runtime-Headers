/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setMessageButton:(CNActionView *)arg1 ;
-(CNActionView *)messageButton;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(CNContactInlineActionsViewController *)inlineActionsViewController;
-(CNActionView *)directionsButton;
-(id)initWithMessageMbutton:(id)arg1 inlineActionsViewController:(id)arg2 directionsButton:(id)arg3 ;
-(void)setInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 ;
-(void)setDirectionsButton:(CNActionView *)arg1 ;
@end

