/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFSettingsAlertItemView;
@class NSString, NSAttributedString, UIColor, UIImage, UIView, NSArray;

@interface _SFSettingsAlertItem : NSObject {

	BOOL _enabled;
	long long _type;
	NSString* _title;
	NSAttributedString* _attributedTitle;
	NSString* _textStyle;
	UIColor* _tintColor;
	UIImage* _icon;
	/*^block*/id _handler;
	NSString* _accessibilityIdentifier;
	UIView*<SFSettingsAlertItemView> _view;
	id _controller;
	/*^block*/id _viewConfigurationBlock;
	UIView* _customView;
	NSArray* _subItems;
	_SFSettingsAlertItem* _group;

}

@property (assign,nonatomic,__weak) UIView*<SFSettingsAlertItemView> view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id controller;                                             //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) id viewConfigurationBlock;                                   //@synthesize viewConfigurationBlock=_viewConfigurationBlock - In the implementation block
@property (nonatomic,copy) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitle;                        //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,copy) NSString * textStyle;                                        //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,copy) UIColor * tintColor;                                         //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) id handler;                                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) UIView * customView;                                       //@synthesize customView=_customView - In the implementation block
@property (nonatomic,copy) NSArray * subItems;                                          //@synthesize subItems=_subItems - In the implementation block
@property (nonatomic,__weak,readonly) _SFSettingsAlertItem * group;                     //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;                          //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
+(id)buttonWithAttributedTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)buttonWithTitle:(id)arg1 textStyle:(id)arg2 icon:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)stepperWithController:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)optionsGroupWithTitle:(id)arg1 controller:(id)arg2 ;
+(id)itemWithCustomView:(id)arg1 ;
-(id)handler;
-(long long)type;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(_SFSettingsAlertItem *)group;
-(UIView*<SFSettingsAlertItemView>)view;
-(void)setView:(UIView*<SFSettingsAlertItemView>)arg1 ;
-(void)setTextStyle:(NSString *)arg1 ;
-(NSString *)textStyle;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)accessibilityIdentifier;
-(void)setCustomView:(UIView *)arg1 ;
-(UIView *)customView;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setController:(id)arg1 ;
-(id)controller;
-(NSArray *)subItems;
-(void)updateOptionsGroupDetailLabel;
-(void)setViewConfigurationBlock:(id)arg1 ;
-(void)setSubItems:(NSArray *)arg1 ;
-(id)viewConfigurationBlock;
@end

