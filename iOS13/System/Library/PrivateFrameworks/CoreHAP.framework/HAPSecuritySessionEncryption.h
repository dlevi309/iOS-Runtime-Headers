/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@class NSData, NSMutableData;

@interface HAPSecuritySessionEncryption : NSObject {

	NSData* _inputKey;
	NSMutableData* _inputNonce;
	NSData* _outputKey;
	NSMutableData* _outputNonce;

}

@property (nonatomic,retain) NSData * inputKey;                        //@synthesize inputKey=_inputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * inputNonce;               //@synthesize inputNonce=_inputNonce - In the implementation block
@property (nonatomic,retain) NSData * outputKey;                       //@synthesize outputKey=_outputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * outputNonce;              //@synthesize outputNonce=_outputNonce - In the implementation block
-(id)init;
-(NSData *)outputKey;
-(void)setOutputKey:(NSData *)arg1 ;
-(void)setInputKey:(NSData *)arg1 ;
-(void)setInputNonce:(NSMutableData *)arg1 ;
-(void)setOutputNonce:(NSMutableData *)arg1 ;
-(NSData *)inputKey;
-(NSMutableData *)inputNonce;
-(NSMutableData *)outputNonce;
-(id)initWithInputKey:(id)arg1 outputKey:(id)arg2 ;
-(id)encrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 ;
-(id)decrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(const void*)arg1 length:(unsigned long long)arg2 additionalAuthData:(const void*)arg3 additionalAuthDataLength:(unsigned long long)arg4 authTagData:(const void*)arg5 authTagDataLength:(unsigned long long)arg6 error:(id*)arg7 ;
@end

