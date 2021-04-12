/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNContactQuickActionPresentation.h>

@protocol CNStarkActionViewDelegate;
@class NSString, UIColor, UIImage, UIButton, UILabel;

@interface CNStarkActionView : UIView <CNContactQuickActionPresentation> {

	BOOL _enabled;
	BOOL _selected;
	BOOL _disabledButtonFocused;
	NSString* _actionType;
	NSString* _title;
	id<CNStarkActionViewDelegate> _delegate;
	double _actionPlatterSize;
	double _actionLabelOffset;
	double _actionBorderWidth;
	UIColor* _disabledStrokeColor;
	UIColor* _disabledFillColor;
	UIColor* _disabledGlyphColor;
	UIColor* _enabledStrokeColor;
	UIColor* _enabledFillColor;
	UIColor* _enabledGlyphColor;
	UIColor* _selectedStrokeColor;
	UIColor* _selectedFillColor;
	UIColor* _selectedGlyphColor;
	UIImage* _image;
	UIButton* _button;
	UILabel* _label;

}

@property (assign,nonatomic) double actionPlatterSize;                                     //@synthesize actionPlatterSize=_actionPlatterSize - In the implementation block
@property (assign,nonatomic) double actionLabelOffset;                                     //@synthesize actionLabelOffset=_actionLabelOffset - In the implementation block
@property (assign,nonatomic) double actionBorderWidth;                                     //@synthesize actionBorderWidth=_actionBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * disabledStrokeColor;                                //@synthesize disabledStrokeColor=_disabledStrokeColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledFillColor;                                  //@synthesize disabledFillColor=_disabledFillColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledGlyphColor;                                 //@synthesize disabledGlyphColor=_disabledGlyphColor - In the implementation block
@property (nonatomic,retain) UIColor * enabledStrokeColor;                                 //@synthesize enabledStrokeColor=_enabledStrokeColor - In the implementation block
@property (nonatomic,retain) UIColor * enabledFillColor;                                   //@synthesize enabledFillColor=_enabledFillColor - In the implementation block
@property (nonatomic,retain) UIColor * enabledGlyphColor;                                  //@synthesize enabledGlyphColor=_enabledGlyphColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedStrokeColor;                                //@synthesize selectedStrokeColor=_selectedStrokeColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedFillColor;                                  //@synthesize selectedFillColor=_selectedFillColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedGlyphColor;                                 //@synthesize selectedGlyphColor=_selectedGlyphColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                          //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                            //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL disabledButtonFocused;                                   //@synthesize disabledButtonFocused=_disabledButtonFocused - In the implementation block
@property (nonatomic,retain) NSString * actionType;                                        //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                 //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) id<CNStarkActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)quickActionButtonWithDelegate:(id)arg1 ;
+(id)propertyTransportButtonWithDelegate:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)enabled;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(UIButton *)button;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)setImage:(UIImage *)arg1 ;
-(void)choose;
-(id<CNStarkActionViewDelegate>)delegate;
-(void)select;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)image;
-(BOOL)selected;
-(void)deselect;
-(void)actionViewTapped:(id)arg1 ;
-(UIColor *)selectedGlyphColor;
-(id)initWithDelegate:(id)arg1 ;
-(void)setupLabel;
-(void)setSelectedGlyphColor:(UIColor *)arg1 ;
-(void)setupButton;
-(void)setupClickGestureRecognizer;
-(void)actionViewTouchDown:(id)arg1 ;
-(void)stateUpdated;
-(void)actionViewTouchUp:(id)arg1 ;
-(void)clickGestureDidUpdate:(id)arg1 ;
-(void)notifyDelegateAboutUserChoice;
-(void)updateForFocusedState:(BOOL)arg1 ;
-(double)actionPlatterSize;
-(void)setActionPlatterSize:(double)arg1 ;
-(double)actionLabelOffset;
-(void)setActionLabelOffset:(double)arg1 ;
-(double)actionBorderWidth;
-(void)setActionBorderWidth:(double)arg1 ;
-(UIColor *)disabledStrokeColor;
-(void)setDisabledStrokeColor:(UIColor *)arg1 ;
-(UIColor *)disabledFillColor;
-(void)setDisabledFillColor:(UIColor *)arg1 ;
-(UIColor *)disabledGlyphColor;
-(void)setDisabledGlyphColor:(UIColor *)arg1 ;
-(UIColor *)enabledStrokeColor;
-(void)setEnabledStrokeColor:(UIColor *)arg1 ;
-(UIColor *)enabledFillColor;
-(void)setEnabledFillColor:(UIColor *)arg1 ;
-(UIColor *)enabledGlyphColor;
-(void)setEnabledGlyphColor:(UIColor *)arg1 ;
-(UIColor *)selectedStrokeColor;
-(void)setSelectedStrokeColor:(UIColor *)arg1 ;
-(UIColor *)selectedFillColor;
-(void)setSelectedFillColor:(UIColor *)arg1 ;
-(BOOL)disabledButtonFocused;
-(void)setDisabledButtonFocused:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setupConstraints;
-(UILabel *)label;
-(NSString *)title;
@end

