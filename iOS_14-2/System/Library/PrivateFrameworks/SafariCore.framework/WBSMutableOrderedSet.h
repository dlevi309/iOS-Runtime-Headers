/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class NSMutableOrderedSet, NSArray;

@interface WBSMutableOrderedSet : NSObject {

	NSMutableOrderedSet* _mutableOrderedSet;
	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) NSArray * array; 
-(id)init;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(NSArray *)array;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)_moveObjectAtIndexToLast:(unsigned long long)arg1 ;
-(id)objectAtIndexWithoutAffectingRecency:(unsigned long long)arg1 ;
-(void)markObjectAsRecentlyUsed:(id)arg1 ;
@end

