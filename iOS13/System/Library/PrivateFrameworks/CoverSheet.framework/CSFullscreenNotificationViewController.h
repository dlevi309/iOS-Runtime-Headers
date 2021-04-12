/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSModalViewControllerBase.h>
#import <libobjc.A.dylib/CSModalViewDelegate.h>
#import <libobjc.A.dylib/CSNotificationDestination.h>

@protocol CSNotificationDispatcher;
@class NCNotificationRequest, NCNotificationAction, NSString;

@interface CSFullscreenNotificationViewController : CSModalViewControllerBase <CSModalViewDelegate, CSNotificationDestination> {

	NCNotificationRequest* _request;
	NCNotificationAction* _primaryAction;
	NCNotificationAction* _secondaryAction;
	NCNotificationAction* _silenceAction;
	NCNotificationAction* _dismissAction;
	id<CSNotificationDispatcher> _dispatcher;

}

@property (nonatomic,readonly) NCNotificationRequest * notificationRequest;               //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)volumeChanged:(id)arg1 ;
-(long long)presentationType;
-(id<CSNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id<CSNotificationDispatcher>)arg1 ;
-(long long)presentationPriority;
-(void)aggregateBehavior:(id)arg1 ;
-(void)handlePrimaryActionForView:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)postNotificationRequest:(id)arg1 ;
-(void)updateNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1 ;
-(NCNotificationRequest *)notificationRequest;
-(void)lockButtonPressed:(id)arg1 ;
-(void)_handleAction:(id)arg1 withName:(id)arg2 ;
-(void)_dismissFromSignificantUserInteraction;
-(void)_handleSilenceAction;
-(void)_handlePrimaryAction;
-(void)_handleDismissAction;
-(void)_handleSecondaryAction;
-(id)initWithNotificationRequest:(id)arg1 ;
@end

