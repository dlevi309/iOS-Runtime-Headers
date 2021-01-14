/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface AKSparseMutableControllerArray : NSMutableArray {

	NSMutableArray* _backendArray;

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)_backFillUntilCount:(unsigned long long)arg1 ;
-(BOOL)containsAnyObjects:(id)arg1 ;
@end

