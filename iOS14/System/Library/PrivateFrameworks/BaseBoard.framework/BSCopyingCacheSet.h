/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject {

	NSMutableSet* _mutable;
	NSSet* _immutable;

}

@property (readonly) unsigned long long count; 
-(id)immutableSet;
-(unsigned long long)count;
-(BOOL)containsObject:(id)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
@end

