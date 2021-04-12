/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFSettingsAlertControl.h>
#import <libobjc.A.dylib/_SFSettingsAlertOptionsGroupItemConfiguration.h>

@class UIView, NSAttributedString, NSString, NSArray, UILabel, UILayoutGuide, UIImage, UIImageView;

@interface _SFSettingsAlertButton : _SFSettingsAlertControl <_SFSettingsAlertOptionsGroupItemConfiguration> {

	NSString* _text;
	NSAttributedString* _attributedText;
	NSArray* _contentConstraints;
	NSArray* _componentsArrangement;
	UILabel* _detailTextLabel;
	UILayoutGuide* _textGuide;
	NSString* _detailText;
	NSString* _textStyle;
	UIImage* _image;
	UIImageView* _imageView;
	UIView* _accessoryView;
	UILabel* _textLabel;

}

@property (nonatomic,readonly) UILabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * detailText;                            //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy) NSString * textStyle;                             //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                         //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) UIView * trailingView; 
@property (nonatomic,copy) NSArray * componentsArrangement; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)attributedText;
-(void)_updateTintColor;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_hover:(id)arg1 ;
-(UIImageView *)imageView;
-(UIView *)accessoryView;
-(void)setEnabled:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(void)setTextStyle:(NSString *)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIImage *)image;
-(void)setDetailText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(NSString *)textStyle;
-(UIView *)trailingView;
-(NSString *)text;
-(void)_didChangeContents;
-(NSArray *)componentsArrangement;
-(void)setComponentsArrangement:(NSArray *)arg1 ;
-(id)_arrangedSubviews;
-(NSString *)detailText;
-(UILabel *)textLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

