/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol AUUIAlertDelegate;
@class NSString, UIAlertAction;

@interface AUUIAlert : NSObject <UIAlertViewDelegate> {

	BOOL stackButtons;
	BOOL prepared;
	id<AUUIAlertDelegate> delegate;
	id context;
	long long tag;
	id alert;
	NSString* title;
	NSString* message;
	NSString* okButtonTitle;
	long long okButtonIndex;
	NSString* cancelButtonTitle;
	long long cancelButtonIndex;
	NSString* alternateButtonTitle;
	long long alternateButtonIndex;
	NSString* destructiveButtonTitle;
	long long destructiveButtonIndex;
	id viewController;
	UIAlertAction* okAction;
	UIAlertAction* cancelAction;
	UIAlertAction* alternateAction;
	UIAlertAction* destructiveAction;

}

@property (assign,nonatomic) id<AUUIAlertDelegate> delegate; 
@property (nonatomic,retain) id viewController; 
@property (nonatomic,retain) id context; 
@property (assign,nonatomic) long long tag; 
@property (assign,nonatomic) BOOL stackButtons; 
@property (nonatomic,retain) id alert; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,retain) NSString * okButtonTitle; 
@property (nonatomic,retain) NSString * cancelButtonTitle; 
@property (nonatomic,retain) NSString * alternateButtonTitle; 
@property (nonatomic,retain) NSString * destructiveButtonTitle; 
@property (nonatomic,retain) UIAlertAction * okAction; 
@property (nonatomic,retain) UIAlertAction * cancelAction; 
@property (nonatomic,retain) UIAlertAction * alternateAction; 
@property (nonatomic,retain) UIAlertAction * destructiveAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessage:(NSString *)arg1 ;
-(void)setViewController:(id)arg1 ;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)message;
-(UIAlertAction *)alternateAction;
-(void)setAlternateAction:(UIAlertAction *)arg1 ;
-(void)setTag:(long long)arg1 ;
-(NSString *)alternateButtonTitle;
-(id<AUUIAlertDelegate>)delegate;
-(id)initWithViewController:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)show;
-(long long)tag;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)context;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(void)setDelegate:(id<AUUIAlertDelegate>)arg1 ;
-(id)viewController;
-(UIAlertAction *)cancelAction;
-(void)setAlert:(id)arg1 ;
-(id)alert;
-(void)setCancelAction:(UIAlertAction *)arg1 ;
-(NSString *)cancelButtonTitle;
-(NSString *)title;
-(void)dealloc;
-(void)setContext:(id)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)setDestructiveAction:(UIAlertAction *)arg1 ;
-(void)dismissWithNoActionAnimated:(BOOL)arg1 ;
-(void)setOkButtonTitle:(NSString *)arg1 ;
-(void)setStackButtons:(BOOL)arg1 ;
-(void)dismissWithCancelActionAnimated:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 actionSheet:(BOOL)arg2 ;
-(void)setOkAction:(UIAlertAction *)arg1 ;
-(UIAlertAction *)destructiveAction;
-(UIAlertAction *)okAction;
-(void)prepareToShow;
-(void)dismissWithOKActionAnimated:(BOOL)arg1 ;
-(void)enableOKAction:(BOOL)arg1 ;
-(void)enableCancelAction:(BOOL)arg1 ;
-(void)enableDestructiveAction:(BOOL)arg1 ;
-(void)enableAlternateAction:(BOOL)arg1 ;
-(NSString *)okButtonTitle;
-(NSString *)destructiveButtonTitle;
-(void)setDestructiveButtonTitle:(NSString *)arg1 ;
-(BOOL)stackButtons;
@end

