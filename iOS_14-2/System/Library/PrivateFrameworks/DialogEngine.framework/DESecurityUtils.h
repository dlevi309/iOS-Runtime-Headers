/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@interface DESecurityUtils : NSObject
+(id)randomDataOfLength:(unsigned long long)arg1 ;
+(id)getRandomKey;
+(id)getKeyFromData:(id)arg1 ;
+(id)getRandomIV;
+(id)sign:(id)arg1 privateKey:(id)arg2 ;
+(BOOL)verify:(id)arg1 expected:(id)arg2 publicKey:(id)arg3 ;
@end

