/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BiometricKitDelegateXpcProtocol.h>

@protocol BKOperationDelegate, OS_dispatch_queue;
@class BiometricKitXPCClient, BKDevice, NSObject, NSString;

@interface BKOperation : NSObject <BiometricKitDelegateXpcProtocol> {

	BiometricKitXPCClient* _xpcClient;
	BOOL _startPending;
	BOOL _cancelPending;
	BKDevice* _device;
	id<BKOperationDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	long long _state;

}

@property (nonatomic,readonly) BKDevice * device;                                  //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<BKOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long state;                                    //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(BOOL)isDelegate;
-(id<BKOperationDelegate>)delegate;
-(void)changeState:(long long)arg1 ;
-(id)dispatchQueue;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(BKDevice *)device;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)setDelegate:(id<BKOperationDelegate>)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(void)startWithReply:(/*^block*/id)arg1 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(long long)state;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2 ;
-(void)cancel;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)startBioOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)startOperation:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)operationEndsWithReason:(long long)arg1 ;
-(id)optionsDictionaryWithError:(id*)arg1 ;
-(id)userPresentWithError:(id*)arg1 ;
@end

