/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)visualDescription;
-(NSIndexSet *)allIndexes;
-(id)init;
-(id)indexesForFramesIntersectingFrame:(CGRect)arg1 ;
-(id)description;
-(void)insertFrame:(CGRect)arg1 forIndex:(long long)arg2 ;
-(CGRect)_frameForIndex:(long long)arg1 ;
-(CGRect)boundingFrame;
-(void)enumerateFramesWithBlock:(/*^block*/id)arg1 ;
@end

