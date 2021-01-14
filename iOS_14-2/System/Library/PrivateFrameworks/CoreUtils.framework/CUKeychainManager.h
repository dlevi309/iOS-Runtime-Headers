/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUKeychainManager : NSObject
-(id)copyItemMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id*)arg3 ;
-(id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)removeItemMatchingItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)addItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)addOrUpdateOrReAddItem:(id)arg1 logCategory:(LogCategory*)arg2 logLabel:(id)arg3 error:(id*)arg4 ;
-(id)addItem:(id)arg1 returnFlags:(unsigned)arg2 error:(id*)arg3 ;
-(id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)copyItemsMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
@end

