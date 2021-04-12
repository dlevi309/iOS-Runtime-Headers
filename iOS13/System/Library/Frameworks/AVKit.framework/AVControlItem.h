/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class AVButton, NSString, UIImage, UIColor, UIView;

@interface AVControlItem : NSObject {

	AVButton* _button;
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
-(long long)type;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(id)action;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIView *)view;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setAccessibilityAttributedLabel:(id)arg1 ;
-(void)setAccessibilityHint:(id)arg1 ;
-(void)setAccessibilityAttributedHint:(id)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)_updateTintColor;
-(id)initWithTitle:(id)arg1 type:(long long)arg2 ;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(void)_updateButton;
@end

