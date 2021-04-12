/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMWebMessageControllerDelegate.h>
#import <libobjc.A.dylib/IAMViewControllerMetricsDelegate.h>

@protocol IAMWebMessagePresentationCoordinatorDelegate;
@class NSURL, IAMWebMessageController, ICInAppMessageEntry, NSString;

@interface IAMWebMessagePresentationCoordinator : NSObject <IAMWebMessageControllerDelegate, IAMViewControllerMetricsDelegate> {

	NSURL* _webArchiveURL;
	BOOL _isPresenting;
	id<IAMWebMessagePresentationCoordinatorDelegate> _delegate;
	IAMWebMessageController* _webMessageController;
	ICInAppMessageEntry* _webMessageEntry;

}

@property (nonatomic,retain) IAMWebMessageController * webMessageController;                                //@synthesize webMessageController=_webMessageController - In the implementation block
@property (nonatomic,retain) ICInAppMessageEntry * webMessageEntry;                                         //@synthesize webMessageEntry=_webMessageEntry - In the implementation block
@property (assign,nonatomic,__weak) id<IAMWebMessagePresentationCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isPresenting;                                                             //@synthesize isPresenting=_isPresenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)load;
-(id<IAMWebMessagePresentationCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<IAMWebMessagePresentationCoordinatorDelegate>)arg1 ;
-(id)presentingViewController;
-(BOOL)present;
-(BOOL)isPresenting;
-(void)_handleOpenURL:(id)arg1 ;
-(void)setIsPresenting:(BOOL)arg1 ;
-(void)setWebMessageController:(IAMWebMessageController *)arg1 ;
-(IAMWebMessageController *)webMessageController;
-(ICInAppMessageEntry *)webMessageEntry;
-(void)_handleWebMessageClose;
-(void)webMessageControllerWebViewDidRequestClose:(id)arg1 ;
-(void)webMessageControllerWebViewDidRequestOpenURL:(id)arg1 url:(id)arg2 options:(id)arg3 ;
-(void)webMessageControllerWebViewDidReportEvent:(id)arg1 event:(id)arg2 ;
-(void)webMessageControllerWebViewDidRequestAction:(id)arg1 actionConfiguration:(id)arg2 options:(id)arg3 ;
-(void)viewController:(id)arg1 didReportDismissalAction:(long long)arg2 ;
-(id)initWithWebMessageEntry:(id)arg1 webArchiveURL:(id)arg2 ;
-(void)setWebMessageEntry:(ICInAppMessageEntry *)arg1 ;
@end

