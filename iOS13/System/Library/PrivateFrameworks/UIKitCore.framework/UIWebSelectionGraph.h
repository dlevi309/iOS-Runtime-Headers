/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray;

@interface UIWebSelectionGraph : NSObject {

	NSMutableArray* _selectionNodes;

}
-(id)init;
-(void)dealloc;
-(id)addNodeFromSelection:(id)arg1 ;
-(void)exploreFromNode:(id)arg1 outwards:(BOOL)arg2 maxDepth:(int)arg3 ;
-(void)clearNodes;
-(void)exploreFromNode:(id)arg1 ;
@end

