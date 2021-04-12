/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class NSMutableOrderedSet, NSArray;

@interface WBSMutableOrderedSet : NSObject {

	NSMutableOrderedSet* _mutableOrderedSet;
	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) NSArray * array; 
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(NSArray *)array;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(void)_moveObjectAtIndexToLast:(unsigned long long)arg1 ;
-(id)objectAtIndexWithoutAffectingRecency:(unsigned long long)arg1 ;
-(void)markObjectAsRecentlyUsed:(id)arg1 ;
@end

