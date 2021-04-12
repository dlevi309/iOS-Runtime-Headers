/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, NSArray, NSString;

@interface MFSecureMIMEPersonHeaderView : UIView {

	UIView* _signedLabel;
	UIView* _secureLabel;
	UIView* _warningLabel;
	UILabel* _label;
	NSArray* _buttons;
	unsigned _editing : 1;

}

@property (nonatomic,copy) NSString * signedLabelText; 
@property (nonatomic,copy) NSString * secureLabelText; 
@property (nonatomic,copy) NSString * warningLabelText; 
@property (nonatomic,copy) NSString * explanationText; 
@property (nonatomic,copy) NSArray * buttons;                        //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL editing; 
+(id)_explanationLabelDefaultAttributes;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(NSString *)explanationText;
-(void)setExplanationText:(NSString *)arg1 ;
-(id)_warningLabel;
-(void)setSecureLabelText:(NSString *)arg1 ;
-(void)setWarningLabelText:(NSString *)arg1 ;
-(id)_signedLabel;
-(void)_setText:(id)arg1 forLabel:(id)arg2 ;
-(id)_secureLabel;
-(void)_insert:(BOOL)arg1 subview:(id)arg2 ;
-(double)heightThatFitsSubview:(id)arg1 padding:(double)arg2 ;
-(double)heightThatFitsMainLabel:(CGSize)arg1 ;
-(double)heightThatFitsButtons;
-(double)heightOfBottomMargin;
-(double)widthForSizingToFitSize:(CGSize)arg1 ;
-(BOOL)showsButtons;
-(void)setSignedLabelText:(NSString *)arg1 ;
-(NSString *)signedLabelText;
-(NSString *)secureLabelText;
-(NSString *)warningLabelText;
@end

