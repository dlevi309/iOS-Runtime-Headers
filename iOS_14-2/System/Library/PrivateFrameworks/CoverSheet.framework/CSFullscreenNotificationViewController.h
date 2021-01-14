/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)postNotificationRequest:(id)arg1 ;
-(long long)presentationPriority;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1 ;
-(id<CSNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id<CSNotificationDispatcher>)arg1 ;
-(void)updateNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1 ;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(long long)presentationType;
-(void)loadView;
-(void)volumeChanged:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(void)handlePrimaryActionForView:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(void)lockButtonPressed:(id)arg1 ;
-(void)_handleAction:(id)arg1 withName:(id)arg2 ;
-(void)_dismissFromSignificantUserInteraction;
-(void)_handleSilenceAction;
-(void)_handlePrimaryAction;
-(void)_handleDismissAction;
-(void)_handleSecondaryAction;
@end

