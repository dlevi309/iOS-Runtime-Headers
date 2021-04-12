/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBIconIndexNode <NSObject>
@required
-(id)nodeIdentifier;
-(void)addNodeObserver:(id)arg1;
-(void)removeNodeObserver:(id)arg1;
-(BOOL)containsNodeIdentifier:(id)arg1;
-(id)nodeDescriptionWithPrefix:(id)arg1;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
-(id)containedNodeIdentifiers;

@end

