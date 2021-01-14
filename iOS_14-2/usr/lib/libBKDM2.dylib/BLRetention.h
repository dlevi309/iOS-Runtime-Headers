/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBKDM2.dylib
*/


@interface BLRetention : NSObject
+(void)initialize;
+(void)removeItemAtPath:(id)arg1 ;
+(void)setPurgeableAtPath:(id)arg1 directory:(BOOL)arg2 ;
+(void)applyPolicyWithPath:(id)arg1 sizeLimit:(unsigned long long)arg2 freeSpaceLimit:(unsigned long long)arg3 ;
+(void)applyCustomerPolicyWithPath:(id)arg1 ;
+(void)setRetentionType:(id)arg1 atPath:(id)arg2 ;
+(void)limitSequenceDirs:(id)arg1 withSize:(unsigned long long*)arg2 toCount:(unsigned long long)arg3 keepNewest:(BOOL)arg4 removalMethod:(/*^block*/id)arg5 ;
+(unsigned long long)stripSequenceAtPath:(id)arg1 ;
+(void)limitSequenceDirs:(id)arg1 withSize:(unsigned long long*)arg2 toCount:(unsigned long long)arg3 withReplaceInterval:(double)arg4 removalMethod:(/*^block*/id)arg5 ;
+(void)applyPolicyWithPath:(id)arg1 sizeLimit:(unsigned long long)arg2 freeMissingSpace:(unsigned long long)arg3 ;
+(id)retentionPolicyTypes;
+(void)limitSequenceDirs:(id)arg1 withSize:(unsigned long long*)arg2 removalMethod:(/*^block*/id)arg3 ;
+(void)limitSequenceDirs:(id)arg1 withSize:(unsigned long long*)arg2 ;
+(void)applyCustomerPolicyForType:(id)arg1 withSequenceDirs:(id)arg2 withSize:(unsigned long long*)arg3 ;
+(void)applyPolicyForType:(id)arg1 withSequenceDirs:(id)arg2 withSize:(unsigned long long*)arg3 ;
@end

