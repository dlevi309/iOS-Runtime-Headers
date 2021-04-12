/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@interface HAPProtocolMessages : HMFObject
+(id)logCategory;
+(id)constructTokenRequest:(id)arg1 outTID:(char*)arg2 ;
+(BOOL)parseTokenResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(BOOL)arg3 outToken:(id*)arg4 outUUID:(id*)arg5 ;
+(id)constructTokenUpdateRequest:(id)arg1 token:(id)arg2 outTID:(char*)arg3 ;
+(BOOL)parseTokenUpdateResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(BOOL)arg3 ;
+(id)parseInfoResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(BOOL)arg3 ;
+(id)constructInfoRequest:(id)arg1 outTID:(char*)arg2 ;
+(id)constructRequestHeaderFor:(unsigned long long)arg1 instanceID:(id)arg2 outTID:(char*)arg3 ;
+(id)constructInfoRequest:(id)arg1 serviceUUID:(id)arg2 outTID:(char*)arg3 ;
@end

