/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <MIME/MFBufferedDataConsumer.h>

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {

	int _SecCMSError;
	SecCmsEncoderStrRef _encoder;
	SecCmsMessageStrRef _message;
	NSMutableData* _singleShot;

}

@property (setter=ecCMSError,nonatomic,readonly) int lastSecCMSError;              //@synthesize SecCMSError=_SecCMSError - In the implementation block
-(void)dealloc;
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(int)lastSecCMSError;
-(id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id*)arg3 ;
-(id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id*)arg2 ;
-(void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

