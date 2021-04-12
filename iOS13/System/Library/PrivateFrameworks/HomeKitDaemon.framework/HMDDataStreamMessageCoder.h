/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@interface HMDDataStreamMessageCoder : NSObject
+(BOOL)readHeaderFromPartialData:(id)arg1 frameType:(unsigned char*)arg2 payloadLength:(unsigned long long*)arg3 ;
+(id)encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id*)arg4 ;
+(id)eventHeaderForProtocol:(id)arg1 topic:(id)arg2 ;
+(id)responseHeaderForRequestHeader:(id)arg1 status:(unsigned short)arg2 ;
+(id)requestHeaderForProtocol:(id)arg1 topic:(id)arg2 identifier:(id)arg3 ;
+(BOOL)decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id*)arg3 receivedPayload:(id*)arg4 error:(id*)arg5 ;
+(BOOL)_decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id*)arg3 receivedPayload:(id*)arg4 error:(id*)arg5 ;
+(id)_encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id*)arg4 ;
+(BOOL)readHeaderFromPartialData:(const char*)arg1 length:(unsigned long long)arg2 frameType:(unsigned char*)arg3 payloadLength:(unsigned long long*)arg4 ;
@end

