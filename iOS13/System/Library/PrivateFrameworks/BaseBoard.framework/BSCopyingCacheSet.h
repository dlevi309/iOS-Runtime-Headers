/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject {

	NSMutableSet* _mutable;
	NSSet* _immutable;

}

@property (readonly) unsigned long long count; 
-(id)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)immutableSet;
@end

