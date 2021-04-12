/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, UIView, UIResponder, UIInputResponderController, NSString;

@interface _UITextServiceSession : NSObject <UIPopoverPresentationControllerDelegate> {

	long long _type;
	UIViewController* _modalViewController;
	UIView* _contextView;
	UIResponder* _pinnedResponder;
	UIInputResponderController* _inputResponderController;
	BOOL _dismissed;
	/*^block*/id _dismissedHandler;

}

@property (nonatomic,copy) id dismissedHandler;                     //@synthesize dismissedHandler=_dismissedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canShowTextServiceForType:(long long)arg1 ;
+(long long)availableTextServices;
+(BOOL)_canShowTextServices;
+(BOOL)shouldPresentServiceInSameWindowAsView:(id)arg1 ;
+(id)showServiceForType:(long long)arg1 withContext:(id)arg2 ;
+(id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
+(id)showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
+(id)textServiceSessionForType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)init;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)_endSession;
-(long long)type;
-(BOOL)isDisplaying;
-(void)sessionDidDismiss;
-(id)dismissedHandler;
-(void)setDismissedHandler:(id)arg1 ;
-(void)dismissTextServiceAnimated:(BOOL)arg1 ;
@end

