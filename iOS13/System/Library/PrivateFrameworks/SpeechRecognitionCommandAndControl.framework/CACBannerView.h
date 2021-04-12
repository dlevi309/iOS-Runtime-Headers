/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, NSLayoutConstraint, UILabel, UIImageView, UIView;

@interface CACBannerView : UIView {

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
@property (nonatomic,retain) NSString * symbolImage;                                  //@synthesize symbolImage=_symbolImage - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(UIImageView *)accessoryImageView;
-(UIView *)baseView;
-(void)setBaseView:(UIView *)arg1 ;
-(NSString *)symbolImage;
-(void)setSymbolImage:(NSString *)arg1 ;
-(void)setAccessoryImageView:(UIImageView *)arg1 ;
-(void)setImageToTextConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageToTextConstraint;
@end

