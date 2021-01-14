/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)account;
-(id)initWithPeerPaymentService:(id)arg1 ;
-(void)dealloc;
-(void)_updateMockBalance;
@end

