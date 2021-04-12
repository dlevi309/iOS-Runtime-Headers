/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKit/UIInputResponderControllerVisibilityObserver.h>

@protocol PKTextInputWindowFirstResponderControllerDelegate;
@class PKTextInputWindowFirstResponder, NSNotificationCenter, NSNotification, NSString;

@interface PKTextInputWindowFirstResponderController : NSObject <UIInputResponderControllerVisibilityObserver> {

	BOOL _paletteFloatingMode;
	id<PKTextInputWindowFirstResponderControllerDelegate> _delegate;
	PKTextInputWindowFirstResponder* _firstResponder;
	NSNotificationCenter* __notificationCenter;
	NSNotification* __delayedNotification;

}

@property (nonatomic,retain) NSNotificationCenter * _notificationCenter;                                         //@synthesize _notificationCenter=__notificationCenter - In the implementation block
@property (nonatomic,retain) PKTextInputWindowFirstResponder * firstResponder;                                   //@synthesize firstResponder=_firstResponder - In the implementation block
@property (nonatomic,retain) NSNotification * _delayedNotification;                                              //@synthesize _delayedNotification=__delayedNotification - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputWindowFirstResponderControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL paletteFloatingMode;                                                           //@synthesize paletteFloatingMode=_paletteFloatingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inputResponderController:(id)arg1 inputViewSetVisibilityDidChange:(BOOL)arg2 includedReset:(BOOL)arg3 ;
-(id)init;
-(id<PKTextInputWindowFirstResponderControllerDelegate>)delegate;
-(void)setDelegate:(id<PKTextInputWindowFirstResponderControllerDelegate>)arg1 ;
-(PKTextInputWindowFirstResponder *)firstResponder;
-(NSNotificationCenter *)_notificationCenter;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)dealloc;
-(void)textInputSourceDidChange:(id)arg1 ;
-(void)updateFirstResponderFromWindowScene:(id)arg1 ;
-(void)setFirstResponder:(PKTextInputWindowFirstResponder *)arg1 ;
-(void)setPaletteFloatingMode:(BOOL)arg1 ;
-(void)_textInputResponderDidChangeNotificationHandler:(id)arg1 ;
-(void)_forceControllerToReload:(id)arg1 ;
-(BOOL)_isResponderEditableTextInput:(id)arg1 ;
-(BOOL)paletteFloatingMode;
-(void)_notifyFirstResponder:(id)arg1 isVisible:(BOOL)arg2 ;
-(NSNotification *)_delayedNotification;
-(void)set_delayedNotification:(NSNotification *)arg1 ;
-(void)set_notificationCenter:(NSNotificationCenter *)arg1 ;
@end

