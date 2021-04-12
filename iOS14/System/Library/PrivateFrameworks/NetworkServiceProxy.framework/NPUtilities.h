/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
@interface NPUtilities : NSObject
+(void)fillOutConnectionInfo:(id)arg1 withPath:(id)arg2 interface:(id)arg3 remoteEndpoint:(id)arg4 parameters:(id)arg5 outputHandler:(nw_protocol*)arg6 ;
+(id)copyDataFromKeychainWithIdentifier:(id)arg1 accountName:(id)arg2 ;
+(id)stripWhitespace:(id)arg1 ;
+(BOOL)printDictionaryAsJson:(id)arg1 debugName:(id)arg2 ;
+(id)copyDataHexString:(id)arg1 ;
+(void)removeDataFromKeychainWithIdentifier:(id)arg1 ;
+(id)timestampIdentifierToName:(unsigned long long)arg1 ;
+(id)parseXHost:(id)arg1 ;
+(id)getInterfaceName:(long long)arg1 ;
+(id)hexDumpBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)copyNetworkDescription:(id)arg1 ;
+(id)endpointFromString:(id)arg1 defaultPortString:(id)arg2 ;
+(id)copyItemIdentifiersFromKeychainWithAccountName:(id)arg1 ;
+(long long)interfaceTypeOfInterface:(id)arg1 ;
+(long long)interfaceTypeOfNWInterface:(id)arg1 ;
+(id)getInterfaceTypeString:(long long)arg1 ;
+(void)parseXTimeout:(id)arg1 hardTTLInSeconds:(double*)arg2 ;
+(id)getHashForObject:(id)arg1 ;
+(id)copyCurrentNetworkCharacteristicsForPath:(id)arg1 ;
+(id)connectionInfoToDict:(id)arg1 dictionary:(id)arg2 ;
+(BOOL)hasPacketDrop:(id)arg1 ;
+(BOOL)rollDiceWithSuccessRatio:(id)arg1 ;
+(void)saveDataToKeychain:(id)arg1 withIdentifier:(id)arg2 accountName:(id)arg3 ;
+(long long)protocolTypeFromPath:(id)arg1 endpoint:(id)arg2 ;
+(BOOL)compareAddressEndpoints:(id)arg1 endpoint2:(id)arg2 addressOnly:(BOOL)arg3 ;
+(unsigned long long)parseXRTT:(id)arg1 ;
@end

