/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, UIView, UIResponder, NSString;

@interface _UITextServiceSession : NSObject <UIPopoverPresentationControllerDelegate> {

	long long _type;
	UIViewController* _modalViewController;
	UIView* _contextView;
	UIResponder* _pinnedResponder;
	BOOL _dismissed;
	/*^block*/id _dismissedHandler;

}

@property (nonatomic,copy) id dismissedHandler;                     //@synthesize dismissedHandler=_dismissedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canShowTextServices;
+(id)showServiceForType:(long long)arg1 withContext:(id)arg2 ;
+(id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
+(id)showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
+(id)textServiceSessionForType:(long long)arg1 ;
+(BOOL)shouldPresentServiceInSameWindowAsView:(id)arg1 ;
-(id)init;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(BOOL)isDisplaying;
-(void)dismissTextServiceAnimated:(BOOL)arg1 ;
-(void)setDismissedHandler:(id)arg1 ;
-(void)_endSession;
-(void)sessionDidDismiss;
-(id)dismissedHandler;
@end

