/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)mtuLength;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isComplete;
-(NSOperationQueue *)operationQueue;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)open;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id<HAPBTLEControlOutputStreamDelegate>)delegate;
-(BOOL)isOpen;
-(void)close;
-(void)_complete;
-(id)shortDescription;
-(id)debugDescription;
-(id)completionHandler;
-(NSData *)payload;
-(double)timeoutInterval;
-(void)setDelegate:(id<HAPBTLEControlOutputStreamDelegate>)arg1 ;
-(id)description;
-(unsigned char)type;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(HAPBTLETransactionIdentifier *)transactionIdentifier;
-(void)_closeWithError:(id)arg1 ;
-(id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 controlPayload:(id)arg3 mtuLength:(unsigned long long)arg4 timeoutInterval:(double)arg5 ;
-(unsigned long long)remainingControlPayloadLength;
-(unsigned long long)controlPayloadWrittenLength;
-(void)sendNextPayloadFragment;
-(void)_sendNextPayloadFragmentWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_nextPacketWithMaximumLength:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setControlPayloadWrittenLength:(unsigned long long)arg1 ;
@end

