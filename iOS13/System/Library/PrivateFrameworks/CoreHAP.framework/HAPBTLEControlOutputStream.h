/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPBTLEControlOutputStreamDelegate, OS_dispatch_queue;
@class HAPBTLETransactionIdentifier, NSData, NSObject, NSOperationQueue;

@interface HAPBTLEControlOutputStream : HMFObject {

	unsigned char _type;
	BOOL _complete;
	BOOL _open;
	id<HAPBTLEControlOutputStreamDelegate> _delegate;
	HAPBTLETransactionIdentifier* _transactionIdentifier;
	NSData* _payload;
	unsigned long long _mtuLength;
	double _timeoutInterval;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned long long _controlPayloadWrittenLength;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,copy) id completionHandler; 
@property (assign,getter=isComplete,nonatomic) BOOL complete;                                     //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                                             //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) unsigned long long controlPayloadWrittenLength;                      //@synthesize controlPayloadWrittenLength=_controlPayloadWrittenLength - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (__weak) id<HAPBTLEControlOutputStreamDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) HAPBTLETransactionIdentifier * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * payload;                                             //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned long long mtuLength;                                      //@synthesize mtuLength=_mtuLength - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                            //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(id)shortDescription;
-(id)init;
-(id)description;
-(id)debugDescription;
-(unsigned char)type;
-(BOOL)open;
-(void)close;
-(id<HAPBTLEControlOutputStreamDelegate>)delegate;
-(void)setDelegate:(id<HAPBTLEControlOutputStreamDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(BOOL)isOpen;
-(NSData *)payload;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)shortDescription;
-(BOOL)isComplete;
-(void)setComplete:(BOOL)arg1 ;
-(void)_complete;
-(double)timeoutInterval;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setOpen:(BOOL)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HAPBTLETransactionIdentifier *)transactionIdentifier;
-(unsigned long long)mtuLength;
-(void)_closeWithError:(id)arg1 ;
-(id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 controlPayload:(id)arg3 mtuLength:(unsigned long long)arg4 timeoutInterval:(double)arg5 ;
-(unsigned long long)remainingControlPayloadLength;
-(unsigned long long)controlPayloadWrittenLength;
-(void)sendNextPayloadFragment;
-(void)_sendNextPayloadFragmentWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_nextPacketWithMaximumLength:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setControlPayloadWrittenLength:(unsigned long long)arg1 ;
@end

