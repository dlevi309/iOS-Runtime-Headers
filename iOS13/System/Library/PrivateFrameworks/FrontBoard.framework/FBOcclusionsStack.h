/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class NSCountedSet, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface FBOcclusionsStack : NSObject {

	NSCountedSet* _levels;
	NSMutableDictionary* _levelToCompositeOcclusions;
	NSMutableDictionary* _keyToEntry;
	NSMutableArray* _orderedEntries;
	NSMutableSet* _dirtyKeys;

}
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isDirty;
-(void)removeKey:(id)arg1 ;
-(void)_adjustEntry:(id)arg1 forLevel:(double)arg2 occlusions:(id)arg3 ;
-(void)setKey:(id)arg1 toLevel:(double)arg2 withOcclusions:(id)arg3 ;
-(void)enumerateKeysByLevelWithBlock:(/*^block*/id)arg1 ;
-(id)dirtyKeys;
-(id)occlusionsAppliedToKey:(id)arg1 ;
@end

