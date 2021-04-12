/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMailComposeHeaderView.h>

@class NSString, UIButton, UIView;

@interface MFComposeWebContentVariationView : MFMailComposeHeaderView {

	NSString* _selectedContentVariation;
	UIButton* _webContentVariableButton;
	UIView* _background;

}

@property (nonatomic,retain) UIButton * webContentVariableButton;                //@synthesize webContentVariableButton=_webContentVariableButton - In the implementation block
@property (nonatomic,retain) UIView * background;                                //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) NSString * selectedContentVariation;              //@synthesize selectedContentVariation=_selectedContentVariation - In the implementation block
-(UIView *)background;
-(void)setBackground:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_flashBackground;
-(id)_generateActionsForTitles:(id)arg1 currentSelection:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(UIButton *)webContentVariableButton;
-(void)setupMenuItemTitles:(id)arg1 currentSelection:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSelectedContentVariationLabel:(id)arg1 ;
-(NSString *)selectedContentVariation;
-(void)setWebContentVariableButton:(UIButton *)arg1 ;
-(void)refreshPreferredContentSize;
@end

