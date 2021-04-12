/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegSecureAccountWebViewController.h>

@protocol CNFRegViewAccountControllerDelegate;
@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController {

	id<CNFRegViewAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegViewAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNFRegViewAccountControllerDelegate>)delegate;
-(void)setDelegate:(id<CNFRegViewAccountControllerDelegate>)arg1 ;
-(id)logName;
-(void)dealloc;
-(id)bagKey;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
@end

