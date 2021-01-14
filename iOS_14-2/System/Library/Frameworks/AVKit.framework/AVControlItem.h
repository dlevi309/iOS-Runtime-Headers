/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class AVButton, UIFont, NSString, UIImage, UIColor, UIView;

@interface AVControlItem : NSObject {

	AVButton* _button;
	UIFont* _titleFont;
	BOOL _enabled;
	long long _type;
	NSString* _title;
	UIImage* _image;
	/*^block*/id _action;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,copy) id action;                                    //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
-(void)setTitleFont:(id)arg1 ;
-(void)_updateTintColor;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)initWithTitle:(id)arg1 type:(long long)arg2 ;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)action;
-(id)titleFont;
-(void)setAccessibilityAttributedLabel:(id)arg1 ;
-(void)setAction:(id)arg1 ;
-(UIImage *)image;
-(void)setAccessibilityAttributedHint:(id)arg1 ;
-(UIView *)view;
-(long long)type;
-(void)_updateButton;
-(void)setAccessibilityHint:(id)arg1 ;
-(BOOL)isEnabled;
-(UIColor *)tintColor;
-(NSString *)title;
@end

