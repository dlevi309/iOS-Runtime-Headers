/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRCryptoPairingMessage : MRProtocolMessage

@property (nonatomic,readonly) NSData * pairingData; 
@property (nonatomic,readonly) int status; 
@property (getter=isRetrying,nonatomic,readonly) BOOL retrying; 
@property (getter=isUsingSystemPairing,nonatomic,readonly) BOOL usingSystemPairing; 
@property (nonatomic,readonly) unsigned long long state; 
-(unsigned long long)type;
-(unsigned long long)state;
-(int)status;
-(unsigned long long)encryptionType;
-(BOOL)isUsingSystemPairing;
-(NSData *)pairingData;
-(BOOL)isRetrying;
-(id)initWithPairingData:(id)arg1 status:(int)arg2 isRetrying:(BOOL)arg3 isUsingSystemPairing:(BOOL)arg4 state:(unsigned long long)arg5 ;
-(id)initWithPairingData:(id)arg1 status:(int)arg2 ;
@end

