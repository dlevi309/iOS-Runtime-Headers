/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface PFBase64Codec : NSObject
+(id)encodeData:(id)arg1 ;
+(const char*)decoder;
+(const char*)alphabet;
+(unsigned long long)encodedUuidLength;
+(BOOL)appendPadding;
+(BOOL)decodeString:(id)arg1 with:(/*^block*/id)arg2 ;
+(BOOL)checkTerminators:(long long)arg1 expected:(long long)arg2 ;
+(id)encodeBytes:(const void*)arg1 withLength:(unsigned long long)arg2 ;
+(id)encodeUuid:(id)arg1 ;
+(id)decodeString:(id)arg1 ;
+(id)decodeUuid:(id)arg1 ;
-(id)init;
@end

