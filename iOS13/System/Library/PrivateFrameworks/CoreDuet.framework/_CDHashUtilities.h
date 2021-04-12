/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _CDHashUtilities : NSObject
+(id)sha1ForString:(id)arg1 ;
+(id)sha1ForData:(id)arg1 ;
+(id)md5ForData:(id)arg1 ;
+(id)md5ForString:(id)arg1 ;
+(id)hexStringFromData:(id)arg1 ;
+(unsigned long long)FNV1aForData:(id)arg1 ;
+(id)md5ForObjectDescription:(id)arg1 ;
+(id)md5forDictionary:(id)arg1 error:(id*)arg2 ;
+(id)sha256Hash:(id)arg1 withSalt:(id)arg2 ;
+(unsigned long long)FNV1aForString:(id)arg1 ;
@end

