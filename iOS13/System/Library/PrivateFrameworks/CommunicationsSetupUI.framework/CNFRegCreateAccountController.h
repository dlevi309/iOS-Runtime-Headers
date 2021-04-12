/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@protocol CNFRegCreateAccountControllerDelegate;
@interface CNFRegCreateAccountController : CNFRegAccountWebViewController {

	id<CNFRegCreateAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegCreateAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CNFRegCreateAccountControllerDelegate>)delegate;
-(void)setDelegate:(id<CNFRegCreateAccountControllerDelegate>)arg1 ;
-(id)bagKey;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
@end

