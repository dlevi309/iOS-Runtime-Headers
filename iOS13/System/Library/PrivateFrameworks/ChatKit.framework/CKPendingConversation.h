/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKConversation.h>

@class IMService;

@interface CKPendingConversation : CKConversation {

	BOOL _noAvailableServices;
	IMService* _previousSendingService;
	IMService* _composeSendingService;

}

@property (assign,nonatomic,__weak) IMService * composeSendingService;               //@synthesize composeSendingService=_composeSendingService - In the implementation block
@property (assign,nonatomic) BOOL noAvailableServices;                               //@synthesize noAvailableServices=_noAvailableServices - In the implementation block
@property (assign,nonatomic,__weak) IMService * previousSendingService;              //@synthesize previousSendingService=_previousSendingService - In the implementation block
-(id)uniqueIdentifier;
-(id)sendingService;
-(void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)refreshStatusForAddresses:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)deviceIndependentID;
-(BOOL)noAvailableServices;
-(void)setPreviousSendingService:(IMService *)arg1 ;
-(IMService *)composeSendingService;
-(IMService *)previousSendingService;
-(void)setComposeSendingService:(IMService *)arg1 ;
-(void)setNoAvailableServices:(BOOL)arg1 ;
@end

