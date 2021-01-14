/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIAccessoryViewController.h>
#import <libobjc.A.dylib/CNContactInlineActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewControllerDelegate.h>
#import <libobjc.A.dylib/CNActionViewDelegate.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class CNContactInlineActionsViewController, UIView, NSString;

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNActionViewDelegate, NUIContainerViewDelegate> {

	CNContactInlineActionsViewController* _inlineActionsViewController;
	UIView* _messageButton;
	UIView* _directionsButton;

}

@property (nonatomic,retain) CNContactInlineActionsViewController * inlineActionsViewController;              //@synthesize inlineActionsViewController=_inlineActionsViewController - In the implementation block
@property (nonatomic,retain) UIView * messageButton;                                                          //@synthesize messageButton=_messageButton - In the implementation block
@property (nonatomic,retain) UIView * directionsButton;                                                       //@synthesize directionsButton=_directionsButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 ;
+(id)directionsButtonImage;
+(void)clearInlineActionsCache;
+(id)inlineActionsCache;
-(void)updateWithRowModel:(id)arg1 ;
-(id)hostingViewControllerForController:(id)arg1 ;
-(void)contactInlineActionsViewController:(id)arg1 willPerformActionOfType:(id)arg2 ;
-(void)updateWithContacts:(id)arg1 ;
-(CNContactInlineActionsViewController *)inlineActionsViewController;
-(void)setInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 ;
-(void)didPressActionView:(id)arg1 longPress:(BOOL)arg2 ;
-(id)setupView;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(unsigned long long)type;
-(UIView *)messageButton;
-(void)setMessageButton:(UIView *)arg1 ;
-(UIView *)directionsButton;
-(void)setDirectionsButton:(UIView *)arg1 ;
@end

