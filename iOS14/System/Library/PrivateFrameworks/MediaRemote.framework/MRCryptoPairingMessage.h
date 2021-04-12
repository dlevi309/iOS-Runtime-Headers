/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPairingData:(id)arg1 status:(int)arg2 isRetrying:(BOOL)arg3 isUsingSystemPairing:(BOOL)arg4 state:(unsigned long long)arg5 ;
-(BOOL)isRetrying;
-(unsigned long long)encryptionType;
-(id)initWithPairingData:(id)arg1 status:(int)arg2 ;
-(unsigned long long)type;
-(unsigned long long)state;
-(BOOL)isUsingSystemPairing;
-(NSData *)pairingData;
-(int)status;
@end

