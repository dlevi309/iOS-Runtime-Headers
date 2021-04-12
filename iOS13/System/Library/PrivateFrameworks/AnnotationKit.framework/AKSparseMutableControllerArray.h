/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface AKSparseMutableControllerArray : NSMutableArray {

	NSMutableArray* _backendArray;

}
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)_backFillUntilCount:(unsigned long long)arg1 ;
-(BOOL)containsAnyObjects:(id)arg1 ;
@end

