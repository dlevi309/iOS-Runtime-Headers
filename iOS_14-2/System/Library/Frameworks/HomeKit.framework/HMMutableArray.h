/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMFUnfairLock, NSMutableArray, NSArray;

@interface HMMutableArray : NSObject {

	HMFUnfairLock* _lock;
	NSMutableArray* _internal;

}

@property (nonatomic,copy,readonly) NSMutableArray * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSArray * array; 
@property (nonatomic,readonly) unsigned long long count; 
+(id)array;
+(id)arrayWithArray:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(NSMutableArray *)internal;
-(NSArray *)array;
-(unsigned long long)count;
-(id)firstItemWithUUID:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)firstItemWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(void)addObjectIfNotPresent:(id)arg1 ;
-(id)firstItemWithInstanceID:(id)arg1 ;
-(id)firstItemWithCharacteristicType:(id)arg1 ;
-(id)firstItemWithName:(id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(id)itemsWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIfDifferent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)firstItemWithUniqueIdentifier:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

