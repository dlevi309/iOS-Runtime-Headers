/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface PFBase64Codec : NSObject
+(const char*)alphabet;
+(const char*)decoder;
+(unsigned long long)encodedUuidLength;
+(BOOL)appendPadding;
+(BOOL)checkTerminators:(long long)arg1 expected:(long long)arg2 ;
+(id)encodeBytes:(const void*)arg1 withLength:(unsigned long long)arg2 ;
+(BOOL)decodeString:(id)arg1 with:(/*^block*/id)arg2 ;
+(id)encodeData:(id)arg1 ;
+(id)encodeUuid:(id)arg1 ;
+(id)decodeString:(id)arg1 ;
+(id)decodeUuid:(id)arg1 ;
-(id)init;
@end

