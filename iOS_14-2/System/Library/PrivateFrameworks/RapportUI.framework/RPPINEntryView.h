/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInputTraits.h>

@class NSString, UITextInputPasswordRules, NSMutableString, NSArray, UILabel, UIView, UIColor;

@interface RPPINEntryView : UIView <UIKeyInput, UITextInputTraits> {

	NSMutableString* _text;
	BOOL _alphaNumeric;
	BOOL _disabled;
	NSArray* _labels;
	UILabel* _label1;
	UILabel* _label2;
	UILabel* _label3;
	UILabel* _label4;
	UILabel* _label5;
	UILabel* _label6;
	UILabel* _label7;
	UILabel* _label8;
	/*^block*/id _textChangedHandler;
	NSArray* _wells;
	UIView* _well1;
	UIView* _well2;
	UIView* _well3;
	UIView* _well4;
	UIView* _well5;
	UIView* _well6;
	UIView* _well7;
	UIView* _well8;
	UIColor* _wellFocusColor;

}

@property (assign,nonatomic) BOOL alphaNumeric;                                          //@synthesize alphaNumeric=_alphaNumeric - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                              //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) NSArray * labels;                                           //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UILabel * label1;                                           //@synthesize label1=_label1 - In the implementation block
@property (nonatomic,retain) UILabel * label2;                                           //@synthesize label2=_label2 - In the implementation block
@property (nonatomic,retain) UILabel * label3;                                           //@synthesize label3=_label3 - In the implementation block
@property (nonatomic,retain) UILabel * label4;                                           //@synthesize label4=_label4 - In the implementation block
@property (nonatomic,retain) UILabel * label5;                                           //@synthesize label5=_label5 - In the implementation block
@property (nonatomic,retain) UILabel * label6;                                           //@synthesize label6=_label6 - In the implementation block
@property (nonatomic,retain) UILabel * label7;                                           //@synthesize label7=_label7 - In the implementation block
@property (nonatomic,retain) UILabel * label8;                                           //@synthesize label8=_label8 - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) id textChangedHandler;                                        //@synthesize textChangedHandler=_textChangedHandler - In the implementation block
@property (nonatomic,retain) NSArray * wells;                                            //@synthesize wells=_wells - In the implementation block
@property (nonatomic,retain) UIView * well1;                                             //@synthesize well1=_well1 - In the implementation block
@property (nonatomic,retain) UIView * well2;                                             //@synthesize well2=_well2 - In the implementation block
@property (nonatomic,retain) UIView * well3;                                             //@synthesize well3=_well3 - In the implementation block
@property (nonatomic,retain) UIView * well4;                                             //@synthesize well4=_well4 - In the implementation block
@property (nonatomic,retain) UIView * well5;                                             //@synthesize well5=_well5 - In the implementation block
@property (nonatomic,retain) UIView * well6;                                             //@synthesize well6=_well6 - In the implementation block
@property (nonatomic,retain) UIView * well7;                                             //@synthesize well7=_well7 - In the implementation block
@property (nonatomic,retain) UIView * well8;                                             //@synthesize well8=_well8 - In the implementation block
@property (nonatomic,retain) UIColor * wellFocusColor;                                   //@synthesize wellFocusColor=_wellFocusColor - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasText;
-(long long)autocapitalizationType;
-(void)setDisabled:(BOOL)arg1 ;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)keyboardType;
-(long long)spellCheckingType;
-(void)setLabels:(NSArray *)arg1 ;
-(long long)autocorrectionType;
-(long long)keyboardAppearance;
-(NSArray *)labels;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)wells;
-(UIView *)well1;
-(UIView *)well2;
-(UIView *)well3;
-(UIView *)well4;
-(UIView *)well5;
-(UIView *)well6;
-(UIView *)well7;
-(UIView *)well8;
-(BOOL)canBecomeFirstResponder;
-(UILabel *)label2;
-(UILabel *)label3;
-(UILabel *)label1;
-(UILabel *)label4;
-(UILabel *)label5;
-(UILabel *)label6;
-(UILabel *)label7;
-(UILabel *)label8;
-(NSString *)text;
-(void)_updateFields;
-(void)awakeFromNib;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)disabled;
-(void)setLabel1:(UILabel *)arg1 ;
-(void)setLabel2:(UILabel *)arg1 ;
-(void)setLabel3:(UILabel *)arg1 ;
-(BOOL)alphaNumeric;
-(void)setAlphaNumeric:(BOOL)arg1 ;
-(void)setLabel4:(UILabel *)arg1 ;
-(void)setLabel5:(UILabel *)arg1 ;
-(void)setLabel6:(UILabel *)arg1 ;
-(void)setLabel7:(UILabel *)arg1 ;
-(void)setLabel8:(UILabel *)arg1 ;
-(id)textChangedHandler;
-(void)setTextChangedHandler:(id)arg1 ;
-(void)setWells:(NSArray *)arg1 ;
-(void)setWell1:(UIView *)arg1 ;
-(void)setWell2:(UIView *)arg1 ;
-(void)setWell3:(UIView *)arg1 ;
-(void)setWell4:(UIView *)arg1 ;
-(void)setWell5:(UIView *)arg1 ;
-(void)setWell6:(UIView *)arg1 ;
-(void)setWell7:(UIView *)arg1 ;
-(void)setWell8:(UIView *)arg1 ;
-(UIColor *)wellFocusColor;
-(void)setWellFocusColor:(UIColor *)arg1 ;
@end
