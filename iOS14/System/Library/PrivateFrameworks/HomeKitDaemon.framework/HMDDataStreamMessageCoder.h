/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@interface HMDDataStreamMessageCoder : NSObject
+(BOOL)readHeaderFromPartialData:(id)arg1 frameType:(unsigned char*)arg2 payloadLength:(unsigned long long*)arg3 ;
+(id)encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id*)arg4 ;
+(id)buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id*)arg3 ;
+(id)eventHeaderForProtocol:(id)arg1 topic:(id)arg2 ;
+(id)responseHeaderForRequestHeader:(id)arg1 status:(unsigned short)arg2 ;
+(id)requestHeaderForProtocol:(id)arg1 topic:(id)arg2 identifier:(id)arg3 ;
+(BOOL)decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id*)arg3 receivedPayload:(id*)arg4 error:(id*)arg5 ;
+(BOOL)unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id*)arg2 receivedPayload:(id*)arg3 error:(id*)arg4 ;
+(BOOL)_decodeOPACKFrame:(id)arg1 receivedHeader:(id*)arg2 receivedPayload:(id*)arg3 error:(id*)arg4 ;
+(id)_encodeOPACKHeader:(id)arg1 payload:(id)arg2 error:(id*)arg3 ;
+(BOOL)_decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id*)arg3 receivedPayload:(id*)arg4 error:(id*)arg5 ;
+(id)_encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id*)arg4 ;
+(BOOL)_unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id*)arg2 receivedPayload:(id*)arg3 error:(id*)arg4 ;
+(id)_buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id*)arg3 ;
+(BOOL)readHeaderFromPartialData:(const char*)arg1 length:(unsigned long long)arg2 frameType:(unsigned char*)arg3 payloadLength:(unsigned long long*)arg4 ;
@end
