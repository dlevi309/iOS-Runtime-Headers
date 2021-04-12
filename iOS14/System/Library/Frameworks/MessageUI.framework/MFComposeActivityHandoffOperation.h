/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, MFComposeActivityHandoffOperationDelegate;
@class NSObject, NSInputStream, NSOutputStream, NSData, NSString;

@interface MFComposeActivityHandoffOperation : NSOperation <NSStreamDelegate> {

	BOOL _finished;
	BOOL _executing;
	NSObject*<OS_dispatch_queue> _streamHandlerQueue;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSData* _draftData;
	unsigned long long _draftDataByteIndex;
	unsigned long long _draftBytesReceived;
	unsigned long long _draftExpectedSize;
	long long _transmissionType;
	BOOL _doneWithInputStream;
	BOOL _doneWithOutputStream;
	id<MFComposeActivityHandoffOperationDelegate> _delegate;

}

@property (nonatomic,retain) NSData * draftData;                                                         //@synthesize draftData=_draftData - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesReceived;                                         //@synthesize draftBytesReceived=_draftBytesReceived - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesExpected;                                         //@synthesize draftExpectedSize=_draftExpectedSize - In the implementation block
@property (assign,nonatomic) long long transmissionType;                                                 //@synthesize transmissionType=_transmissionType - In the implementation block
@property (assign,nonatomic,__weak) id<MFComposeActivityHandoffOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)receivingOperationWithInputStream:(id)arg1 outputStream:(id)arg2 ;
+(id)sendingOperationWithDraftData:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
-(id<MFComposeActivityHandoffOperationDelegate>)delegate;
-(void)start;
-(void)_complete;
-(BOOL)isFinished;
-(void)setDelegate:(id<MFComposeActivityHandoffOperationDelegate>)arg1 ;
-(unsigned long long)bytesReceived;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)setTransmissionType:(long long)arg1 ;
-(void)setDraftData:(NSData *)arg1 ;
-(void)_startHandoffStreams;
-(void)_commonHandoffStreamInitializationWithStream:(id)arg1 ;
-(void)_receivingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_receivingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_sendingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_sendingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_handleErrorCode:(unsigned long long)arg1 logString:(id)arg2 ;
-(void)_didFinishTransferringHandoffPayload;
-(void)_failedToTransferHandoffPayload;
-(unsigned long long)bytesExpected;
-(void)_checkInHandoffStream:(id)arg1 ;
-(void)_finishReceivingHandoffDataAndCloseStream;
-(long long)transmissionType;
-(NSData *)draftData;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
@end

