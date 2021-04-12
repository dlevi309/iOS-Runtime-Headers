/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableIndexSet, NSIndexSet;

@interface _UIRTree : NSObject {

	shared_ptr<_UIRTreeContainerNode>* _root;
	NSRange _allIndexesRange;
	NSMutableIndexSet* _allIndexes;

}

@property (nonatomic,readonly) CGRect boundingFrame; 
@property (nonatomic,readonly) NSIndexSet * allIndexes; 
-(id)init;
-(id)description;
-(id)visualDescription;
-(id)indexesForFramesIntersectingFrame:(CGRect)arg1 ;
-(void)insertFrame:(CGRect)arg1 forIndex:(long long)arg2 ;
-(CGRect)boundingFrame;
-(NSIndexSet *)allIndexes;
-(void)enumerateFramesWithBlock:(/*^block*/id)arg1 ;
-(CGRect)_frameForIndex:(long long)arg1 ;
@end

