/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@interface HMBSQLFile : HMFObject
+(id)contexts;
+(id)contextLock;
+(id)open:(id)arg1 ;
+(void)close:(id)arg1 ;
+(void)removeDatastoreAtURL:(id)arg1 ;
+(id)open:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 initializer:(/*^block*/id)arg4 ;
+(id)open:(id)arg1 readOnly:(BOOL)arg2 using:(Class)arg3 error:(id*)arg4 ;
@end

