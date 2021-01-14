/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)showsButtons;
-(NSArray *)buttons;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_signedLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSecureLabelText:(NSString *)arg1 ;
-(void)setWarningLabelText:(NSString *)arg1 ;
-(void)setExplanationText:(NSString *)arg1 ;
-(id)_secureLabel;
-(void)_setText:(id)arg1 forLabel:(id)arg2 ;
-(id)_warningLabel;
-(void)_insert:(BOOL)arg1 subview:(id)arg2 ;
-(double)heightThatFitsSubview:(id)arg1 padding:(double)arg2 ;
-(double)heightThatFitsMainLabel:(CGSize)arg1 ;
-(NSString *)signedLabelText;
-(double)heightThatFitsButtons;
-(double)heightOfBottomMargin;
-(double)widthForSizingToFitSize:(CGSize)arg1 ;
-(void)setSignedLabelText:(NSString *)arg1 ;
-(NSString *)secureLabelText;
-(NSString *)warningLabelText;
-(NSString *)explanationText;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(void)setButtons:(NSArray *)arg1 ;
@end

