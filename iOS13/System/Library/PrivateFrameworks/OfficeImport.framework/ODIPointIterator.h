/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIPointIterator : NSObject
+(id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3 ;
+(id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3 ;
+(void)processSelfAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processChildAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(BOOL)isDoneForState:(ODIPointIteratorState*)arg1 ;
+(BOOL)isPoint:(id)arg1 ofType:(int)arg2 ;
+(BOOL)addPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
@end

