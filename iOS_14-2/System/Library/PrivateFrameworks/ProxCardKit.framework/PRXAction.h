/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/


@class NSString, UIButton;

@interface PRXAction : NSObject {

	/*^block*/id _handler;
	BOOL _enabled;
	BOOL _usesLegacyStyling;
	NSString* _title;
	long long _style;
	UIButton* _button;

}

@property (assign,nonatomic) BOOL usesLegacyStyling;                     //@synthesize usesLegacyStyling=_usesLegacyStyling - In the implementation block
@property (assign,nonatomic,__weak) UIButton * button;                   //@synthesize button=_button - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                          //@synthesize style=_style - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)defaultDismissalActionForViewController:(id)arg1 ;
+(id)dismissalConfirmationActionForViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 confirmButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 ;
-(UIButton *)button;
-(void)_callHandler;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(BOOL)isEnabled;
-(long long)style;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)usesLegacyStyling;
-(void)setUsesLegacyStyling:(BOOL)arg1 ;
@end

