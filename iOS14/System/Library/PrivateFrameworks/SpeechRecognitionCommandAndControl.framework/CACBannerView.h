/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString, NSString, NSLayoutConstraint, UILabel, UIImageView, UIView;

@interface CACBannerView : UIView {

	NSAttributedString* _attributedText;
	NSString* _symbolImage;
	NSLayoutConstraint* _imageToTextConstraint;
	UILabel* _textLabel;
	UIImageView* _accessoryImageView;
	UIView* _baseView;

}

@property (nonatomic,retain) NSLayoutConstraint * imageToTextConstraint;              //@synthesize imageToTextConstraint=_imageToTextConstraint - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                     //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * accessoryImageView;                        //@synthesize accessoryImageView=_accessoryImageView - In the implementation block
@property (nonatomic,retain) UIView * baseView;                                       //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSAttributedString * attributedText;                     //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) NSString * symbolImage;                                  //@synthesize symbolImage=_symbolImage - In the implementation block
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSymbolImage:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)symbolImage;
-(void)setTextLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(UIView *)baseView;
-(UILabel *)textLabel;
-(UIImageView *)accessoryImageView;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setBaseView:(UIView *)arg1 ;
-(void)setAccessoryImageView:(UIImageView *)arg1 ;
-(void)setImageToTextConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageToTextConstraint;
@end

