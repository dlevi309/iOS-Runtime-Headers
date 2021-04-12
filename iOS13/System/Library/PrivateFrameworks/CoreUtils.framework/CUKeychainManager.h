/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUKeychainManager : NSObject
-(id)copyItemMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)copyItemsMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)addItem:(id)arg1 error:(id*)arg2 ;
-(id)addItem:(id)arg1 returnFlags:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)addOrUpdateOrReAddItem:(id)arg1 logCategory:(LogCategory*)arg2 logLabel:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeItemMatchingItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id*)arg3 ;
@end

