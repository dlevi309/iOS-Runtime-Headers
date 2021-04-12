/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPeerPaymentAccountManager.h>

@protocol OS_dispatch_queue;
@class PKPeerPaymentAccount, NSObject;

@interface NPKMockPeerPaymentAccountManager : NPKPeerPaymentAccountManager {

	PKPeerPaymentAccount* _mockAccount;
	NSObject*<OS_dispatch_queue> _accountQueue;
	unsigned long long _balanceOffset;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)account;
-(id)initWithPeerPaymentService:(id)arg1 ;
-(void)_updateMockBalance;
@end

