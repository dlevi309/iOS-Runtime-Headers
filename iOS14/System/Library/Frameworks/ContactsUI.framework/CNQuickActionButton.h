/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CNQuickActionButtonDelegate;
@class CNQuickAction, UIButton, UILabel, NSArray;

@interface CNQuickActionButton : UIView {

	BOOL _showTitle;
	BOOL _showBackgroundPlatter;
	CNQuickAction* _action;
	id<CNQuickActionButtonDelegate> _delegate;
	UIButton* _button;
	UILabel* _label;
	NSArray* _activatedConstraints;

}

@property (nonatomic,retain) UIButton * button;                                            //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UILabel * label;                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                               //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) CNQuickAction * action;                                       //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL showTitle;                                               //@synthesize showTitle=_showTitle - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;                                   //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
@property (assign,nonatomic,__weak) id<CNQuickActionButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CNQuickActionButtonDelegate>)delegate;
-(void)performAction;
-(void)setButton:(UIButton *)arg1 ;
-(CNQuickAction *)action;
-(BOOL)showTitle;
-(void)setAction:(CNQuickAction *)arg1 ;
-(void)setDelegate:(id<CNQuickActionButtonDelegate>)arg1 ;
-(void)onLongPress:(id)arg1 ;
-(void)updateConstraints;
-(BOOL)showBackgroundPlatter;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(void)setShowTitle:(BOOL)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

