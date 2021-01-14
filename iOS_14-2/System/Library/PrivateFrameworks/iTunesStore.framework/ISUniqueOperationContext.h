/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {

	NSMutableSet* _operations;
	NSMutableDictionary* _uniqueOperations;

}
-(void)setUniqueOperation:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(unsigned long long)countOfOperations;
-(id)uniqueOperationForKey:(id)arg1 ;
-(void)removeOperation:(id)arg1 ;
-(BOOL)containsOperation:(id)arg1 ;
-(void)dealloc;
@end

