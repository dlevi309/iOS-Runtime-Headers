/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <MIME/MFBufferedDataConsumer.h>

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {

	int _SecCMSError;
	SecCmsEncoderStrRef _encoder;
	SecCmsMessageStrRef _message;
	NSMutableData* _singleShot;

}

@property (setter=ecCMSError,nonatomic,readonly) int lastSecCMSError;              //@synthesize SecCMSError=_SecCMSError - In the implementation block
-(void)done;
-(int)lastSecCMSError;
-(id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id*)arg3 ;
-(id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id*)arg2 ;
-(void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)dealloc;
@end

