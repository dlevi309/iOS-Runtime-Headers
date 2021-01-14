/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@interface HMBSQLFile : HMFObject
+(void)removeDatastoreAtURL:(id)arg1 ;
+(id)contextLock;
+(id)open:(id)arg1 ;
+(id)open:(id)arg1 readOnly:(BOOL)arg2 using:(Class)arg3 error:(id*)arg4 ;
+(id)open:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 initializer:(/*^block*/id)arg4 ;
+(id)contexts;
+(void)close:(id)arg1 ;
@end

