/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/

#import <IOKitten/IOKRegistryEntry.h>

@interface IOKService : IOKRegistryEntry
+(id)serviceMatching:(id)arg1 ;
+(id)addNotificationOfType:(id)arg1 forMatching:(id)arg2 usingNotificationPort:(id)arg3 error:(id*)arg4 withHandler:(/*^block*/id)arg5 ;
+(id)matchingService:(id)arg1 ;
+(id)matchingServices:(id)arg1 error:(id*)arg2 ;
+(id)nameMatching:(id)arg1 ;
+(id)bsdNameMatching:(id)arg1 ;
+(id)entryIDMatching:(unsigned long long)arg1 ;
+(id)addNotificationOfType:(id)arg1 forMatching:(id)arg2 usingNotificationPort:(id)arg3 error:(id*)arg4 withEnumerationBlock:(/*^block*/id)arg5 ;
-(unsigned)busyState;
-(id)initWithServiceEntry:(unsigned)arg1 ;
-(BOOL)requestProbeWithOptions:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)matchesPropertyTable:(id)arg1 error:(id*)arg2 ;
-(id)connectToServiceOfType:(unsigned)arg1 ;
-(BOOL)isServiceAuthorizedForOpenAllowInteraction:(BOOL)arg1 ;
-(id)addInterestNotifcationOfType:(id)arg1 usingNotificationPort:(id)arg2 error:(id*)arg3 withHandler:(/*^block*/id)arg4 ;
@end

