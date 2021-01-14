/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIAlertActionViewRepresentation_Internal, UIAlertActionMutablePropertyObservering;
@class NSString, UIColor, UIImage, UIViewController, UIInterfaceAction, UIAlertController;

@interface UIAlertAction : NSObject <NSCopying> {

	NSString* _title;
	long long _titleTextAlignment;
	BOOL _enabled;
	BOOL _checked;
	BOOL _isPreferred;
	UIColor* _imageTintColor;
	UIColor* _titleTextColor;
	long long _style;
	/*^block*/id _handler;
	/*^block*/id _simpleHandler;
	UIImage* _image;
	/*^block*/id _shouldDismissHandler;
	NSString* __descriptiveText;
	UIViewController* _contentViewController;
	NSString* _keyCommandInput;
	long long _keyCommandModifierFlags;
	id<UIAlertActionViewRepresentation_Internal> __representer;
	UIInterfaceAction*<UIAlertActionMutablePropertyObservering> __interfaceActionRepresentation;
	UIAlertController* __alertController;

}

@property (nonatomic,copy) id handler;                                                                                                                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) long long style;                                                                                                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id simpleHandler;                                                                                                                   //@synthesize simpleHandler=_simpleHandler - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                                                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) id shouldDismissHandler;                                                                                                            //@synthesize shouldDismissHandler=_shouldDismissHandler - In the implementation block
@property (setter=_setDescriptiveText:,nonatomic,copy) NSString * _descriptiveText;                                                                            //@synthesize _descriptiveText=__descriptiveText - In the implementation block
@property (setter=_setContentViewController:,getter=_contentViewController,nonatomic,retain) UIViewController * contentViewController;                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (setter=_setKeyCommandInput:,getter=_keyCommandInput,nonatomic,copy) NSString * keyCommandInput;                                                     //@synthesize keyCommandInput=_keyCommandInput - In the implementation block
@property (assign,setter=_setKeyCommandModifierFlags:,getter=_keyCommandModifierFlags,nonatomic) long long keyCommandModifierFlags;                            //@synthesize keyCommandModifierFlags=_keyCommandModifierFlags - In the implementation block
@property (setter=_setRepresenter:) id<UIAlertActionViewRepresentation_Internal> _representer;                                                                 //@synthesize _representer=__representer - In the implementation block
@property (setter=_setInterfaceActionRepresentation:) UIInterfaceAction*<UIAlertActionMutablePropertyObservering> _interfaceActionRepresentation;              //@synthesize _interfaceActionRepresentation=__interfaceActionRepresentation - In the implementation block
@property (setter=_setIsPreferred:) BOOL _isPreferred; 
@property (assign,setter=_setAlertController:,nonatomic) UIAlertController * _alertController;                                                                 //@synthesize _alertController=__alertController - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                                   //@synthesize title=_title - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(id)_actionWithTitle:(id)arg1 descriptiveText:(id)arg2 image:(id)arg3 style:(long long)arg4 handler:(/*^block*/id)arg5 shouldDismissHandler:(/*^block*/id)arg6 ;
+(id)_actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 shouldDismissHandler:(/*^block*/id)arg5 ;
+(id)_actionWithContentViewController:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)_actionWithContentViewController:(id)arg1 style:(long long)arg2 ;
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_isPreferred;
-(void)_setRepresenter:(id)arg1 ;
-(void)_setKeyCommandInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(UIAlertController *)_alertController;
-(void)setImage:(UIImage *)arg1 ;
-(void)_setContentViewController:(id)arg1 ;
-(void)_setTitleTextAlignment:(long long)arg1 ;
-(long long)_titleTextAlignment;
-(id)simpleHandler;
-(void)setHandler:(id)arg1 ;
-(void)_didAddContentViewController;
-(void)_setDescriptiveText:(id)arg1 ;
-(id)_contentViewController;
-(id)_titleTextColor;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_setImageTintColor:(id)arg1 ;
-(void)_setKeyCommandModifierFlags:(long long)arg1 ;
-(void)_setIsPreferred:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)_keyCommandInput;
-(id)_imageTintColor;
-(UIInterfaceAction*<UIAlertActionMutablePropertyObservering>)_interfaceActionRepresentation;
-(UIImage *)image;
-(void)_setTitleTextColor:(id)arg1 ;
-(id<UIAlertActionViewRepresentation_Internal>)_representer;
-(void)_setKeyCommandInput:(id)arg1 ;
-(void)_setInterfaceActionRepresentation:(id)arg1 ;
-(id)shouldDismissHandler;
-(void)setShouldDismissHandler:(id)arg1 ;
-(void)_setChecked:(BOOL)arg1 ;
-(id)description;
-(long long)_keyCommandModifierFlags;
-(BOOL)_isChecked;
-(void)setSimpleHandler:(id)arg1 ;
-(NSString *)_descriptiveText;
-(void)_willAddContentViewController;
-(void)_setAlertController:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setStyle:(long long)arg1 ;
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)title;
@end

