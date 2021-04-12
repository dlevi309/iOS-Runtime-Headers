/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFCollectingDataConsumer.h>

@class NSArray, NSString;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {

	int _SecCMSError;
	SecCmsMessageStrRef _message;
	SecCmsDigestContextStrRef _digest;
	NSArray* _signers;
	SecCmsSignedDataStrRef _signedData;
	SecCmsEnvelopedDataStrRef _envelopedData;
	BOOL _isEncrypted;

}

@property (setter=ecCMSError,nonatomic,readonly) int lastSecCMSError;              //@synthesize SecCMSError=_SecCMSError - In the implementation block
@property (nonatomic,readonly) NSArray * signers;                                  //@synthesize signers=_signers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(id)signedData;
-(id)initWithPartData:(id)arg1 error:(id*)arg2 ;
-(BOOL)containsSignedContent;
-(int)lastSecCMSError;
-(id)verifyAgainstSenders:(id)arg1 signingError:(id*)arg2 ;
-(NSArray *)signers;
-(BOOL)isContentEncrypted;
-(BOOL)isContentSigned;
@end

