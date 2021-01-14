/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source, PKPaymentVerificationObserverDelegate;
@class NSObject, NSString, PKPaymentPass, PKVerificationChannel;

@interface PKPaymentVerificationObserver : NSObject {

	BOOL _observing;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSString* _identifier;
	PKPaymentPass* _pass;
	PKVerificationChannel* _verificationChannel;
	id<PKPaymentVerificationObserverDelegate> _delegate;

}

@property (nonatomic,retain,readonly) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                          //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain,readonly) PKVerificationChannel * verificationChannel;                   //@synthesize verificationChannel=_verificationChannel - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentVerificationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKPaymentVerificationObserverDelegate>)delegate;
-(id)initWithPaymentPass:(id)arg1 verificationChannel:(id)arg2 identifier:(id)arg3 ;
-(void)startObservingVerificationSourceWithTimeout:(double)arg1 ;
-(PKVerificationChannel *)verificationChannel;
-(void)stop;
-(void)setDelegate:(id<PKPaymentVerificationObserverDelegate>)arg1 ;
-(PKPaymentPass *)pass;
-(NSString *)identifier;
-(void)dealloc;
@end

