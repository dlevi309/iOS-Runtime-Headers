/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKFetchOperationDelegate;
@class NSUUID;

@interface HKFetchOperation : NSObject {

	NSUUID* _UUID;
	long long _clientPriority;
	long long _operationPriority;
	id<HKFetchOperationDelegate> _delegate;

}

@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<HKFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                                                                 //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long clientPriority;                                                                        //@synthesize clientPriority=_clientPriority - In the implementation block
@property (assign,nonatomic) long long operationPriority;                                                                     //@synthesize operationPriority=_operationPriority - In the implementation block
-(id)init;
-(id)_delegate;
-(NSUUID *)UUID;
-(void)_setDelegate:(id)arg1 ;
-(long long)clientPriority;
-(long long)operationPriority;
-(void)setClientPriority:(long long)arg1 ;
-(void)setOperationPriority:(long long)arg1 ;
-(void)stopOperation;
-(void)startOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)_alertDelegateDidUpdatePriority;
@end

