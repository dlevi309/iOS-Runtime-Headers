/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/


@class NSString, UIImage, UIColor, UISwitch;

@interface PRXFeature : NSObject {

	BOOL _on;
	NSString* _title;
	NSString* _detailText;
	UIImage* _icon;
	UIColor* _tintColor;
	/*^block*/id _handler;
	UISwitch* _switchControl;

}

@property (nonatomic,readonly) id handler;                                 //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) UISwitch * switchControl;              //@synthesize switchControl=_switchControl - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailText;                 //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                          //@synthesize on=_on - In the implementation block
+(id)optionalFeatureWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 tintColor:(id)arg4 valueChangedBlock:(/*^block*/id)arg5 ;
+(id)featureWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 tintColor:(id)arg4 ;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 ;
-(UIImage *)icon;
-(void)setSwitchControl:(UISwitch *)arg1 ;
-(UISwitch *)switchControl;
-(NSString *)detailText;
-(id)handler;
-(UIColor *)tintColor;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 tintColor:(id)arg4 valueChangedBlock:(/*^block*/id)arg5 ;
@end

