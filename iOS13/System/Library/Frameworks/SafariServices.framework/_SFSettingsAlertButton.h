/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFSettingsAlertControl.h>
#import <libobjc.A.dylib/_SFSettingsAlertOptionsGroupItemConfiguration.h>

@class UIView, NSAttributedString, NSString, NSArray, UIImage, UIImageView, UILabel;

@interface _SFSettingsAlertButton : _SFSettingsAlertControl <_SFSettingsAlertOptionsGroupItemConfiguration> {

	NSString* _text;
	NSAttributedString* _attributedText;
	NSArray* _contentConstraints;
	NSArray* _componentsArrangement;
	NSString* _textStyle;
	UIImage* _image;
	UIImageView* _imageView;
	UIView* _accessoryView;
	UILabel* _textLabel;

}

@property (nonatomic,readonly) UILabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * textStyle;                             //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                         //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) UIView * trailingView; 
@property (nonatomic,copy) NSArray * componentsArrangement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
-(void)setEnabled:(BOOL)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextStyle:(NSString *)arg1 ;
-(NSString *)textStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)updateConstraints;
-(void)_updateTintColor;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(UILabel *)textLabel;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)trailingView;
-(id)_arrangedSubviews;
-(void)_hover:(id)arg1 ;
-(void)setComponentsArrangement:(NSArray *)arg1 ;
-(NSArray *)componentsArrangement;
@end

