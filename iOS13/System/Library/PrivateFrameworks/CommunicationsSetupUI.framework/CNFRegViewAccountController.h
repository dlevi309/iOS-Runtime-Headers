/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegSecureAccountWebViewController.h>

@protocol CNFRegViewAccountControllerDelegate;
@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController {

	id<CNFRegViewAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegViewAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CNFRegViewAccountControllerDelegate>)delegate;
-(void)setDelegate:(id<CNFRegViewAccountControllerDelegate>)arg1 ;
-(id)bagKey;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
@end

