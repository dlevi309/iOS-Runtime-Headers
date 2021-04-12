/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@interface HAPPairingUtilities : HMFObject
+(id)createAddPairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2 ;
+(id)createRemovePairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2 ;
+(BOOL)parseRemovePairingResponse:(id)arg1 error:(id*)arg2 ;
+(BOOL)parseAddPairingResponse:(id)arg1 error:(id*)arg2 ;
+(id)createListPairingsRequest:(id*)arg1 ;
+(id)parseListPairingsResponse:(id)arg1 error:(id*)arg2 ;
@end

