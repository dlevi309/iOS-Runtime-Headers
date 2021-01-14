/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@protocol CNFRegCreateAccountControllerDelegate;
@interface CNFRegCreateAccountController : CNFRegAccountWebViewController {

	id<CNFRegCreateAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegCreateAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNFRegCreateAccountControllerDelegate>)delegate;
-(void)setDelegate:(id<CNFRegCreateAccountControllerDelegate>)arg1 ;
-(id)logName;
-(void)dealloc;
-(id)bagKey;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
@end

